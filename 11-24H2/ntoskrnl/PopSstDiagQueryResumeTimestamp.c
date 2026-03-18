/*
 * XREFs of PopSstDiagQueryResumeTimestamp @ 0x140B6C918
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140A5B7EC (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06970);
}
