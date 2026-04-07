/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180098F00
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009D234 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180098C3C (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x18009B604 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18009B9A4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        wil::details *a1,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5,
        const char *a6)
{
  int v7; // esi
  int v8; // ebp
  int LastErrorFail; // eax
  int v10; // edx
  unsigned int v11; // ebx
  int v12; // r9d
  const char *v14; // [rsp+20h] [rbp-58h]
  int v15; // [rsp+20h] [rbp-58h]
  void *v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-18h] BYREF
  int v20; // [rsp+68h] [rbp-10h]

  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v14, a6, v16);
  v11 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v11 = (unsigned __int16)LastErrorFail | 0x80070000;
  LODWORD(v17) = v11;
  HIDWORD(v17) = wil::details::HrToNtStatus((wil::details *)v11, v10);
  LOBYTE(v18) = 0;
  v20 = v18;
  v19 = v17;
  wil::details::ReportFailure_Base<1,0>(v8, v7, a3, v12, v15, (__int64)a6, (int)&v19, 0LL);
  return v11;
}
