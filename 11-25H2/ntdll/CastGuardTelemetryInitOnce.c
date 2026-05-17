/*
 * XREFs of CastGuardTelemetryInitOnce @ 0x180161120
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 CastGuardTelemetryInitOnce()
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CEA28);
  result = 1LL;
  CastGuardProvidersRegistered = 1;
  return result;
}
