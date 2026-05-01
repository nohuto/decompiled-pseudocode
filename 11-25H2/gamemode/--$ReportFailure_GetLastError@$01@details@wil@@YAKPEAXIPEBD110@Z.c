/*
 * XREFs of ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800084E4
 * Callers:
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x18000AB0C (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000D350 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180002C34 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailu.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180002E58 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180004DD4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ReportFailure_GetLastError<2>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int LastError; // ebx
  unsigned __int64 v9; // rcx
  wil::details *v11; // [rsp+30h] [rbp-38h]
  _DWORD v12[4]; // [rsp+50h] [rbp-18h] BYREF

  LastError = GetLastError();
  if ( !LastError )
  {
    LODWORD(v11) = -2147024228;
    wil::details::ReportFailure_Hr<2>(
      a1,
      a2,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
      0LL,
      0LL,
      a6,
      v11);
    LastError = 668;
  }
  if ( LastError > 0 )
    v9 = (unsigned __int16)LastError | 0x80070000;
  else
    v9 = (unsigned int)LastError;
  v12[0] = v9;
  v12[1] = wil::details::HrToNtStatus((wil::details *)v9);
  v12[2] = 0;
  wil::details::ReportFailure_Base<2,0>(
    a1,
    a2,
    (int)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
    0,
    0LL,
    a6,
    (__int64)v12,
    0LL);
  SetLastError(LastError);
  return (unsigned int)LastError;
}
