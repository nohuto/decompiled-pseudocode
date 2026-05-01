/*
 * XREFs of _lambda_f03d60f1a224720d7726d7a51ce0d0af_::__lambda_f03d60f1a224720d7726d7a51ce0d0af_ @ 0x180368F04
 * Callers:
 *     _winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_f626797b4729018c6c4cb46d87a4371f____::_1_::dtor$0 @ 0x1806E4433 (_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInspectable_--EventHandle.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_f03d60f1a224720d7726d7a51ce0d0af____::_1_::dtor$0 @ 0x1806EF0A1 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--CloudDesktop--Tr.c)
 *     _CAppThumbnailWindow::SetupFlickScaleFactorAnimations_::_1_::dtor$31 @ 0x1806EF486 (_CAppThumbnailWindow--SetupFlickScaleFactorAnimations_--_1_--dtor$31.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801CE0D4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_f03d60f1a224720d7726d7a51ce0d0af_::__lambda_f03d60f1a224720d7726d7a51ce0d0af_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
