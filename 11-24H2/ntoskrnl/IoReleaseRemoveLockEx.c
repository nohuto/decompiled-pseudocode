/*
 * XREFs of IoReleaseRemoveLockEx @ 0x140225BA0
 * Callers:
 *     PoFxPrepareDevice @ 0x140488860 (PoFxPrepareDevice.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404B770C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1404F318C (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1405CF414 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxAcpiForwardNotification @ 0x1405D9384 (PopFxAcpiForwardNotification.c)
 *     DifIoReleaseRemoveLockExWrapper @ 0x140628DC0 (DifIoReleaseRemoveLockExWrapper.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x140B9EF10 (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x140B9F440 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x140B9F540 (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140B948C8 (VfRemLockReportBadReleaseTag.c)
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
