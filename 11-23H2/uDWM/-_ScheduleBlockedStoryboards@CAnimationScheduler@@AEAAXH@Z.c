/*
 * XREFs of ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x180014548
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180007680 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800143DC (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z @ 0x18000AF4C (-ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180014624 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800149FC (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D98E0 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

void __fastcall CAnimationScheduler::_ScheduleBlockedStoryboards(CAnimationScheduler *this, int a2)
{
  __int64 i; // rbp
  CAnimationScheduler *v5; // rcx
  __int64 v6; // rbx
  __int64 j; // rsi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v5 = (CAnimationScheduler *)*((_QWORD *)this + 2);
    v6 = *((_QWORD *)v5 + i);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v5 = (CAnimationScheduler *)*((_QWORD *)this + 2);
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 10); j = (unsigned int)(j + 1) )
    {
      if ( *(_DWORD *)(*((_QWORD *)v5 + j) + 24LL) != 4 )
      {
        if ( CStoryboard::ShouldBlock(*((struct CStoryboard **)v5 + j), (struct CStoryboard *)v6) )
        {
          CStoryboard::Abandon((CStoryboard *)v6);
          break;
        }
        v5 = (CAnimationScheduler *)*((_QWORD *)this + 2);
      }
    }
    if ( *(_DWORD *)(v6 + 64) <= a2 && *(_DWORD *)(v6 + 24) == 1 )
      CAnimationScheduler::_ScheduleStoryboard(v5, (struct CStoryboard *)v6);
    CStoryboard::Release((CStoryboard *)v6);
  }
}
