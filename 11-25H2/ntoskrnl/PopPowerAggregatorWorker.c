/*
 * XREFs of PopPowerAggregatorWorker @ 0x140A3D3B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140A3D438 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140A3D584 (PopPowerAggregatorDiagTraceEvent.c)
 */

__int64 PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140F09870 = (__int64)KeGetCurrentThread();
  while ( (dword_140F08288 & 2) != 0 )
  {
    dword_140F08288 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140F09870 = 0LL;
  dword_140F08288 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
