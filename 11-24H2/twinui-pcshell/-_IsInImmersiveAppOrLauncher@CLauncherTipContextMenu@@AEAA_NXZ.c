/*
 * XREFs of ?_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ @ 0x180603338
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1801EB6A8 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 * Callees:
 *     ?_EnsureImmersiveModeCheck@CLauncherTipContextMenu@@AEAAJXZ @ 0x180602B48 (-_EnsureImmersiveModeCheck@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLauncherTipContextMenu::_IsInImmersiveAppOrLauncher(CLauncherTipContextMenu *this)
{
  char v1; // bl
  __int64 v3; // rcx
  int v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  v5 = 0;
  if ( CLauncherTipContextMenu::_EnsureImmersiveModeCheck(this) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19), &v5) >= 0 )
  {
    if ( v5 )
    {
      return 1;
    }
    else
    {
      v3 = *((_QWORD *)this + 20);
      v6 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 24LL))(v3, &v6) >= 0 )
        return v6 == 1;
    }
  }
  return v1;
}
