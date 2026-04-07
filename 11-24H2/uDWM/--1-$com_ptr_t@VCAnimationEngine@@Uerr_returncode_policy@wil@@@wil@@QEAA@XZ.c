/*
 * XREFs of ??1?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009AE3C
 * Callers:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180046064 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800BD4E8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800BD69C (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E16EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E1BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StartSecondAnimation_::_1_::dtor$4 @ 0x1800F6C60 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--StartSecondAnimati.c)
 *     _CDisplayAnimatedVisual::ScheduleAnimation_::_1_::dtor$0 @ 0x1800F8591 (_CDisplayAnimatedVisual--ScheduleAnimation_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StartFirstAnimation_::_1_::dtor$4 @ 0x1800F8A61 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--StartFirstAnimatio.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>(
        CAnimationEngine **a1)
{
  CAnimationEngine *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CAnimationEngine::Release(v1);
  return result;
}
