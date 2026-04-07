/*
 * XREFs of ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002044C
 * Callers:
 *     ?RegisterTransitionHandler@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHHPEAX@Z @ 0x180020810 (-RegisterTransitionHandler@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@U.c)
 *     ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5730 (-PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm.c)
 *     ?PreTransition@?$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800F7F30 (-PreTransition@-$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions.c)
 *     ?PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F9704 (-PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800FAA24 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FDFD8 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt.c)
 *     ??$_Copy_unchecked@PEBUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEBU1234@0PEAU1234@@Z @ 0x1800FFF84 (--$_Copy_unchecked@PEBUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@@std@@YAPEAUUserResizeV.c)
 *     ?GetMany@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x180101964 (-GetMany@-$vector_view_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@U.c)
 *     ?GetMany@iterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@UUserResizeVisual@Transitions@Udwm@winrt@@@3@@Z @ 0x180101A28 (-GetMany@iterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$ve.c)
 *     ?SetAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXIAEBUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x180102658 (-SetAt@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserRes.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180020494 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Foundation::IUnknown::operator=(
        winrt::Windows::Foundation::IUnknown *this,
        winrt::Windows::Foundation::IUnknown *a2)
{
  if ( this != a2 )
  {
    if ( *(_QWORD *)this )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
    *(_QWORD *)this = *(_QWORD *)a2;
    winrt::Windows::Foundation::IUnknown::add_ref(this);
  }
  return this;
}
