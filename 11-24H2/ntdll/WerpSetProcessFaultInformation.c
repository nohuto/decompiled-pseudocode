/*
 * XREFs of WerpSetProcessFaultInformation @ 0x180113E80
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000226C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x1801342D0 (RtlReportExceptionEx.c)
 * Callees:
 *     NtSetInformationProcess @ 0x180162010 (NtSetInformationProcess.c)
 */

__int64 __fastcall WerpSetProcessFaultInformation(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  if ( !a1 )
    return 3221225711LL;
  v3 = 0;
  v2 = 1;
  return NtSetInformationProcess(a1, 63LL, &v2);
}
