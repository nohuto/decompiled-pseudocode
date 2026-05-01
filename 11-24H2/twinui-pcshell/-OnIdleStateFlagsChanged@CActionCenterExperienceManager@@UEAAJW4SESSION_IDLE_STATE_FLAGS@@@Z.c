/*
 * XREFs of ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1801F3460
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1800AEAEC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x1802C8074 (-SetZBand@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnIdleStateFlagsChanged(__int64 a1, char a2)
{
  int v2; // edx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2 & 2;
  if ( (v2 != 0) != *(_BYTE *)(a1 + 348) )
  {
    *(_BYTE *)(a1 + 348) = v2 != 0;
    if ( v2 )
    {
      v9 = 0;
      v5 = *(_QWORD *)(a1 + 376);
      if ( !v5 )
        goto LABEL_14;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v5 + 32LL))(v5, 5LL, &v9);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x20D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
      if ( v9 )
      {
        CActionCenterExperienceManager::SetZBand((CActionCenterExperienceManager *)(a1 - 56));
      }
      else
      {
LABEL_14:
        if ( *(_DWORD *)(a1 + 112) == 2 )
        {
          v6 = CSingleViewShellExperience::Hide(a1 + 72, 0LL);
          if ( v6 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x216,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
              (const char *)(unsigned int)v6);
        }
      }
    }
  }
  return 0LL;
}
