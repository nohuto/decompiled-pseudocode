/*
 * XREFs of ?StartAnimation@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHHH@Z @ 0x1800EDE00
 * Callers:
 *     <none>
 * Callees:
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800EDE58 (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::StartAnimation(
        __int64 a1,
        int a2,
        int a3)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::StartAnimation(v3, a2, a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
