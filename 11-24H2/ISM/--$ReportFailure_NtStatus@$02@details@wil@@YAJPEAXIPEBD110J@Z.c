/*
 * XREFs of ??$ReportFailure_NtStatus@$02@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800AC1B8
 * Callers:
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AEBD8 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18008E7B4 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180097820 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NtStatus<3>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  __int64 v10; // r9
  __int64 v11; // [rsp+20h] [rbp-48h]
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = wil::details::NtStatusToHr((wil::details *)(unsigned int)a7);
  v12[1] = (_DWORD)a7;
  v12[2] = 1;
  wil::details::ReportFailure_Base<3,0>(a1, a2, a3, v10, v11, a6, (__int64)v12, 0LL);
}
