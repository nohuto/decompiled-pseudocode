/*
 * XREFs of ?put_BeginRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180054060
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x18005408C (-BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::put_BeginRect(
        __int64 a1,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::BeginRect(
    (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)((a1 - 8) & -(__int64)(a1 != 0)),
    a2);
  return 0LL;
}
