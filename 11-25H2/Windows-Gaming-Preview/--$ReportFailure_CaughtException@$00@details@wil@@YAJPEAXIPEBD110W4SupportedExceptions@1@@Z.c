/*
 * XREFs of ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18000C234
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000EFB4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     memset_0 @ 0x180002E14 (memset_0.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000364C (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000369C (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180006800 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _alloca_probe @ 0x180042E60 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<1>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // xmm0_8
  int v14; // r9d
  int v15; // [rsp+20h] [rbp-E0h]
  _BYTE v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+60h] [rbp-A0h]
  _BYTE v19[24]; // [rsp+68h] [rbp-98h] BYREF
  _WORD v20[2048]; // [rsp+80h] [rbp-80h] BYREF

  memset_0(v20, 0, sizeof(v20));
  v16[0] = 0;
  v9 = -1LL;
  do
    ++v9;
  while ( v20[v9] );
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (v10 = g_pfnResultFromCaughtExceptionInternal(v19, &v20[v9], 2048 - v9, v16),
        v12 = *(_QWORD *)v10,
        LODWORD(v10) = *(_DWORD *)(v10 + 8),
        v17 = v12,
        v18 = v10,
        (int)v12 >= 0) )
  {
    LODWORD(v17) = -2147024322;
    HIDWORD(v17) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    v18 = 0;
    wil::details::ReportFailure_Base<3,0>(a1, a2, a3, v14, v15, a6, (__int64)&v17, (__int64)v20);
  }
  wil::details::ReportFailure_Base<1,0>(a1, a2, a3, v11, v15, a6, (int)&v17, (__int64)v20);
  return (unsigned int)v17;
}
