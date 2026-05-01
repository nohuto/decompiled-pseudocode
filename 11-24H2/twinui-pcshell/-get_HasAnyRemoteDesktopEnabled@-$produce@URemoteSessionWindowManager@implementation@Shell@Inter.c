/*
 * XREFs of ?get_HasAnyRemoteDesktopEnabled@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x18065D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18065A878 (-HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::get_HasAnyRemoteDesktopEnabled(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *a1,
        _BYTE *a2)
{
  *a2 = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::HasAnyRemoteDesktopEnabled(a1);
  return 0LL;
}
