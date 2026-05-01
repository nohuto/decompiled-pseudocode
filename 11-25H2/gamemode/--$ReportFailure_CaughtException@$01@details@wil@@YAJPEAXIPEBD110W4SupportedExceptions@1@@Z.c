/*
 * XREFs of ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18000838C
 * Callers:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000AAEC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180002C34 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailu.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180002C7C (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailu.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180004DD4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     memset_0 @ 0x18000F242 (memset_0.c)
 *     __security_check_cookie @ 0x18000F280 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18000F340 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<2>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // xmm0_8
  int v12; // r9d
  int v13; // [rsp+20h] [rbp-E0h]
  _BYTE v14[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+60h] [rbp-A0h]
  _BYTE v17[24]; // [rsp+68h] [rbp-98h] BYREF
  _WORD v18[2048]; // [rsp+80h] [rbp-80h] BYREF

  memset_0(v18, 0, sizeof(v18));
  v14[0] = 0;
  v8 = -1LL;
  do
    ++v8;
  while ( v18[v8] );
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (v9 = g_pfnResultFromCaughtExceptionInternal(v17, &v18[v8], 2048 - v8, v14),
        v10 = *(_QWORD *)v9,
        LODWORD(v9) = *(_DWORD *)(v9 + 8),
        v15 = v10,
        v16 = v9,
        (int)v10 >= 0) )
  {
    LODWORD(v15) = -2147024322;
    HIDWORD(v15) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    v16 = 0;
    wil::details::ReportFailure_Base<3,0>(
      a1,
      a2,
      (int)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
      v12,
      v13,
      a6,
      (__int64)&v15,
      (__int64)v18);
  }
  wil::details::ReportFailure_Base<2,0>(
    a1,
    a2,
    (int)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
    0,
    0LL,
    a6,
    (__int64)&v15,
    (__int64)v18);
  return (unsigned int)v15;
}
