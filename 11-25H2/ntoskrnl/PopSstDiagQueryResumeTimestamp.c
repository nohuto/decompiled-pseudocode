/*
 * XREFs of PopSstDiagQueryResumeTimestamp @ 0x140B5D838
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140A594AC (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06530);
}
