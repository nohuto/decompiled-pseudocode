/*
 * XREFs of ?SetTransitionHandlerResponsive@CGlobalTimeTrackVisual@@QEAAXUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@Z @ 0x1801051EC
 * Callers:
 *     ?DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4ResponsiveRotationTimelineReason@23456@@Z @ 0x1800F4B70 (-DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800245AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@detai.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E160 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800D68A8 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??$from_com_ref@AEBUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@?$weak_ref@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXAEBUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@1@@Z @ 0x180104D78 (--$from_com_ref@AEBUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@-.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CGlobalTimeTrackVisual::SetTransitionHandlerResponsive(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v6 = 0LL;
  winrt::weak_ref<winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler>::from_com_ref<winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler const &>(
    &v6,
    (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)(a1 + 296), &v6);
  if ( v6 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v6);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
}
