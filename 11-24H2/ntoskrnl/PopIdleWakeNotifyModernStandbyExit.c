/*
 * XREFs of PopIdleWakeNotifyModernStandbyExit @ 0x1404A458C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404A462C (PopIdleWakeStopActiveIntervalAccounting.c)
 */

void PopIdleWakeNotifyModernStandbyExit()
{
  __int64 v0; // rsi
  KIRQL v1; // al
  char *v2; // rdi
  LARGE_INTEGER v3; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v0 = PopWnfCsEnterScenarioId;
  PerformanceCounter.QuadPart = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v2 = (char *)PopIdleWakeContext;
  PopIdleWakeContext = 0LL;
  KeReleaseSpinLock(&PopIdleWakeContextLock, v1);
  if ( v2 )
  {
    RtlGetInterruptTimePrecise(&PerformanceCounter);
    v3 = PerformanceCounter;
    PopIdleWakeStopActiveIntervalAccounting(v2);
    *((_QWORD *)v2 + 4758) = v0;
    *((LARGE_INTEGER *)v2 + 4759) = v3;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 38032), DelayedWorkQueue);
  }
}
