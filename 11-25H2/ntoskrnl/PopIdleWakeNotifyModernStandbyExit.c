/*
 * XREFs of PopIdleWakeNotifyModernStandbyExit @ 0x1404A969C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404A973C (PopIdleWakeStopActiveIntervalAccounting.c)
 */

void PopIdleWakeNotifyModernStandbyExit()
{
  __int64 v0; // rsi
  KIRQL v1; // al
  char *v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = PopWnfCsEnterScenarioId;
  v4 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v2 = (char *)PopIdleWakeContext;
  PopIdleWakeContext = 0LL;
  KeReleaseSpinLock(&PopIdleWakeContextLock, v1);
  if ( v2 )
  {
    RtlGetInterruptTimePrecise(&v4);
    v3 = v4;
    PopIdleWakeStopActiveIntervalAccounting(v2);
    *((_QWORD *)v2 + 4758) = v0;
    *((_QWORD *)v2 + 4759) = v3;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 38032), DelayedWorkQueue);
  }
}
