/*
 * XREFs of ?GetAbsoluteWindowRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800FAC50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800FACBC (-GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURec.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::GetAbsoluteWindowRect(
        __int64 a1,
        __m128i *a2)
{
  __int64 result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    *a2 = _mm_loadu_si128((const __m128i *)winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetAbsoluteWindowRect());
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
