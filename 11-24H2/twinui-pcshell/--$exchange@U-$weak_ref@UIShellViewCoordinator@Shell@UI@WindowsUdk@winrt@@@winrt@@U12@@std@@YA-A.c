/*
 * XREFs of ??$exchange@U?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@U12@@std@@YA?AU?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18004E5F0
 * Callers:
 *     ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAAXXZ @ 0x180462150 (-revoke@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@_ea_180462150.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 *__fastcall std::exchange<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>,winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 v7; // rax

  v3 = *a2;
  *a2 = 0LL;
  *a1 = v3;
  if ( a2 != a3 )
  {
    if ( *a2 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2);
    v7 = *a3;
    *a3 = 0LL;
    *a2 = v7;
  }
  return a1;
}
