/*
 * XREFs of ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180044F24
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180045BB0 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18004716C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180044548 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?ScheduleToRun@CStoryboard@@QEAAXXZ @ 0x180044D0C (-ScheduleToRun@CStoryboard@@QEAAXXZ.c)
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x180044FD0 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180045A6C (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboard(CAnimationScheduler *this, struct CStoryboard *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // eax

  v3 = CTransitionVisualController::MorphForStoryboard(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
         a2);
  if ( v3 < 0 )
  {
    v5 = 961;
  }
  else
  {
    v3 = CTransitionVisualController::RemoveTargetsForStoryboard(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
           a2,
           0,
           0x10000000);
    if ( v3 >= 0 )
    {
      CStoryboard::ScheduleToRun((__m128i *)a2, v4);
      return (unsigned int)v3;
    }
    v5 = 964;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180106448, 1LL, v3, v5, 0LL);
  CStoryboard::Abandon(a2);
  return (unsigned int)v3;
}
