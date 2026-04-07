/*
 * XREFs of ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800560C0
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800074A8 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180014C18 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002D918 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045FF0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180054FEC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180055D1C (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A1C28 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A1CF0 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ??1?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B6F88 (--1-$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7BD4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7DC0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800B80D0 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D714C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D7644 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D7C74 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800DBEC4 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800E4564 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800E4740 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800EB990 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F59E8 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5EF0 (-StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitio.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAnimationEngine@@AEAA@XZ @ 0x1800AA6BC (--1CAnimationEngine@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::Release(CAnimationEngine *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 29);
  if ( !v2 && this )
  {
    CAnimationEngine::~CAnimationEngine(this);
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimationEngine *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v2;
}
