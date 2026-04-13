/*
 * XREFs of ??$ReportFailure_Msg@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1800275B8
 * Callers:
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18002754C (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ??$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z @ 0x180027A90 (--$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180026E80 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180035BBC (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800B6E30 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_Msg<1>(
        int a1,
        unsigned __int16 *a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        char *a9)
{
  int v11; // esi
  int v12; // r9d
  char *v14; // [rsp+20h] [rbp-1058h]
  int v15; // [rsp+20h] [rbp-1058h]
  _BYTE v16[4096]; // [rsp+50h] [rbp-1028h] BYREF

  v11 = (int)a2;
  wil::details::PrintLoggingMessage((wil::details *)v16, a2, a8, a9, v14);
  return wil::details::ReportFailure_Base<1,0>(a1, v11, a3, v12, v15, a6, a7, (__int64)v16);
}
