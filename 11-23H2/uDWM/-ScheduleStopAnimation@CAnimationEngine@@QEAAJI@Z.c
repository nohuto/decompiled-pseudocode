/*
 * XREFs of ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180056954
 * Callers:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002D918 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180055D1C (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A1C28 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800B80D0 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D7C74 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800DBEC4 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800E4740 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 *     ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800EE008 (-StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x180057F58 (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18005830C (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::ScheduleStopAnimation(CAnimationEngine *this, unsigned int a2)
{
  unsigned int v4; // edi
  int TransitionVisualSetIndex; // eax
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex(this, a2);
  if ( TransitionVisualSetIndex < 0 )
    v4 = -2147467259;
  else
    CAnimationEngine::CTransitionVisualSet::StopStoryboard(*(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8LL * (unsigned int)TransitionVisualSetIndex));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v4;
}
