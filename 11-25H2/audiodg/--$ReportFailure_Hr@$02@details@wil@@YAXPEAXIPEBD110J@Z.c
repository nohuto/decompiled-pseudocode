/*
 * XREFs of ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x14005B8C8
 * Callers:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14005CECC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14005FF8C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140046918 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x14005B638 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Hr<3>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // [rsp+20h] [rbp-48h]
  _DWORD v10[6]; // [rsp+50h] [rbp-18h] BYREF

  v10[0] = -2147418113;
  v10[2] = 0;
  v10[1] = wil::details::HrToNtStatus((wil::details *)0x8000FFFFLL);
  wil::details::ReportFailure_Base<3,0>(v8, v7, v6, v7, v9, a6, (__int64)v10, 0LL);
}
