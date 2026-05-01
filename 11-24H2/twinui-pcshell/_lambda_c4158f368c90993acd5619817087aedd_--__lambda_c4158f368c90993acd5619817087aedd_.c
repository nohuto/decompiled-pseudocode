/*
 * XREFs of _lambda_c4158f368c90993acd5619817087aedd_::__lambda_c4158f368c90993acd5619817087aedd_ @ 0x180658834
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_3e3d6084102ea12775201c324e2ccf34___ @ 0x180655B3C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--CloudDesktop--Tra.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___ @ 0x180655C24 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--Clou_ea_180655C24.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___ @ 0x180658974 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_180658974.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd____::_1_::dtor$0 @ 0x18070265F (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--Clo_ea_18070265F.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801CE0D4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_c4158f368c90993acd5619817087aedd_::__lambda_c4158f368c90993acd5619817087aedd_(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
