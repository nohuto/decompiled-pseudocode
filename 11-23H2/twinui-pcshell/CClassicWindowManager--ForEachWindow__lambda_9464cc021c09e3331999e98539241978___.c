/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x1800D5FEC
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x1800142B0 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1800D34D0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1801618D0 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18004D854 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 *v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  CClassicWindowManager *v10; // r13
  void (__fastcall *v12)(__int64, __int64); // rdi
  HWND v13; // rax
  __int64 *ClassicWindowOwner; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(__int64 **)a2;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v5);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v5));
      v8 = *v6;
      if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7) == v8 )
      {
        v9 = *(_QWORD *)(a2 + 8);
        if ( !**(_QWORD **)v9 || v7 != **(_QWORD **)v9 )
        {
          v10 = *(CClassicWindowManager **)(v9 + 8);
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 160LL))(v7) )
          {
            v12 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 104LL);
            v13 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
            ClassicWindowOwner = CClassicWindowManager::GetClassicWindowOwner(v10, &v15, v13);
            v12(v7, *ClassicWindowOwner);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
          }
        }
      }
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      ++v5;
    }
    while ( v5 < v4 );
  }
  return 1;
}
