/*
 * XREFs of ?PostTransition@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F5650
 * Callers:
 *     <none>
 * Callees:
 *     ?Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x18002EB74 (-Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4ResponsiveRotationTimelineReason@23456@@Z @ 0x1800F4B70 (-DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::PostTransition(
        __int64 a1)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *v1; // rcx
  __int64 v2; // r8
  const char *v3; // r9
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::Captured((winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)((a1 - 16) & -(__int64)(a1 != 0)))
    && !*((_BYTE *)v1 + 82) )
  {
    try
    {
      v5 = 1;
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::DelayNextAnimation(
        v1,
        (const enum winrt::Udwm::Transitions::Private::implementation::ResponsiveRotationTimelineReason *)&v5,
        v2,
        v3);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v5);
    }
  }
  return 0LL;
}
