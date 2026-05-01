/*
 * XREFs of _lambda_c4158f368c90993acd5619817087aedd_::__lambda_c4158f368c90993acd5619817087aedd_ @ 0x18027AD34
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_665315f8e7a3be3e9382c02473f3b139___ @ 0x18027A33C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--CloudDesktop--Tra.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_665315f8e7a3be3e9382c02473f3b139____::_1_::dtor$0 @ 0x18027A3C9 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--CloudDesktop--Tr.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_665315f8e7a3be3e9382c02473f3b139___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_665315f8e7a3be3e9382c02473f3b139___ @ 0x18027AD68 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_18027AD68.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd____::_1_::dtor$0 @ 0x18071DFD1 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--Clo_ea_18071DFD1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_c4158f368c90993acd5619817087aedd_::__lambda_c4158f368c90993acd5619817087aedd_(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
