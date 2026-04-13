/*
 * XREFs of ??$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z @ 0x180093598
 * Callers:
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180097200 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180033B60 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180076E20 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFail.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Win32<0>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  unsigned __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  int v10; // r10d
  int v11; // [rsp+20h] [rbp-48h]
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (unsigned int)a7;
  if ( a7 > 0 )
    v7 = (unsigned __int16)a7 | 0x80070000;
  v12[0] = v7;
  v12[2] = 0;
  v12[1] = wil::details::HrToNtStatus((wil::details *)v7);
  wil::details::ReportFailure_Base<0,0>(v10, v9, v8, v9, v11, a6, (__int64)v12);
}
