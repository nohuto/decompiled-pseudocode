/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x1400068A8
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14000AC28 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1400067B8 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x14000872C (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140008C88 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        const char *a6)
{
  int v6; // edi
  int v7; // esi
  int LastErrorFail; // eax
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // r9d
  const char *v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+20h] [rbp-48h]
  void *v15; // [rsp+30h] [rbp-38h]
  _DWORD v16[4]; // [rsp+50h] [rbp-18h] BYREF

  v6 = (int)a2;
  v7 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, (unsigned int)"wil", a4, v13, a6, v15);
  v10 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v10 = (unsigned __int16)LastErrorFail | 0x80070000;
  v16[0] = v10;
  v16[2] = 0;
  v16[1] = wil::details::HrToNtStatus((wil::details *)v10, v9);
  wil::details::ReportFailure_Base<1,0>(v7, v6, (int)"wil", v11, v14, (__int64)a6, (__int64)v16);
  return v10;
}
