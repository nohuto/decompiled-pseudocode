/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x1409B9FD8
 * Callers:
 *     PopPowerAggregatorWorker @ 0x1409B9F50 (PopPowerAggregatorWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorDiagTraceHandlerInvoke @ 0x1409BA090 (PopPowerAggregatorDiagTraceHandlerInvoke.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409BD94C (PopPowerAggregatorAllocateLogEntry.c)
 */

__int64 PopPowerAggregatorInvokeStateMachine()
{
  __int64 LogEntry; // rax
  __int64 v1; // r9
  unsigned int v2; // ebx

  LogEntry = PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 3LL);
  *(_OWORD *)(LogEntry + 24) = xmmword_140F08910;
  *(_OWORD *)(LogEntry + 40) = xmmword_140F08920;
  *(_QWORD *)(LogEntry + 56) = qword_140F08930;
  *(_OWORD *)(LogEntry + 64) = xmmword_140F08938;
  *(_OWORD *)(LogEntry + 80) = xmmword_140F08948;
  PopPowerAggregatorDiagTraceHandlerInvoke(&xmmword_140F08910, &xmmword_140F08938);
  v2 = guard_dispatch_icall_no_overrides(
         &PopPowerAggregatorContext,
         3LL * (int)xmmword_140F08910,
         (int)xmmword_140F08938 + 6LL * (int)xmmword_140F08910,
         v1);
  *(_DWORD *)(PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 4LL) + 24) = v2;
  return v2;
}
