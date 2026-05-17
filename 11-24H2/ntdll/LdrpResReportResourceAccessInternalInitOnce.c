/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x180160A70
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 LdrpResReportResourceAccessInternalInitOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CC980);
  return 1LL;
}
