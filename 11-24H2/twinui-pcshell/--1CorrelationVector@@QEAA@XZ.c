/*
 * XREFs of ??1CorrelationVector@@QEAA@XZ @ 0x1802D0D3C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor$0 @ 0x1806FDF9B (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--HideMACFlyout_--_1_--dtor$.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout_::_1_::dtor$1 @ 0x1806FE315 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--ShowMACFlyout_--_1_--dtor$.c)
 *     _Utils::ProtocolLauncher::LaunchUriWithCv_::_1_::dtor$0 @ 0x1806FE35D (_Utils--ProtocolLauncher--LaunchUriWithCv_--_1_--dtor$0.c)
 *     _WindowRegistration::WindowRegistration_::_1_::dtor$1 @ 0x1806FE577 (_WindowRegistration--WindowRegistration_--_1_--dtor$1.c)
 *     _WindowRegistration::_WindowRegistration_::_1_::dtor$1 @ 0x1806FE59F (_WindowRegistration--_WindowRegistration_--_1_--dtor$1.c)
 *     _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::dtor$3 @ 0x1806FE601 (_ApplicationFlyoutView--RegisterFlyoutWindow_--_1_--dtor$3.c)
 *     _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::dtor$0 @ 0x1806FE650 (_ApplicationFlyoutView--RegisterFlyoutWindow_--_1_--dtor$0.c)
 *     _ApplicationFlyoutView::Show$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806FE6C3 (_ApplicationFlyoutView--Show$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CorrelationVector::~CorrelationVector(void **this)
{
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(this);
}
