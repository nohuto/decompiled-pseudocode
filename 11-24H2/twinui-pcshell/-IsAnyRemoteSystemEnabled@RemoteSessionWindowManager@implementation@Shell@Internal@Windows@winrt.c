/*
 * XREFs of ?IsAnyRemoteSystemEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18065AC74
 * Callers:
 *     ?IsAnyRemoteSystemEnabled@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x18065AC40 (-IsAnyRemoteSystemEnabled@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Wi.c)
 * Callees:
 *     ?HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18065A878 (-HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 *     ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18065AE14 (-IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@_ea_18065AE14.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsAnyRemoteSystemEnabled(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsImmersiveModeSupported(this) )
    return winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::HasAnyRemoteDesktopEnabled(v1);
  return v2;
}
