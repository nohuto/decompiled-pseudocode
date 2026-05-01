/*
 * XREFs of ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAAXXZ @ 0x180462150
 * Callers:
 *     ?unsubscribe_from_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18063B3E0 (-unsubscribe_from_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18004E588 (-get@-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ??$exchange@U?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@U12@@std@@YA?AU?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18004E5F0 (--$exchange@U-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@U12@@std@@YA-A.c)
 *     ?revoke_impl@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@AEAAXUIShellViewCoordinator@Shell@UI@WindowsUdk@3@@Z @ 0x1803872AC (-revoke_impl@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8_ea_1803872AC.c)
 */

void __fastcall _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAAXXZ(
        __int64 *a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v2 = std::exchange<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>,winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>>(
         &v5,
         a1,
         &v4);
  v3 = winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::get(v2, &v6);
  _revoke_impl___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__AEAAXUIShellViewCoordinator_Shell_UI_WindowsUdk_3__Z(
    (__int64)a1,
    v3);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
}
