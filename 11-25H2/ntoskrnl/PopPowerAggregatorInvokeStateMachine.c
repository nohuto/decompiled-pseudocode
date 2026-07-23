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
  LARGE_INTEGER *LogEntry; // rax
  ULONG v1; // ebx

  LogEntry = PopPowerAggregatorAllocateLogEntry((LARGE_INTEGER *)&PopPowerAggregatorContext, 3u);
  *(_OWORD *)&LogEntry[3].LowPart = xmmword_140F08290;
  *(_OWORD *)&LogEntry[5].LowPart = xmmword_140F082A0;
  LogEntry[7].QuadPart = qword_140F082B0;
  *(_OWORD *)&LogEntry[8].LowPart = xmmword_140F082B8;
  *(_OWORD *)&LogEntry[10].LowPart = xmmword_140F082C8;
  PopPowerAggregatorDiagTraceHandlerInvoke(&xmmword_140F08290, &xmmword_140F082B8);
  v1 = guard_dispatch_icall_no_overrides(&PopPowerAggregatorContext);
  PopPowerAggregatorAllocateLogEntry((LARGE_INTEGER *)&PopPowerAggregatorContext, 4u)[3].LowPart = v1;
  return v1;
}
