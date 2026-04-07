/*
 * XREFs of ??$find_iid@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800E4988
 * Callers:
 *     ?find_interface@?$implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800E61D0 (-find_interface@-$implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     ??$find@U?$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UWindowJointResizeTransition@Private@Transitions@Udwm@winrt@@UIBitmapManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E4934 (--$find@U-$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>>((__int64)v3);
}
