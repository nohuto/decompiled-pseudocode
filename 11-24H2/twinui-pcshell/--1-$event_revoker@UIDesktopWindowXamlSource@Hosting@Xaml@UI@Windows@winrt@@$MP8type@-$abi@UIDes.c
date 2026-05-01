/*
 * XREFs of ??1?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x180054FC0
 * Callers:
 *     ??1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180054F68 (--1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEA.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlExplorerHostChildWindow_::_1_::dtor$2 @ 0x1806CCC30 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlExplorerHos_ea_1806CCC30.c)
 * Callees:
 *     ?revoke_impl@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@3@@Z @ 0x180114BF8 (-revoke_impl@-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-.c)
 *     ?get@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180223CE0 (-get@-$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

void __fastcall __1__event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::get(a1, &v3);
    _revoke_impl___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_3__Z(
      a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
