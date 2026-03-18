/*
 * XREFs of ??$ReportFailure_GetLastErrorMsg@$02@details@wil@@YAKPEAXIPEBD1101PEAD@Z @ 0x180287444
 * Callers:
 *     ?FailFast_GetLastErrorMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180287D14 (-FailFast_GetLastErrorMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1801FF104 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x1801FF318 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Msg@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1802874D0 (--$ReportFailure_Msg@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_GetLastErrorMsg<3>(
        wil::details *a1,
        void *a2,
        int a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        char *a7,
        char *a8)
{
  int v9; // edi
  int v10; // esi
  signed int LastErrorFail; // eax
  int v12; // r9d
  const char *v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+20h] [rbp-48h]
  _DWORD v15[6]; // [rsp+50h] [rbp-18h] BYREF

  v9 = (int)a2;
  v10 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v13, a6);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  v15[0] = LastErrorFail;
  v15[2] = 0;
  v15[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)LastErrorFail);
  wil::details::ReportFailure_Msg<3>(v10, v9, a3, v12, v14, (__int64)a6, (__int64)v15, (__int64)a7, a8);
}
