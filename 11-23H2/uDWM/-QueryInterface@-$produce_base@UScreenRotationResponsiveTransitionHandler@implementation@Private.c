/*
 * XREFs of ?QueryInterface@?$produce_base@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationResponsiveTransitionHandler@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F58E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler,void>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler>::query_interface(
           (a1 - 24) & -(__int64)(a1 != 0),
           a2,
           a3);
}
