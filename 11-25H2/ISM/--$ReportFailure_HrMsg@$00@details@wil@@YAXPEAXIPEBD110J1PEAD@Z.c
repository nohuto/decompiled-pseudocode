/*
 * XREFs of ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1800DAB90
 * Callers:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800DC0EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18007D198 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18008D04C (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18008E08C (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801C7C90 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_HrMsg<1>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned __int16 *v10; // rdx
  __int64 v11; // r8
  char *v12; // r9
  __int64 v13; // r9
  int v15; // [rsp+20h] [rbp-1068h]
  _DWORD v16[4]; // [rsp+50h] [rbp-1038h] BYREF
  _BYTE v17[4096]; // [rsp+60h] [rbp-1028h] BYREF

  v16[0] = (_DWORD)a7;
  v16[2] = 0;
  v16[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  wil::details::PrintLoggingMessage((wil::details *)v17, v10, v11, v12);
  return wil::details::ReportFailure_Base<1,0>(a1, a2, a3, v13, v15, a6, (__int64)v16, (__int64)v17);
}
