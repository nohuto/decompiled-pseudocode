/*
 * XREFs of ?GetRemoteDesktopInformation@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteDesktopInformation@3456@XZ @ 0x18065A788
 * Callers:
 *     ?GetRemoteDesktopInformation@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_RemoteDesktopInformation@23@@Z @ 0x18065A6D0 (-GetRemoteDesktopInformation@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal.c)
 * Callees:
 *     ?GetRemoteDesktopInformation@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteDesktopInformation@3456@XZ @ 0x18064D4B0 (-GetRemoteDesktopInformation@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::GetRemoteDesktopInformation(
        __int64 a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteDesktopInformation(a2);
  return a2;
}
