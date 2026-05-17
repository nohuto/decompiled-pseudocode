/*
 * XREFs of LibLoaderTelemetryInitOnce @ 0x180161FF0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 LibLoaderTelemetryInitOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE948);
  return 1LL;
}
