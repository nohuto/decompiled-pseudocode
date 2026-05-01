/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180003390
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180005BE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180003280 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailu.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800034B0 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18000543C (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v8; // edx
  DWORD LastError; // ebx
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-48h]
  wil::details *v13; // [rsp+30h] [rbp-38h]
  _DWORD v14[4]; // [rsp+50h] [rbp-18h] BYREF

  LastError = GetLastError();
  if ( !LastError )
  {
    LODWORD(v13) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, (int)"wil", 0, 0LL, a6, v13);
    LastError = 668;
  }
  if ( (int)LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  v14[0] = LastError;
  v14[1] = wil::details::HrToNtStatus((wil::details *)LastError, v8);
  v14[2] = 0;
  wil::details::ReportFailure_Base<1,0>(a1, a2, (int)"wil", v10, v12, a6, (int)v14, 0LL);
  return LastError;
}
