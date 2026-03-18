/*
 * XREFs of PopPowerAggregatorWorker @ 0x1409B9F50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x1409B9FD8 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1409BA124 (PopPowerAggregatorDiagTraceEvent.c)
 */

__int64 PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140F09EF0 = (__int64)KeGetCurrentThread();
  while ( (dword_140F08908 & 2) != 0 )
  {
    dword_140F08908 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140F09EF0 = 0LL;
  dword_140F08908 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  return PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
}
