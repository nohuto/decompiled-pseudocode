/*
 * XREFs of ?s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA?AW4AppArrangementSpecialTransitionType@@PEAUIAppLayoutOperation@@@Z @ 0x1804E59E4
 * Callers:
 *     ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E4B30 (-_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveAppl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::s_GetSpecialAppArrangementTransitionType(__int64 *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int i; // esi
  __int64 v6; // rax
  int (__fastcall *v7)(__int64 *, _QWORD, GUID *, __int64 *); // rbx
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
  v3 = (v2 >> 17) & 2;
  if ( (v2 & 0x800000) != 0 )
    v3 |= 4u;
  if ( (v2 & 0x80000) != 0 )
    v3 |= 0x20u;
  if ( !v3 )
  {
    v4 = *a1;
    v9 = 0;
    if ( (*(int (__fastcall **)(__int64 *, unsigned int *))(v4 + 24))(a1, &v9) >= 0 )
    {
      for ( i = 0; i < v9; ++i )
      {
        if ( v3 )
          break;
        v6 = *a1;
        v10 = 0LL;
        v7 = *(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v6 + 32);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
        if ( v7(a1, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v10) >= 0 )
          v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 96LL))(v10) == 6;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
      }
    }
  }
  return v3;
}
