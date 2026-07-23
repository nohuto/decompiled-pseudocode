/*
 * XREFs of WerpProcessId @ 0x1800AC6B4
 * Callers:
 *     RtlReportSilentProcessExit @ 0x1800AB9C0 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionHelper @ 0x1800ABF6C (RtlReportExceptionHelper.c)
 *     WerpWaitForCrashReporting @ 0x1800AC754 (WerpWaitForCrashReporting.c)
 *     RtlReportExceptionEx @ 0x180132500 (RtlReportExceptionEx.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x180160370 (NtQueryInformationProcess.c)
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
