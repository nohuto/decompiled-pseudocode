/*
 * XREFs of ??$ReportFailure_Win32@$02@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1800A2C58
 * Callers:
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800A44FC (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180089598 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180096A78 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Win32<3>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // [rsp+20h] [rbp-48h]
  _DWORD v11[6]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (unsigned int)a7;
  if ( a7 > 0 )
    v7 = (unsigned __int16)a7 | 0x80070000;
  v11[0] = v7;
  v11[2] = 0;
  v11[1] = wil::details::HrToNtStatus((wil::details *)v7);
  wil::details::ReportFailure_Base<3,0>(
    v9,
    v8,
    (__int64)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
    v8,
    v10,
    a6,
    (__int64)v11,
    0LL);
}
