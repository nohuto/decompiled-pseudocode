/*
 * XREFs of ?get_MaximumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAUSize@Foundation@Windows@3@@Z @ 0x180365360
 * Callers:
 *     <none>
 * Callees:
 *     ?MaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AUSize@Foundation@56@XZ @ 0x180363AC0 (-MaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA-.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_MaximumSize(
        __int64 a1,
        _QWORD *a2)
{
  _DWORD *v3; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::MaximumSize(
         (a1 - 16) & -(__int64)(a1 != 0),
         &v5);
  *a2 = _mm_unpacklo_ps((__m128)(unsigned int)*v3, (__m128)(unsigned int)v3[1]).m128_u64[0];
  return 0LL;
}
