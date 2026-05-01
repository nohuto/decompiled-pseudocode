/*
 * XREFs of ?IsImmersiveRemoteSession@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180238790
 * Callers:
 *     <none>
 * Callees:
 *     ?IsImmersiveRemoteSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBA_NXZ @ 0x18065AE4C (-IsImmersiveRemoteSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::IsImmersiveRemoteSession(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *a1,
        _BYTE *a2)
{
  *a2 = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsImmersiveRemoteSession(a1);
  return 0LL;
}
