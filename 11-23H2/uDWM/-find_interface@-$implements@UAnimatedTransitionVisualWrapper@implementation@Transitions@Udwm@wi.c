/*
 * XREFs of ?find_interface@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800EE0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax

  v2 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper> )
    v2 = a2[1] + 0x6A53AACF10A57651LL;
  if ( v2 )
  {
    v4 = *a2 - winrt::impl::guid_v<Udwm::Transitions::ITransitionAnimationVisualNative>;
    if ( *a2 == winrt::impl::guid_v<Udwm::Transitions::ITransitionAnimationVisualNative> )
      v4 = a2[1] - 0x73F63BA0C2CDDDB6LL;
    return (a1 - 16) & -(__int64)(v4 == 0);
  }
  else
  {
    result = a1 - 8;
    if ( a1 == 16 )
      return 0LL;
  }
  return result;
}
