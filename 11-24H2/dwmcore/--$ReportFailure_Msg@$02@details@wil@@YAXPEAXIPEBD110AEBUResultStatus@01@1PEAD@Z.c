/*
 * XREFs of ??$ReportFailure_Msg@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1802874D0
 * Callers:
 *     ??$ReportFailure_GetLastErrorMsg@$02@details@wil@@YAKPEAXIPEBD1101PEAD@Z @ 0x180287444 (--$ReportFailure_GetLastErrorMsg@$02@details@wil@@YAKPEAXIPEBD1101PEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800F3E30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180242354 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180254D34 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Msg<3>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9)
{
  __int64 v9; // r9
  __int64 v13; // [rsp+20h] [rbp-2068h]
  unsigned __int16 v14[2048]; // [rsp+50h] [rbp-2038h] BYREF
  size_t v15[512]; // [rsp+1050h] [rbp-1038h] BYREF

  v9 = a8;
  if ( a8 )
  {
    if ( a9 )
    {
      StringCchPrintfW((unsigned __int16 *)v15, 2048LL, L"%hs");
      StringCchVPrintfW(v14, 0x800uLL, v15, a9);
    }
    else
    {
      StringCchPrintfW(v14, 2048LL, L"%hs");
    }
  }
  else
  {
    v14[0] = 0;
  }
  wil::details::ReportFailure_Base<3,0>(a1, a2, a3, v9, v13, a6, a7, (__int64)v14);
}
