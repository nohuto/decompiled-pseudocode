/*
 * XREFs of IoReleaseRemoveLockEx @ 0x140270610
 * Callers:
 *     PoFxPrepareDevice @ 0x14048E428 (PoFxPrepareDevice.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404BC5A4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1404F588C (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1405D1CF4 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxAcpiForwardNotification @ 0x1405DC4B4 (PopFxAcpiForwardNotification.c)
 *     DifIoReleaseRemoveLockExWrapper @ 0x14062A800 (DifIoReleaseRemoveLockExWrapper.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x140B9CF10 (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x140B9D440 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x140B9D540 (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140B928C8 (VfRemLockReportBadReleaseTag.c)
 */

void __stdcall IoReleaseRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  char v5; // bp
  KIRQL v6; // al
  struct _LIST_ENTRY *Flink; // r14
  KIRQL v8; // dl
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY **p_Flink; // r12
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  KIRQL v13; // [rsp+60h] [rbp+18h]

  if ( RemlockSize == 120 )
  {
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
    Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
    v8 = v6;
    v13 = v6;
    v9 = Flink;
    if ( Flink )
    {
      do
      {
        if ( v5 || v9->Blink != Tag )
        {
          Flink = v9;
          v9 = v9->Flink;
        }
        else
        {
          v10 = v9->Flink;
          v5 = 1;
          if ( v9 == RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink )
          {
            RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v10;
            p_Flink = &RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
          }
          else
          {
            Flink->Flink = v10;
            p_Flink = &Flink->Flink;
          }
          ExFreePoolWithTag(v9, 0);
          v9 = *p_Flink;
        }
      }
      while ( v9 );
      v8 = v13;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent, v8);
    if ( !v5
      && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0
      && ((MmVerifierData & 0x800) == 0
       || !(unsigned int)VfRemLockReportBadReleaseTag((ULONG_PTR)RemoveLock, (ULONG_PTR)Tag, retaddr)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
}
