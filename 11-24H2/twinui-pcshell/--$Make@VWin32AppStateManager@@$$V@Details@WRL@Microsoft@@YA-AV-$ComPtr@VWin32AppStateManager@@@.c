/*
 * XREFs of ??$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWin32AppStateManager@@@12@XZ @ 0x180151260
 * Callers:
 *     ??$MakeOrThrow@VWin32AppStateManager@@$$V@wil@@YA?AV?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@XZ @ 0x180151214 (--$MakeOrThrow@VWin32AppStateManager@@$$V@wil@@YA-AV-$ComPtr@VWin32AppStateManager@@@WRL@Microso.c)
 * Callees:
 *     ??0Win32AppStateManager@@QEAA@XZ @ 0x180150E40 (--0Win32AppStateManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C9360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
Win32AppStateManager **__fastcall Microsoft::WRL::Details::Make<Win32AppStateManager,>(Win32AppStateManager **a1)
{
  Win32AppStateManager *v2; // rax
  Win32AppStateManager *v3; // rdi

  *a1 = 0LL;
  v2 = (Win32AppStateManager *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = Win32AppStateManager::Win32AppStateManager(v2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v3;
  }
  return a1;
}
