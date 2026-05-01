/*
 * XREFs of ??0?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@impl@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@2@Uevent_token@2@@Z @ 0x1801F92EC
 * Callers:
 *     ?PointerEntered@?$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x1805C0EA0 (-PointerEntered@-$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     ?PointerExited@?$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x1805C0F1C (-PointerExited@-$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@win.c)
 *     ?PointerEntered@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x1806AC998 (-PointerEntered@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Wind_ea_1806AC998.c)
 *     ?PointerExited@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x1806ACAEC (-PointerExited@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windo_ea_1806ACAEC.c)
 * Callees:
 *     ??$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@1@@Z @ 0x1801D5F5C (--$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@-$weak_ref@UIDeskto.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall __0__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BCAA_AA_impl_winrt__QEAA_AEBUIUIElement_Xaml_UI_Windows_2_Uevent_token_2__Z(
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
