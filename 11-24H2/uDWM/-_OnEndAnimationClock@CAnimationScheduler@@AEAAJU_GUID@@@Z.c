/*
 * XREFs of ?_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18005A948
 * Callers:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x18005A7EC (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180045BB0 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x1800593E0 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_OnEndAnimationClock(CAnimationScheduler *this, struct _GUID *a2)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  struct _GUID v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  v5 = -2147024809;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v3 )
  {
    v7 = *a2;
    v5 = CAnimationClockCoordinator::OnEndAnimationClock(
           *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 21),
           &v7);
    if ( v5 == -2147019873 )
    {
      v7 = *a2;
      return (unsigned int)CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(this, &v7);
    }
  }
  return v5;
}
