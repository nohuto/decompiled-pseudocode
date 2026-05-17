/*
 * XREFs of LibLoaderTelemetryInitOnce @ 0x180160AA0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 LibLoaderTelemetryInitOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CC948);
  return 1LL;
}
