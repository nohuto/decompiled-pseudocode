/*
 * XREFs of ??$ReportFailure_Win32@$01@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1801263C8
 * Callers:
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18012D70C (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18004F334 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800A213C (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32<2>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  unsigned int v6; // r10d
  __int64 v7; // r11
  _DWORD v9[6]; // [rsp+50h] [rbp-18h] BYREF

  v9[0] = -2147024883;
  v9[1] = wil::details::HrToNtStatus((wil::details *)0x8007000DLL);
  v9[2] = 0;
  wil::details::ReportFailure_Base<2,0>(
    v7,
    v6,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    0LL,
    0LL,
    a6,
    (__int64)v9,
    0LL);
  return 2147942413LL;
}
