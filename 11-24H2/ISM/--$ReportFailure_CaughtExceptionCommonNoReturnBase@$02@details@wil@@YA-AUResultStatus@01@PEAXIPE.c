/*
 * XREFs of ??$ReportFailure_CaughtExceptionCommonNoReturnBase@$02@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800AA510
 * Callers:
 *     ??$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800AA4B0 (--$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18007D058 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18008E7B4 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_CaughtExceptionCommonNoReturnBase<3>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v10; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // xmm0_8
  __int64 v17; // r9
  __int64 v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+50h] [rbp-28h] BYREF
  int v20; // [rsp+58h] [rbp-20h]
  _BYTE v21[24]; // [rsp+60h] [rbp-18h] BYREF

  a10 = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(a8 + 2 * v10) );
  if ( g_pfnResultFromCaughtExceptionInternal )
  {
    v14 = g_pfnResultFromCaughtExceptionInternal(v21, a8 + 2 * v10, 2048 - v10, &a10);
    v16 = *(_QWORD *)v14;
    LODWORD(v14) = *(_DWORD *)(v14 + 8);
    v19 = v16;
    v20 = v14;
    if ( (int)v16 < 0 )
      wil::details::ReportFailure_Base<3,0>(a2, a3, a4, v15, v18, a7, (__int64)&v19, a8);
  }
  LODWORD(v19) = -2147024322;
  HIDWORD(v19) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
  v20 = 0;
  wil::details::ReportFailure_Base<3,0>(a2, a3, a4, v17, v18, a7, (__int64)&v19, a8);
}
