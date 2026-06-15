/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x140046768
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400574C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x14001C3EC (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140046918 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140058848 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        const char *a6)
{
  unsigned int v7; // esi
  signed int LastErrorFail; // eax
  int v10; // edx
  unsigned int v11; // ebx
  const char *v13; // [rsp+20h] [rbp-48h]

  v7 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v13, a6);
  v11 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v11 = (unsigned __int16)LastErrorFail | 0x80070000;
  wil::details::HrToNtStatus((wil::details *)v11, v10);
  wil::details::ReportFailure_Base<1,0>(a1, v7, a3);
  return v11;
}
