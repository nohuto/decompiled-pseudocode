/*
 * XREFs of ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801F08E8
 * Callers:
 *     ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801F08A0 (-OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801BFE5C (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801F0998 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180384AB0 (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x180384BA8 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnToastShowPendingTimerTick@CToastCenterExperienceManager@@AEAAJXZ @ 0x180384C68 (-OnToastShowPendingTimerTick@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnTargetedMessage(CToastCenterExperienceManager *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v6 = CToastCenterExperienceManager::OnShellReady(a1);
    if ( v6 < 0 )
    {
      v7 = 607LL;
      goto LABEL_18;
    }
    return 0LL;
  }
  v2 = a2 - 1;
  if ( !v2 )
    goto LABEL_14;
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          v6 = -2147418113;
          v7 = 628LL;
LABEL_18:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v7,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v6);
          return (unsigned int)v6;
        }
LABEL_14:
        v6 = CToastCenterExperienceManager::OnNewNotification(a1);
        if ( v6 < 0 )
        {
          v7 = 612LL;
          goto LABEL_18;
        }
        return 0LL;
      }
      v6 = CToastCenterExperienceManager::OnDisplayContextChanged(a1);
      if ( v6 < 0 )
      {
        v7 = 624LL;
        goto LABEL_18;
      }
    }
    else
    {
      v6 = CToastCenterExperienceManager::OnToastShowPendingTimerTick(a1);
      if ( v6 < 0 )
      {
        v7 = 620LL;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v6 = CToastCenterExperienceManager::OnCriticalNotification(a1);
    if ( v6 < 0 )
    {
      v7 = 616LL;
      goto LABEL_18;
    }
  }
  return 0LL;
}
