/*
 * XREFs of PopWatchdogDpc @ 0x1405D5E90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1402BC7E4 (PopUpdateWatchdogNoWorkersEvent.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 */

void __fastcall PopWatchdogDpc(__int64 a1, __int64 a2)
{
  KIRQL v3; // di
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 16) != 1146572624 )
    __fastfail(5u);
  *(LARGE_INTEGER *)(a2 + 360) = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a2 + 208) && !*(_BYTE *)(a2 + 21) )
  {
    *(_BYTE *)(a2 + 21) = 1;
    *(LARGE_INTEGER *)(a2 + 368) = RtlGetInterruptTimePrecise(&PerformanceCounter);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 176), RealTimeWorkQueue);
  }
  *(_BYTE *)(a2 + 20) = 0;
  PopUpdateWatchdogNoWorkersEvent(a2);
  KeReleaseSpinLock(&PopWatchdogLock, v3);
}
