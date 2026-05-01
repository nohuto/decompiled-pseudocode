/*
 * XREFs of ?get_State@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAH@Z @ 0x180365400
 * Callers:
 *     <none>
 * Callees:
 *     ?State@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AW4GameBarWindowState@3456@XZ @ 0x180364B44 (-State@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA-AW4Gam.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_State(
        __int64 a1,
        _DWORD *a2)
{
  *a2 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::State((RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)));
  return 0LL;
}
