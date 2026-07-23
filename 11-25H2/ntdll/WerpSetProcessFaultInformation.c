/*
 * XREFs of WerpSetProcessFaultInformation @ 0x180116D64
 * Callers:
 *     RtlReportExceptionHelper @ 0x1800CF388 (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x180135B80 (RtlReportExceptionEx.c)
 * Callees:
 *     NtSetInformationProcess @ 0x1801635A0 (NtSetInformationProcess.c)
 */

NTSTATUS __fastcall WerpSetProcessFaultInformation(void *a1)
{
  int ProcessInformation; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  if ( !a1 )
    return -1073741585;
  v3 = 0;
  ProcessInformation = 1;
  return NtSetInformationProcess(a1, ProcessFaultInformation, &ProcessInformation, 8u);
}
