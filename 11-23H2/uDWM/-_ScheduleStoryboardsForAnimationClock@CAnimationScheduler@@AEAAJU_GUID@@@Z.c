/*
 * XREFs of ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800143DC
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180007680 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180014650 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180007AD4 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x180014548 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180014624 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800149FC (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180014C18 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180014E94 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180046B00 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D98E0 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // r15d
  char v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  CAnimationScheduler *v14; // rcx
  int v15; // eax
  int started; // eax
  __int128 v18; // [rsp+30h] [rbp-48h]

  v3 = 0;
  v4 = 0LL;
  if ( !*((_DWORD *)this + 10) )
    return (unsigned int)v3;
  v6 = (__int64 *)*((_QWORD *)this + 2);
  v7 = *((unsigned int *)this + 10);
  do
  {
    v8 = *v6;
    if ( !*(_DWORD *)(*v6 + 24) && (!v4 || *(_DWORD *)(v4 + 64) < *(_DWORD *)(v8 + 64)) )
      v4 = *v6;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  if ( v4 )
    v9 = *(_DWORD *)(v4 + 64);
  do
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v11);
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v18 = *(_OWORD *)(v12 + 48);
    v13 = v18 - *(_QWORD *)&a2->Data1;
    if ( (_QWORD)v18 == *(_QWORD *)&a2->Data1 )
      v13 = *((_QWORD *)&v18 + 1) - *(_QWORD *)a2->Data4;
    if ( !v13 )
    {
      if ( v3 < 0 )
        goto LABEL_31;
      v14 = (CAnimationScheduler *)*(unsigned int *)(v12 + 24);
      if ( !(_DWORD)v14 || (_DWORD)v14 == 1 )
      {
        if ( *(_DWORD *)(v12 + 64) < v9 )
        {
          *(_DWORD *)(v12 + 24) = 1;
          CStoryboard::_LogStoryboardEvent((CStoryboard *)v12, v8);
          v3 = 0;
          goto LABEL_19;
        }
        v3 = CAnimationScheduler::_ScheduleStoryboard(v14, (struct CStoryboard *)v12);
        if ( v3 >= 0 )
        {
          v10 = 1;
          CAnimationScheduler::_ScheduleBlockedStoryboards(this, *(_DWORD *)(v12 + 64));
          goto LABEL_19;
        }
LABEL_31:
        CStoryboard::Abandon((CStoryboard *)v12);
      }
    }
LABEL_19:
    CStoryboard::Release((CStoryboard *)v12);
    v11 = (unsigned int)(v11 + 1);
  }
  while ( (unsigned int)v11 < *((_DWORD *)this + 10) );
  if ( v3 >= 0 && v10 )
  {
    v15 = CTransitionVisualController::SetupZOrder(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 24));
    v3 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x284u, 0LL);
    }
    else
    {
      started = CAnimationScheduler::_ScheduleStartAnimations(this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x287u, 0LL);
      else
        CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
    }
  }
  return (unsigned int)v3;
}
