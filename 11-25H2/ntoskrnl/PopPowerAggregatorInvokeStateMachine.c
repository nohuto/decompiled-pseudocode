/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140A3D438
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140A3D3B0 (PopPowerAggregatorWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140965C40 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceHandlerInvoke @ 0x140A3D4F0 (PopPowerAggregatorDiagTraceHandlerInvoke.c)
 */

__int64 PopPowerAggregatorInvokeStateMachine()
{
  __int64 LogEntry; // rax
  unsigned int v1; // ebx

  LogEntry = PopPowerAggregatorAllocateLogEntry((__int64)&PopPowerAggregatorContext, 3);
  *(_OWORD *)(LogEntry + 24) = xmmword_140F08290;
  *(_OWORD *)(LogEntry + 40) = xmmword_140F082A0;
  *(_QWORD *)(LogEntry + 56) = qword_140F082B0;
  *(_OWORD *)(LogEntry + 64) = xmmword_140F082B8;
  *(_OWORD *)(LogEntry + 80) = xmmword_140F082C8;
  PopPowerAggregatorDiagTraceHandlerInvoke(&xmmword_140F08290, &xmmword_140F082B8);
  v1 = guard_dispatch_icall_no_overrides(&PopPowerAggregatorContext);
  *(_DWORD *)(PopPowerAggregatorAllocateLogEntry((__int64)&PopPowerAggregatorContext, 4) + 24) = v1;
  return v1;
}
