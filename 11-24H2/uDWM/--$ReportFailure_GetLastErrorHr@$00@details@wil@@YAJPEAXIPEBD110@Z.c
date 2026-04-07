/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x18009579C
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009564C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180089598 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180095838 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180095844 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6)
{
  unsigned int v7; // esi
  int LastErrorFail; // eax
  unsigned int v10; // ebx
  const char *v12; // [rsp+20h] [rbp-48h]
  void *v13; // [rsp+30h] [rbp-38h]

  v7 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v12, a6, v13);
  v10 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v10 = (unsigned __int16)LastErrorFail | 0x80070000;
  wil::details::HrToNtStatus((wil::details *)v10);
  wil::details::ReportFailure_Base<1,0>(a1, v7, a3);
  return v10;
}
