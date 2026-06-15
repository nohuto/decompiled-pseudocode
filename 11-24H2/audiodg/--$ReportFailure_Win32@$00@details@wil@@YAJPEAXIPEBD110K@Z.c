/*
 * XREFs of ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x140065054
 * Callers:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x140065950 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140046618 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140058758 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32<1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  int v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[6]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (unsigned int)a7;
  if ( (int)a7 > 0 )
    v7 = (unsigned __int16)a7 | 0x80070000;
  v13[0] = v7;
  v13[2] = 0;
  v13[1] = wil::details::HrToNtStatus((wil::details *)v7);
  wil::details::ReportFailure_Base<1,0>(v10, v9, v8, v9, v12, a6, (__int64)v13, 0LL);
  return v7;
}
