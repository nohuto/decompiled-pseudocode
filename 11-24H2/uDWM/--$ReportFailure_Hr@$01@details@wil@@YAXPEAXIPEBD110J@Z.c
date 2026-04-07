/*
 * XREFs of ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x18009DAC0
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800876F8 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180095844 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?winrt_throw_hresult@wil@@YAXIPEBD0PEAXUhresult@winrt@@@Z @ 0x1800A1080 (-winrt_throw_hresult@wil@@YAXIPEBD0PEAXUhresult@winrt@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A66D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180089598 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180099FB4 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_Hr<2>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        wil::details *a7)
{
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r10d
  __int64 v10; // r11
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = (_DWORD)a7;
  v12[2] = 0;
  v12[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  return wil::details::ReportFailure_Base<2,0>(v10, v9, v7, v8, a5, a6, (__int64)v12, 0LL);
}
