/*
 * XREFs of ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14004685C
 * Callers:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005867C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140046918 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x140046AE8 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140058848 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140091990 (_alloca_probe.c)
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
  unsigned __int64 v11; // r8
  const char *v12; // r9
  char *v14; // [rsp+20h] [rbp-1068h]
  _BYTE v15[4096]; // [rsp+60h] [rbp-1028h] BYREF

  wil::details::HrToNtStatus((wil::details *)(unsigned int)a7, a2);
  wil::details::PrintLoggingMessage((wil::details *)v15, v10, v11, v12, v14);
  return wil::details::ReportFailure_Base<1,0>(a1, a2, a3);
}
