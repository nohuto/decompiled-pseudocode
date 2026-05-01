/*
 * XREFs of ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x1802DB2BC
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802DDD1C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800A60DC (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800A68F0 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180297384 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_GetLastError<3>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        const char *a6)
{
  int v7; // edi
  signed int LastErrorFail; // eax
  __int64 v10; // r9
  const char *v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+20h] [rbp-48h]
  unsigned int v13[6]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v11, a6);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  v13[0] = LastErrorFail;
  v13[2] = 0;
  v13[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)LastErrorFail);
  wil::details::ReportFailure_Base<3,0>((__int64)a1, v7, a3, v10, v12, (__int64)a6, v13, 0LL);
}
