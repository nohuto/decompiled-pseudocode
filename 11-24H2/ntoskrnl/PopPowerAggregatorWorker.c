/*
 * XREFs of PopPowerAggregatorWorker @ 0x1409A05A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x1409A0628 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1409A0774 (PopPowerAggregatorDiagTraceEvent.c)
 */

__int64 PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140F0A250 = (__int64)KeGetCurrentThread();
  while ( (dword_140F08C68 & 2) != 0 )
  {
    dword_140F08C68 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140F0A250 = 0LL;
  dword_140F08C68 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
