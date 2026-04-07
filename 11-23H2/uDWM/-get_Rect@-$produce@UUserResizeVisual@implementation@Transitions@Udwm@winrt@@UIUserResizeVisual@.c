/*
 * XREFs of ?get_Rect@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x180104C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::get_Rect(
        __int64 a1,
        __m128i *a2)
{
  __int64 v2; // rax

  v2 = a1 + 84;
  if ( !a1 )
    v2 = 92LL;
  *a2 = _mm_loadu_si128((const __m128i *)v2);
  return 0LL;
}
