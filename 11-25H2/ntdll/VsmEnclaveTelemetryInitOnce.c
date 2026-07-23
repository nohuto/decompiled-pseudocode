/*
 * XREFs of VsmEnclaveTelemetryInitOnce @ 0x180162070
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall VsmEnclaveTelemetryInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE9B8);
  result = 1LL;
  VSMEnclaveProvidersRegistered = 1;
  return result;
}
