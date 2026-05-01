/*
 * XREFs of ?RemoteDesktopConnected@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x18065C15C
 * Callers:
 *     ?remove_RemoteDesktopConnected@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18065DA80 (-remove_RemoteDesktopConnected@-$produce@URemoteSessionWindowManager@implementation@Shell@Intern.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteDesktopConnected(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this,
        PVOID *a2)
{
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::remove(
    (__int64)this + 256,
    *a2);
}
