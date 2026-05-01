/*
 * XREFs of ?IsUnplated@?$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions@UILogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1805E7308
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805EB0BC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoOptions>::IsUnplated(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v7) = a2;
  v2 = *a1;
  v5 = 0;
  LOBYTE(a2) = 1;
  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 136LL))(v2, a2);
  return winrt::check_hresult(&v7, v3, (__int64)&v5);
}
