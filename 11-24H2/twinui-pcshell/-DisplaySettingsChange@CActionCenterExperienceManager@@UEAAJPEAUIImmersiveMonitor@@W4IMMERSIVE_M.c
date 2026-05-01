/*
 * XREFs of ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801A7580
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801A7628 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801A7C2C (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CActionCenterExperienceManager::DisplaySettingsChange(__int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(v3 + 56))(a2, &v11);
  if ( v6 < 0 )
  {
    v8 = 651LL;
    goto LABEL_9;
  }
  if ( v11 && (a3 & 0x3F) != 0 )
  {
    v7 = CActionCenterExperienceManager::PositionView((CActionCenterExperienceManager *)(a1 - 72));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x295,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v6 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged((CActionCenterExperienceManager *)(a1 - 72));
    if ( v6 < 0 )
    {
      v8 = 662LL;
LABEL_9:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  return 0LL;
}
