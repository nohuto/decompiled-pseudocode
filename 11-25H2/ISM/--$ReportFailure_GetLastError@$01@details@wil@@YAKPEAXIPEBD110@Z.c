/*
 * XREFs of ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800BB63C
 * Callers:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BDDB8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18007D150 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18007D198 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x18008D08C (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError<2>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        const char *a6)
{
  int v6; // edi
  int v7; // esi
  int v8; // ebp
  signed int LastErrorFail; // eax
  DWORD v10; // ebx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  const char *v14; // [rsp+20h] [rbp-48h]
  _DWORD v15[4]; // [rsp+50h] [rbp-18h] BYREF

  v6 = a3;
  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v14, a6);
  v10 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v11 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v11 = (unsigned int)LastErrorFail;
  v15[0] = v11;
  v15[1] = wil::details::HrToNtStatus((wil::details *)v11);
  v15[2] = v12;
  wil::details::ReportFailure_Base<2,0>(v8, v7, v6, 0, v12, (__int64)a6, (__int64)v15, v12);
  SetLastError(v10);
  return v10;
}
