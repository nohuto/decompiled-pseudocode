/*
 * XREFs of ?LaunchAsync@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180669370
 * Callers:
 *     <none>
 * Callees:
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E3DC (-LaunchBootToCloudAsync@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AU.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::BootProviderActivator::LaunchAsync(
        __int64 a1,
        _QWORD *a2,
        __int64 **a3)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::LaunchBootToCloudAsync(a2, a3);
  return a2;
}
