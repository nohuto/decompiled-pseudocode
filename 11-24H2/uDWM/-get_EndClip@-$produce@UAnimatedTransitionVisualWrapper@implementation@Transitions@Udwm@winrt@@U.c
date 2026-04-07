/*
 * XREFs of ?get_EndClip@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800DEF90
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA?A_P$$QEAURect@Foundation@Windows@1@@Z @ 0x18004035C (--$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA-A_P$$QEAURect@Foundation@Windows@.c)
 *     ?BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800DE768 (-BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Fo.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::get_EndClip(
        __int64 a1,
        _OWORD *a2)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v3; // rcx
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v3 = (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::BeginClip(v3, (__int64)v5);
    *a2 = *(_OWORD *)winrt::impl::detach_from<winrt::Windows::Foundation::Rect>();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v6);
  }
  return result;
}
