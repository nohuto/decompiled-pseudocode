/*
 * XREFs of ?Abandon@CStoryboard@@QEAAXXZ @ 0x180045A6C
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180042C1C (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x1800439F0 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180044F24 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180045818 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180045BB0 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18004716C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180059440 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x18005A7EC (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x1800694E0 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x180080BF0 (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x180089D70 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800A8224 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x1800D2C80 (-OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800D3598 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180043044 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180097680 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A6EE4 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStoryboard::Abandon(__m128i *this)
{
  unsigned __int64 v2; // rax
  __m128i v3; // [rsp+30h] [rbp-18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( this[1].m128i_i32[2] != 4 )
  {
    CStoryboard::_NotifyStoryboardState((__int64)this, 2);
    CStoryboard::ScheduleStopAnimation((CStoryboard *)this);
    v2 = this[3].m128i_i64[0] - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v2 )
      v2 = _mm_srli_si128(this[3], 8).m128i_u64[0] - *(_QWORD *)GUID_NULL.Data4;
    if ( v2 )
    {
      v3 = this[3];
      CAnimationClockCoordinator::OnSetAnimationClockTime(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
        &v3,
        1LL);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
