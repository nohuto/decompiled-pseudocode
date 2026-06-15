/*
 * XREFs of ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18011B438
 * Callers:
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18011B72C (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18004F334 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18004F7B0 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800ABEC8 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     _alloca_probe @ 0x18015E810 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_HrMsg<3>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int16 *v12; // rdx
  __int64 v13; // r8
  va_list v14; // r9
  int v15; // r9d
  int v16; // [rsp+20h] [rbp-1058h]
  _DWORD v17[4]; // [rsp+50h] [rbp-1028h] BYREF
  wchar_t v18[2060]; // [rsp+60h] [rbp-1018h] BYREF

  v17[0] = -2147418113;
  v17[2] = 0;
  v17[1] = wil::details::HrToNtStatus((wil::details *)0x8000FFFFLL);
  wil::details::PrintLoggingMessage(v18, v12, v13, v14);
  wil::details::ReportFailure_Base<3,0>(a1, a2, a3, v15, v16, a6, (__int64)v17, (__int64)v18);
}
