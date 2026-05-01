/*
 * XREFs of ?remove_RemoteDesktopConnected@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18065DA80
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoteDesktopConnected@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x18065C15C (-RemoteDesktopConnected@RemoteSessionWindowManager@implementation@Shell@Internal@Wi_ea_18065C15C.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::remove_RemoteDesktopConnected(
        __int64 a1,
        void *a2)
{
  PVOID v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteDesktopConnected(
    (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((a1 - 16) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
