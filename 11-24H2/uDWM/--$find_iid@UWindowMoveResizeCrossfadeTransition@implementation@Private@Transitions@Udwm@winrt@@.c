/*
 * XREFs of ??$find_iid@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x18009AD5C
 * Callers:
 *     ?find_interface@?$implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180099A70 (-find_interface@-$implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transit.c)
 * Callees:
 *     ??$find@U?$find_iid_traits@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UWindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x18009AD80 (--$find@U-$find_iid_traits@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitio.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>>(v3);
}
