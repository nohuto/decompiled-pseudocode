/*
 * XREFs of ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800A5E30
 * Callers:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800A5EE8 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800A60DC (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800A68F0 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError<2>(
        wil::details *a1,
        void *a2,
        unsigned int a3,
        const char *a4,
        __int64 a5,
        const char *a6)
{
  int v7; // esi
  int v8; // ebp
  int LastErrorFail; // eax
  int v10; // edx
  DWORD v11; // ebx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  const char *v15; // [rsp+20h] [rbp-48h]
  void *v16; // [rsp+30h] [rbp-38h]
  _DWORD v17[4]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v15, a6, v16);
  v11 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v12 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v12 = (unsigned int)LastErrorFail;
  v17[0] = v12;
  v17[1] = wil::details::HrToNtStatus((wil::details *)v12, v10);
  v17[2] = v13;
  wil::details::ReportFailure_Base<2,0>(v8, v7, a3, 0, v13, (__int64)a6, (__int64)v17, v13);
  SetLastError(v11);
  return v11;
}
