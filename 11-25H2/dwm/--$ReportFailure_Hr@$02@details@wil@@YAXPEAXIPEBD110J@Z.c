/*
 * XREFs of ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1400069F0
 * Callers:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140007BC0 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14000BE10 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140006808 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140008C88 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Hr<3>(
        __int64 a1,
        int a2,
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
  v10[1] = wil::details::HrToNtStatus((wil::details *)0x8000FFFFLL, a2);
  wil::details::ReportFailure_Base<3,0>(v8, v7, v6, v7, v9, a6, (__int64)v10);
}
