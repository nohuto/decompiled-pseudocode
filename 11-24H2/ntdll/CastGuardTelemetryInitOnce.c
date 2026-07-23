/*
 * XREFs of CastGuardTelemetryInitOnce @ 0x18015DF90
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180170498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall CastGuardTelemetryInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CBA28);
  result = 1LL;
  CastGuardProvidersRegistered = 1;
  return result;
}
