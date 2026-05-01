/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180003758
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180008BA4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000364C (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x18000387C (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180006810 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v9; // edx
  DWORD LastError; // ebx
  int v11; // r9d
  int v13; // [rsp+20h] [rbp-48h]
  wil::details *v14; // [rsp+30h] [rbp-38h]
  _DWORD v15[4]; // [rsp+50h] [rbp-18h] BYREF

  LastError = GetLastError();
  if ( !LastError )
  {
    LODWORD(v14) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, a3, 0, 0LL, a6, v14);
    LastError = 668;
  }
  if ( (int)LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  v15[0] = LastError;
  v15[1] = wil::details::HrToNtStatus((wil::details *)LastError, v9);
  v15[2] = 0;
  wil::details::ReportFailure_Base<1,0>(a1, a2, a3, v11, v13, a6, (int)v15, 0LL);
  return LastError;
}
