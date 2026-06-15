/*
 * XREFs of ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800387E0
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18003BBB8 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18001BABC (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1800243F8 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus<1>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v10; // edi
  int v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[4]; // [rsp+50h] [rbp-18h] BYREF

  v10 = wil::details::NtStatusToHr((wil::details *)(unsigned int)a7);
  v13[0] = v10;
  v13[1] = (_DWORD)a7;
  v13[2] = 1;
  wil::details::ReportFailure_Base<1,0>(a1, a2, a3, a6, v12, a6, (__int64)v13, 0LL);
  return v10;
}
