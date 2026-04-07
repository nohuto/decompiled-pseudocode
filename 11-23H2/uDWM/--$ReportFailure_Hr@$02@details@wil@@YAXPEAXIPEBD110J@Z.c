/*
 * XREFs of ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180099094
 * Callers:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009B0B8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A3C84 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180098C90 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18009B9A4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Hr<3>(
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
  int v9; // r10d
  int v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h] BYREF
  int v14; // [rsp+68h] [rbp-10h]

  LODWORD(v11) = (_DWORD)a7;
  HIDWORD(v11) = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7, a2);
  LOBYTE(v12) = 0;
  v14 = v12;
  v13 = v11;
  wil::details::ReportFailure_Base<3,0>(v9, v8, v7, v8, v10, a6, (__int64)&v13, 0LL);
}
