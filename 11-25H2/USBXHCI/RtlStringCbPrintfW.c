/*
 * XREFs of RtlStringCbPrintfW @ 0x140044844
 * Callers:
 *     TelemetryData_CreateReport @ 0x14005743C (TelemetryData_CreateReport.c)
 *     Controller_SetDeviceDescription @ 0x14007887C (Controller_SetDeviceDescription.c)
 *     TelemetryData_pCreateDumpFile @ 0x14007FB34 (TelemetryData_pCreateDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x14007FE64 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140044938 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
