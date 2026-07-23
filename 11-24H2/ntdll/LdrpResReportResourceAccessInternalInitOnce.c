/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x18015EE30
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180170498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall LdrpResReportResourceAccessInternalInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CB980);
  return 1LL;
}
