/*
 * XREFs of VsmEnclaveTelemetryInitOnce @ 0x180160B20
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 VsmEnclaveTelemetryInitOnce()
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CC9F0);
  result = 1LL;
  VSMEnclaveProvidersRegistered = 1;
  return result;
}
