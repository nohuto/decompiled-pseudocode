/*
 * XREFs of ??$find_iid@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180098CB4
 * Callers:
 *     ?find_interface@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800DEF80 (-find_interface@-$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@wi.c)
 * Callees:
 *     ??$find@U?$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x180098CD8 (--$find@U-$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winr.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>>(v3);
}
