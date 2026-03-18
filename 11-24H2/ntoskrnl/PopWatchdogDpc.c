/*
 * XREFs of PopWatchdogDpc @ 0x1405D89F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140458FA8 (PopUpdateWatchdogNoWorkersEvent.c)
 */

void __fastcall PopWatchdogDpc(__int64 a1, __int64 a2)
{
  KIRQL v3; // di
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 16) != 1146572624 )
    __fastfail(5u);
  *(_QWORD *)(a2 + 360) = RtlGetInterruptTimePrecise(&v4);
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a2 + 208) && !*(_BYTE *)(a2 + 21) )
  {
    *(_BYTE *)(a2 + 21) = 1;
    *(_QWORD *)(a2 + 368) = RtlGetInterruptTimePrecise(&v4);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 176), RealTimeWorkQueue);
  }
  *(_BYTE *)(a2 + 20) = 0;
  PopUpdateWatchdogNoWorkersEvent(a2);
  KeReleaseSpinLock(&PopWatchdogLock, v3);
}
