/*
 * XREFs of ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E4530
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E3890 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E4210 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E4B30 (-_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveAppl.c)
 *     ?_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804E4EE0 (-_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_BeginAnimationStage(
        __int64 a1,
        int a2,
        struct IAppLayoutOperation *a3,
        struct IImmersiveMonitor *a4,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a5)
{
  int v7; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v12; // eax
  unsigned int v13; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = *(_DWORD *)(a1 + 292);
  if ( a2 != v7 )
  {
    if ( a2 )
    {
      if ( (unsigned int)(a2 - 1) >= 2 )
      {
        v9 = -2147467259;
        v10 = 922LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
          (const char *)v9);
        return v9;
      }
      if ( v7 != 1 )
      {
        if ( *(_DWORD *)(a1 + 300) )
        {
          v9 = -2147019873;
          v10 = 914LL;
          goto LABEL_8;
        }
        v12 = CAppTransitionManager::_SwitchToMonitor((IUnknown *)a1, a4);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x393,
            (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
            (const char *)(unsigned int)v12);
          return v13;
        }
        CAppTransitionManager::_InitAnimationPassState((CAppTransitionManager *)a1, a3, a5);
      }
    }
    *(_DWORD *)(a1 + 292) = a2;
  }
  return 0LL;
}
