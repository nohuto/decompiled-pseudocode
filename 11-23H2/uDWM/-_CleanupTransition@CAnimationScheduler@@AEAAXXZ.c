/*
 * XREFs of ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002D8D8
 * Callers:
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x1800077B0 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180014C18 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002D880 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     wil::details::lambda_call__lambda_836492bf0d708d37d167f858654aafdb___::_lambda_call__lambda_836492bf0d708d37d167f858654aafdb___ @ 0x1800ABE64 (wil--details--lambda_call__lambda_836492bf0d708d37d167f858654aafdb___--_lambda_call__lambda_8364.c)
 * Callees:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002D918 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18002DAA4 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18002DAE8 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
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
