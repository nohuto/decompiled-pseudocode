/*
 * XREFs of ?get_local_iids@?$implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UGameBarWindowControl@3456@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180360B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::GameBarWindowControl>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::guid_v<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>;
  return a2;
}
