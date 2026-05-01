/*
 * XREFs of ??4?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802AAB30
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800EFEB8 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18004F72C (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?revoke_impl@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@3@@Z @ 0x180114BF8 (-revoke_impl@-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-.c)
 *     ?get@?$weak_ref@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180479464 (-get@-$weak_ref@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

__int64 *__fastcall __4__event_revoker_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt___MP8type___abi_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
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
    v7 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::get(
                                                                                               &v9,
                                                                                               &v11);
    _revoke_impl___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_3__Z(
      (__int64)&v9,
      v7);
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  }
  return a1;
}
