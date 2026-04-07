/*
 * XREFs of ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180043A6C
 * Callers:
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x180042F70 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x1800439F0 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18007E198 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_836492bf0d708d37d167f858654aafdb___::_lambda_call__lambda_836492bf0d708d37d167f858654aafdb___ @ 0x180098F4C (wil--details--lambda_call__lambda_836492bf0d708d37d167f858654aafdb___--_lambda_call__lambda_8364.c)
 * Callees:
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180043AAC (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x180043B1C (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180043B7C (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 */

void __fastcall CAnimationScheduler::_CleanupTransition(CAnimationScheduler *this)
{
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  if ( !*((_DWORD *)this + 10) )
  {
    CTransitionVisualController::CleanupTransition(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 24));
    CWindowPropertyTracker::StopTrackingAllWindows((CAnimationScheduler *)((char *)this + 48));
  }
}
