/*
 * XREFs of ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14005B964
 * Callers:
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14001E9A8 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14005D394 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140046918 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x140046AE8 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140057B80 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140091990 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_HrMsg<2>(
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
  _DWORD v14[4]; // [rsp+50h] [rbp-1038h] BYREF
  _BYTE v15[4096]; // [rsp+60h] [rbp-1028h] BYREF

  v14[0] = (_DWORD)a7;
  v14[2] = 0;
  v14[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  wil::details::PrintLoggingMessage((wil::details *)v15, v10, v11, v12);
  return wil::details::ReportFailure_Base<2,0>(a1, a2, a3, 0LL, 0LL, a6, (__int64)v14, (__int64)v15);
}
