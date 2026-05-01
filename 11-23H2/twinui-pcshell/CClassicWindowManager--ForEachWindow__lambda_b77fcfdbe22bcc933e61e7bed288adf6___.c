/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x1803A84C0
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1800D34D0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1802D0518 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

char __fastcall CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 *v6; // r12
  struct IClassicWindow *v7; // rbx
  __int64 v8; // rdi
  struct IClassicWindow *v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(__int64 **)a2;
    do
    {
      v10 = *(struct IClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * v5);
      v7 = v10;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
      v8 = *v6;
      if ( *(_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 96LL))(v7) == v8 )
        CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(**(CClassicWindowManager ***)(a2 + 8), v7, 0);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
      ++v5;
    }
    while ( v5 < v4 );
  }
  return 1;
}
