/*
 * XREFs of ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180002544
 * Callers:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800024F4 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180002CC0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Hr<1>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  int v7; // r8d
  int v8; // r9d
  int v10; // [rsp+20h] [rbp-48h]
  _DWORD v11[6]; // [rsp+50h] [rbp-18h] BYREF

  v11[0] = (_DWORD)a7;
  v11[2] = 0;
  v11[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7, a2);
  return wil::details::ReportFailure_Base<1,0>(v8, v7, v7, v8, v10, a6, (int)v11);
}
