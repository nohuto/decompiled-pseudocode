/*
 * XREFs of ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180027060
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001FF10 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002047C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x1800269E0 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 *     ?CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ @ 0x180027010 (-CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180027170 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18007E198 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAnimationEngine::IsIdle(CAnimationEngine *this)
{
  bool v2; // bl

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = !*((_DWORD *)this + 16) || !*((_BYTE *)this + 120);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v2;
}
