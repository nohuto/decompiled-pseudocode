/*
 * XREFs of ??R_lambda_a12e806a0fd69726e8b76ba9540bf820_@@QEBA@AEBUIAppExtensionStatics@StateRepository@Internal@Windows@winrt@@@Z @ 0x1806224F8
 * Callers:
 *     ??$call@AEAV_lambda_a12e806a0fd69726e8b76ba9540bf820_@@@?$factory_cache_entry@UAppExtension@StateRepository@Internal@Windows@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_a12e806a0fd69726e8b76ba9540bf820_@@@Z @ 0x18061DB08 (--$call@AEAV_lambda_a12e806a0fd69726e8b76ba9540bf820_@@@-$factory_cache_entry@UAppExtension@Stat.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_a12e806a0fd69726e8b76ba9540bf820_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
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
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v9 + 144))(v6, v8, v7, &v14);
  winrt::check_hresult((int *)&v15, v10, (__int64)&v12);
  *a2 = v14;
  return a2;
}
