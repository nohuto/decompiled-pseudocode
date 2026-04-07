/*
 * XREFs of ??$find_iid@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUTopLevelWindow3DWrapper@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180085BB4
 * Callers:
 *     ?find_interface@?$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18008B570 (-find_interface@-$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U13.c)
 * Callees:
 *     ??$find@U?$find_iid_traits@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTopLevelWindow3DWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E6370 (--$find@U-$find_iid_traits@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>>(v3);
}
