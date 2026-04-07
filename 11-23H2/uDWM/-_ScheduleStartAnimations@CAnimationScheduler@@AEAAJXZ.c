/*
 * XREFs of ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180014C18
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800143DC (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800074A8 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002D8D8 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18005608C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800560C0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800570A4 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180058438 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_836492bf0d708d37d167f858654aafdb___::_lambda_call__lambda_836492bf0d708d37d167f858654aafdb___ @ 0x1800ABE64 (wil--details--lambda_call__lambda_836492bf0d708d37d167f858654aafdb___--_lambda_call__lambda_8364.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationScheduler::_ScheduleStartAnimations(CAnimationScheduler *this)
{
  char v2; // si
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rbp
  int v5; // eax
  int v6; // ebx
  __int64 i; // rbx
  CStoryboard *v8; // rcx
  volatile signed __int32 *v9; // rax
  CAnimationEngine *v10; // rbx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  CAnimationScheduler *v13; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v13 = this;
  v2 = 1;
  v14 = 1;
  if ( *((_BYTE *)this + 80) )
    goto LABEL_6;
  v3 = CDesktopManager::AcquireAnimationEngine();
  v4 = v3;
  if ( !v3 )
    goto LABEL_6;
  v5 = CAnimationEngine::RegisterForAnimationCompleteNotification(v3, this);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x221u, 0LL);
  else
    *((_BYTE *)this + 80) = 1;
  CAnimationEngine::Release(v4);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F2,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationscheduler.cpp",
      (const char *)(unsigned int)v6,
      v12);
    wil::details::lambda_call__lambda_836492bf0d708d37d167f858654aafdb___::_lambda_call__lambda_836492bf0d708d37d167f858654aafdb___(&v13);
    return (unsigned int)v6;
  }
  else
  {
LABEL_6:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
    {
      v8 = *(CStoryboard **)(*((_QWORD *)this + 2) + 8 * i);
      if ( *((_DWORD *)v8 + 6) == 2 )
        CStoryboard::ScheduleStartAnimation(v8);
    }
    v9 = (volatile signed __int32 *)CDesktopManager::AcquireAnimationEngine();
    v10 = (CAnimationEngine *)v9;
    if ( v9 )
    {
      _InterlockedAdd(v9 + 29, 1u);
      v2 = CAnimationEngine::IsIdle((CAnimationEngine *)v9) ? v14 : 0;
    }
    if ( v10 )
      CAnimationEngine::Release(v10);
    if ( v2 )
      CAnimationScheduler::_CleanupTransition(this);
    return 0LL;
  }
}
