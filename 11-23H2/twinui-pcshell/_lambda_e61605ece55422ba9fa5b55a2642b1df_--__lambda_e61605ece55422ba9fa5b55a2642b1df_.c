/*
 * XREFs of _lambda_e61605ece55422ba9fa5b55a2642b1df_::__lambda_e61605ece55422ba9fa5b55a2642b1df_ @ 0x1806B0740
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout_::_1_::dtor$27 @ 0x1806BFFB0 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--ShowMACFlyout_ea_1806BFFB0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??1ShowFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806B0920 (--1ShowFlyout@MeetAndChatTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_e61605ece55422ba9fa5b55a2642b1df_::__lambda_e61605ece55422ba9fa5b55a2642b1df_(__int64 *a1)
{
  MeetAndChatTelemetry::ShowFlyout::~ShowFlyout((MeetAndChatTelemetry::ShowFlyout *)(a1 + 1));
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
