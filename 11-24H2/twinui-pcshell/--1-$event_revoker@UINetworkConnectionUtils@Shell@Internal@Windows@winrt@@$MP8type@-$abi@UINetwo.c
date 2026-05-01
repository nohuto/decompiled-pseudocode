/*
 * XREFs of ??1?$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@QEAA@XZ @ 0x180655094
 * Callers:
 *     ??1BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180655268 (--1BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4?$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18066826C (--4-$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@-$abi@UINetwo.c)
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1806682F0 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?revoke_impl@?$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@AEAAXUISnapLayoutPickerExtension@Shell@UI@WindowsUdk@3@@Z @ 0x1802B0CA0 (-revoke_impl@-$event_revoker@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@-$a.c)
 *     ?get@?$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180655870 (-get@-$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

void __fastcall __1__event_revoker_UINetworkConnectionUtils_Shell_Internal_Windows_winrt___MP8type___abi_UINetworkConnectionUtils_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::get(
                                                                                               a1,
                                                                                               &v3);
    _revoke_impl___event_revoker_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_winrt__AEAAXUISnapLayoutPickerExtension_Shell_UI_WindowsUdk_3__Z(
      (__int64)a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
