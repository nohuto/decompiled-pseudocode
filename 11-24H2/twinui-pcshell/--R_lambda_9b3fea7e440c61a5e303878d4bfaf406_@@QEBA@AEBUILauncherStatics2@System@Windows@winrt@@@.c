/*
 * XREFs of ??R_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@Z @ 0x18058FD78
 * Callers:
 *     ??$call@AEAV_lambda_7153a6af23e55c6dd3df525319faf7bd_@@@?$factory_cache_entry@UNamedPolicy@Policies@Management@Windows@winrt@@UINamedPolicyStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7153a6af23e55c6dd3df525319faf7bd_@@@Z @ 0x18058E8BC (--$call@AEAV_lambda_7153a6af23e55c6dd3df525319faf7bd_@@@-$factory_cache_entry@UNamedPolicy@Polic.c)
 *     ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x1805913CC (-IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ.c)
 *     ??$call@AEAV_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics2@234@@impl@winrt@@QEAA?A_PAEAV_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@@Z @ 0x18061D9F0 (--$call@AEAV_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ?LaunchUriForResultsAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x180633344 (-LaunchUriForResultsAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOp.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_9b3fea7e440c61a5e303878d4bfaf406_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
{
  __int64 *v3; // r10
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  int v12; // [rsp+38h] [rbp-20h] BYREF
  __int128 v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  v3 = a1[1];
  v5 = *a1;
  v6 = *a3;
  v7 = *v3;
  v14 = 0LL;
  v8 = *v5;
  v12 = 0;
  v9 = *v6;
  v13 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v9 + 48))(v6, v8, v7, &v14);
  winrt::check_hresult((int *)&v15, v10, (__int64)&v12);
  *a2 = v14;
  return a2;
}
