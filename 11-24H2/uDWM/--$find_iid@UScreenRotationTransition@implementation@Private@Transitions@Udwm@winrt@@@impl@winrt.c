/*
 * XREFs of ??$find_iid@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUScreenRotationTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180087E7C
 * Callers:
 *     ?find_interface@?$implements@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationTransition@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18009B210 (-find_interface@-$implements@UScreenRotationTransition@implementation@Private@Transitions@Udwm@w.c)
 * Callees:
 *     ??$find@U?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x1800DF89C (--$find@U-$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@win.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>>(v3);
}
