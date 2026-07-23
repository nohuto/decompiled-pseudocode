/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x14078CCC0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E08810, 0LL, 0LL);
  KeQueryPerformanceCounter(&RtlpPerformanceCounterFrequency);
  return 1LL;
}
