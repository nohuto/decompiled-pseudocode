/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x18002734C
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003A1F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180026E80 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180032190 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180033B60 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
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
  const char *v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+20h] [rbp-48h]
  void *v16; // [rsp+30h] [rbp-38h]
  _DWORD v17[4]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v14, a6, v16);
  v11 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v11 = (unsigned __int16)LastErrorFail | 0x80070000;
  v17[0] = v11;
  v17[2] = 0;
  v17[1] = wil::details::HrToNtStatus((wil::details *)v11, v10);
  wil::details::ReportFailure_Base<1,0>(v8, v7, a3, v12, v15, (__int64)a6, (__int64)v17, 0LL);
  return v11;
}
