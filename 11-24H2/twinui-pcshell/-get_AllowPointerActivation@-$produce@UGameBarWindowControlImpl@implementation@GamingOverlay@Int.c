/*
 * XREFs of ?get_AllowPointerActivation@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180365220
 * Callers:
 *     <none>
 * Callees:
 *     ?AllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NXZ @ 0x180361FEC (-AllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Inter_ea_180361FEC.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_AllowPointerActivation(
        __int64 a1,
        bool *a2)
{
  RTL_SRWLOCK *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    *a2 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::AllowPointerActivation(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
