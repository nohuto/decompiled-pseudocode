/*
 * XREFs of ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x14005BBD8
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x14005E004 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140058848 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x14005D580 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus<1>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v8; // edi
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-48h]
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v8 = wil::details::NtStatusToHr((wil::details *)(unsigned int)a7, a2);
  v12[0] = v8;
  v12[1] = (_DWORD)a7;
  v12[2] = 1;
  wil::details::ReportFailure_Base<1,0>(
    a1,
    0x3C7u,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
    v9,
    v11,
    a6,
    (__int64)v12,
    0LL);
  return v8;
}
