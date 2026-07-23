/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x1409A0628
 * Callers:
 *     PopPowerAggregatorWorker @ 0x1409A05A0 (PopPowerAggregatorWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorDiagTraceHandlerInvoke @ 0x1409A06E0 (PopPowerAggregatorDiagTraceHandlerInvoke.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409A3F9C (PopPowerAggregatorAllocateLogEntry.c)
 */

__int64 PopPowerAggregatorInvokeStateMachine()
{
  __int64 LogEntry; // rax
  unsigned int v1; // ebx

  LogEntry = PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 3LL);
  *(_OWORD *)(LogEntry + 24) = xmmword_140F08C70;
  *(_OWORD *)(LogEntry + 40) = xmmword_140F08C80;
  *(_QWORD *)(LogEntry + 56) = qword_140F08C90;
  *(_OWORD *)(LogEntry + 64) = xmmword_140F08C98;
  *(_OWORD *)(LogEntry + 80) = xmmword_140F08CA8;
  PopPowerAggregatorDiagTraceHandlerInvoke(&xmmword_140F08C70, &xmmword_140F08C98);
  v1 = guard_dispatch_icall_no_overrides(&PopPowerAggregatorContext, 3LL * (int)xmmword_140F08C70);
  *(_DWORD *)(PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 4LL) + 24) = v1;
  return v1;
}
