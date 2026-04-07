/*
 * XREFs of ?get_BeginRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800EE1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800ED1CC (-BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Fo.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::get_BeginRect(
        __int64 a1,
        __m128i *a2)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v2; // rcx
  __int64 result; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    *a2 = _mm_loadu_si128((const __m128i *)winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::BeginRect(
                                             v2,
                                             (__int64)v4));
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
