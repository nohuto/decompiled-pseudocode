/*
 * XREFs of WerpProcessId @ 0x1800029B4
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000226C (RtlReportExceptionHelper.c)
 *     WerpWaitForCrashReporting @ 0x180002A54 (WerpWaitForCrashReporting.c)
 *     RtlReportSilentProcessExit @ 0x180002F20 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionEx @ 0x1801342D0 (RtlReportExceptionEx.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 */

__int64 __fastcall WerpProcessId(void *a1)
{
  NTSTATUS InformationProcess; // eax
  unsigned int v2; // ecx
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+58h] [rbp-10h]

  v5 = 0LL;
  v6 = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  InformationProcess = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
  v2 = v5;
  if ( InformationProcess < 0 )
    return 0;
  return v2;
}
