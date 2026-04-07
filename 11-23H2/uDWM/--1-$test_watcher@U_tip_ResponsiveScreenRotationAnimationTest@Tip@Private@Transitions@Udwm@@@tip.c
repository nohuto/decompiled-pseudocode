/*
 * XREFs of ??1?$test_watcher@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAA@XZ @ 0x1800F472C
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::Cancel_::_1_::dtor$0 @ 0x180067C02 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransitionHandler--C.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::PreTransition_::_1_::dtor$2 @ 0x1800F58C6 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransitionHandler--P.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E2FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180033668 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::~test_watcher<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 56);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
