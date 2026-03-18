/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x14078CD90
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E087A0, 0LL, 0LL);
  KeQueryPerformanceCounter(&RtlpPerformanceCounterFrequency);
  return 1LL;
}
