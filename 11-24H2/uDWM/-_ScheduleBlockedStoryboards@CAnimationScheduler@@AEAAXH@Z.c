/*
 * XREFs of ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18004716C
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180045BB0 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180059440 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180044F24 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180045A6C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18004721C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z @ 0x180047248 (-ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z.c)
 */

void __fastcall CAnimationScheduler::_ScheduleBlockedStoryboards(CAnimationScheduler *this, __int32 a2)
{
  __int64 v2; // rbp
  CAnimationScheduler *i; // rsi
  __int64 v5; // rax
  __m128i *v6; // rbx
  __int64 j; // rdi

  v2 = 0LL;
  for ( i = this; (unsigned int)v2 < *((_DWORD *)i + 10); v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *((_QWORD *)i + 2);
    v6 = *(__m128i **)(v5 + 8 * v2);
    if ( v6 )
      CMILRefCountBase::AddRef(*(CMILRefCountBase **)(v5 + 8 * v2));
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 10); j = (unsigned int)(j + 1) )
    {
      this = *(CAnimationScheduler **)(*((_QWORD *)i + 2) + 8 * j);
      if ( *((_DWORD *)this + 6) != 4 && CStoryboard::ShouldBlock(this, (struct CStoryboard *)v6) )
      {
        CStoryboard::Abandon(v6);
        break;
      }
    }
    if ( v6[4].m128i_i32[0] <= a2 && v6[1].m128i_i32[2] == 1 )
      CAnimationScheduler::_ScheduleStoryboard(this, (struct CStoryboard *)v6);
    CStoryboard::Release((CStoryboard *)v6);
  }
}
