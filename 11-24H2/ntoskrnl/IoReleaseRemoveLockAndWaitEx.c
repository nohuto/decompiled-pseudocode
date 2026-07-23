/*
 * XREFs of IoReleaseRemoveLockAndWaitEx @ 0x1404A2380
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x1405D9660 (PopFxAcpiUnregisterDevice.c)
 *     DifIoReleaseRemoveLockAndWaitExWrapper @ 0x140628C40 (DifIoReleaseRemoveLockAndWaitExWrapper.c)
 *     PopFxUnregisterDevice @ 0x140A6EED4 (PopFxUnregisterDevice.c)
 *     ViFilterDispatchPnp @ 0x140B9F0B0 (ViFilterDispatchPnp.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140B9488C (VfRemLockReportBadReleaseAndWaitTag.c)
 */

void __stdcall IoReleaseRemoveLockAndWaitEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  LIST_ENTRY *p_WaitListHead; // rdi
  struct _LIST_ENTRY *Blink; // r8
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  RemoveLock->Common.Removed = 1;
  _InterlockedAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF);
  if ( _InterlockedDecrement(&RemoveLock->Common.IoCount) > 0 )
    KeWaitForSingleObject(&RemoveLock->Common.RemoveEvent, Executive, 0, 0, 0LL);
  if ( RemlockSize == 120
    && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0 )
  {
    p_WaitListHead = &RemoveLock[3].Common.RemoveEvent.Header.WaitListHead;
    Blink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink->Blink;
    if ( Tag != Blink )
    {
      if ( (MmVerifierData & 0x800) == 0 )
      {
LABEL_10:
        _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
        goto LABEL_11;
      }
      if ( !(unsigned int)VfRemLockReportBadReleaseAndWaitTag(
                            (ULONG_PTR)RemoveLock,
                            (ULONG_PTR)Tag,
                            (ULONG_PTR)Blink,
                            retaddr) )
      {
        p_WaitListHead = &RemoveLock[3].Common.RemoveEvent.Header.WaitListHead;
        goto LABEL_10;
      }
    }
LABEL_11:
    ExFreePoolWithTag(RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink, 0);
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MmBadPointer;
  }
}
