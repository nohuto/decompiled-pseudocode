/*
 * XREFs of ??$find_iid@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUUserResizeVisual@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800E83E4
 * Callers:
 *     ?find_interface@?$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800EAC90 (-find_interface@-$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUs.c)
 * Callees:
 *     ??$find@U?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UUserResizeVisual@Transitions@Udwm@winrt@@UIUserResizeVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E8330 (--$find@U-$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::UserResizeVisual>>(
           (__int64)v3,
           a2);
}
