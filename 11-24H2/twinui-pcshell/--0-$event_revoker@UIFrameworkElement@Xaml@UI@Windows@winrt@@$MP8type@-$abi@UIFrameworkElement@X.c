/*
 * XREFs of ??0?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBGA@AA@impl@winrt@@QEAA@AEBUIFrameworkElement@Xaml@UI@Windows@2@Uevent_token@2@@Z @ 0x1802AACB0
 * Callers:
 *     ?Loaded@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x1805C0D60 (-Loaded@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@i.c)
 *     ?Loaded@?$consume_Windows_UI_Xaml_IFrameworkElement@UGrid@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x180609FE0 (-Loaded@-$consume_Windows_UI_Xaml_IFrameworkElement@UGrid@Controls@Xaml@UI@Windows@_ea_180609FE0.c)
 * Callees:
 *     ??$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@1@@Z @ 0x1801D5F5C (--$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@-$weak_ref@UIDeskto.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall __0__event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBGA_AA_impl_winrt__QEAA_AEBUIFrameworkElement_Xaml_UI_Windows_2_Uevent_token_2__Z(
        __int64 *a1,
        void (__fastcall ****a2)(_QWORD, const wchar_t *, __int64 *),
        __int64 a3)
{
  *a1 = 0LL;
  winrt::weak_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::from_com_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource const &>(
    a1,
    a2);
  a1[1] = a3;
  return a1;
}
