/*
 * XREFs of ??4?$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802AF954
 * Callers:
 *     ?FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXURect@Foundation@67@@Z @ 0x180274248 (-FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXU.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18004F72C (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?revoke_impl@?$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@AEAAXUISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@3@@Z @ 0x1801C8024 (-revoke_impl@-$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@-$.c)
 *     ?get@?$weak_ref@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18021DA4C (-get@-$weak_ref@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 */

__int64 *__fastcall __4__event_revoker_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+28h] [rbp-8h]
  __int64 v11; // [rsp+40h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  v9 = 0LL;
  v10 = v4;
  v11 = v2;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v9, a1);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v11);
  if ( v11 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  v5 = v9 == 0;
  v6 = v10;
  v10 = a1[1];
  a1[1] = v6;
  if ( !v5 )
  {
    v7 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension2>::get(
                                                                                               &v9,
                                                                                               &v11);
    _revoke_impl___event_revoker_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__AEAAXUISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_3__Z(
      (__int64)&v9,
      v7);
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  }
  return a1;
}
