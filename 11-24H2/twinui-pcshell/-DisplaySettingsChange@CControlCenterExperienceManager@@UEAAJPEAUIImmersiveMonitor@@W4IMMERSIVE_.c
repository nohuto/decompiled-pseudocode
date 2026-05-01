/*
 * XREFs of ?DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802203C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800E5D14 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CControlCenterExperienceManager::DisplaySettingsChange(__int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // rax
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v10 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(v3 + 56))(a2, &v10);
  if ( v6 < 0 )
  {
    v7 = 896LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return 0LL;
  }
  if ( v10 )
  {
    if ( (a3 & 0x3F) != 0 )
    {
      v6 = CControlCenterExperienceManager::PositionView((CControlCenterExperienceManager *)(a1 - 56));
      if ( v6 < 0 )
      {
        v7 = 906LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
