/*
 * XREFs of ?GetTrustLevel@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x180500700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::GetTrustLevel(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::NonDelegatingGetTrustLevel(a1 + 8);
}
