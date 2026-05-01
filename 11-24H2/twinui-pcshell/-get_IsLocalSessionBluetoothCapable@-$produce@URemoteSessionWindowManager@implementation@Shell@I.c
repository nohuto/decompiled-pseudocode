/*
 * XREFs of ?get_IsLocalSessionBluetoothCapable@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x18065D830
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLocalSessionBluetoothCapable@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBA_NXZ @ 0x18065AE58 (-IsLocalSessionBluetoothCapable@RemoteSessionWindowManager@implementation@Shell@Internal@Windows.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::get_IsLocalSessionBluetoothCapable(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *a1,
        _BYTE *a2)
{
  *a2 = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsLocalSessionBluetoothCapable(a1);
  return 0LL;
}
