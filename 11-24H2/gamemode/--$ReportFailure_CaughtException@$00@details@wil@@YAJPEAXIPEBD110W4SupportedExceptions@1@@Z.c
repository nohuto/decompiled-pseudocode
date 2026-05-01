/*
 * XREFs of ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180008C48
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000DC10 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002210 (__security_check_cookie.c)
 *     memset_0 @ 0x180002E14 (memset_0.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180003280 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailu.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x1800032D4 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailu.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18000543C (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _alloca_probe @ 0x1800108B0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<1>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // xmm0_8
  int v13; // r9d
  int v14; // [rsp+20h] [rbp-E0h]
  _BYTE v15[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+60h] [rbp-A0h]
  _BYTE v18[24]; // [rsp+68h] [rbp-98h] BYREF
  _WORD v19[2048]; // [rsp+80h] [rbp-80h] BYREF

  memset_0(v19, 0, sizeof(v19));
  v15[0] = 0;
  v8 = -1LL;
  do
    ++v8;
  while ( v19[v8] );
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (v9 = g_pfnResultFromCaughtExceptionInternal(v18, &v19[v8], 2048 - v8, v15),
        v11 = *(_QWORD *)v9,
        LODWORD(v9) = *(_DWORD *)(v9 + 8),
        v16 = v11,
        v17 = v9,
        (int)v11 >= 0) )
  {
    LODWORD(v16) = -2147024322;
    HIDWORD(v16) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    v17 = 0;
    wil::details::ReportFailure_Base<3,0>(
      a1,
      a2,
      (int)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
      v13,
      v14,
      a6,
      (__int64)&v16,
      (__int64)v19);
  }
  wil::details::ReportFailure_Base<1,0>(
    a1,
    a2,
    (int)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
    v10,
    v14,
    a6,
    (int)&v16,
    (__int64)v19);
  return (unsigned int)v16;
}
