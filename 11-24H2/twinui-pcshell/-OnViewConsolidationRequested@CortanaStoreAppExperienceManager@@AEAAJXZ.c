/*
 * XREFs of ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1803A9B1C
 * Callers:
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1803A9920 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1803A9AB8 (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 *     ?ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1803A9D64 (-ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 *     ?SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z @ 0x1803A9F44 (-SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::OnViewConsolidationRequested(
        CortanaStoreAppExperienceManager *this,
        bool a2)
{
  __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  __int64 v7; // rcx
  bool v8; // dl
  CortanaStoreAppExperienceManager *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, 1LL);
    if ( v4 < 0 )
    {
      v5 = 827LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 88LL))(*((_QWORD *)this + 30));
    if ( v4 < 0 )
    {
      v5 = 829LL;
      goto LABEL_4;
    }
  }
  v7 = *((_QWORD *)this + 29);
  if ( v7 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 344LL))(v7, 1LL);
    if ( v4 < 0 )
    {
      v5 = 834LL;
      goto LABEL_4;
    }
  }
  CortanaStoreAppExperienceManager::SetAltTabWindowVisibility(this, a2);
  CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility((const RECT *)this);
  if ( *((_BYTE *)this + 260) )
  {
    *((_BYTE *)this + 260) = 0;
    CortanaStoreAppExperienceManager::ReportActiveExperienceAboveLock(v9, v8);
  }
  return 0LL;
}
