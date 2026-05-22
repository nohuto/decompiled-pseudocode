/*
 * XREFs of ?StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z @ 0x1800CCCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A279C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Stop@InputProcess@InputTraceLogging@@SAXXZ @ 0x1800CCB94 (-Stop@InputProcess@InputTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall InputProcess::StopProcess(
        InputProcess *this,
        struct BamoInputProcessPrincipal *a2,
        struct BamoInputProcessStub *a3)
{
  HANDLE CurrentProcess; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::InputProcess::Stop();
  CurrentProcess = GetCurrentProcess();
  if ( !TerminateProcess(CurrentProcess, 0) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocess\\lib\\inputprocess.cpp",
      v4);
  return 0LL;
}
