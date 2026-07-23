/*
 * XREFs of PopSstDiagQueryResumeTimestamp @ 0x140B6E1B8
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140A533BC (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06C90);
}
