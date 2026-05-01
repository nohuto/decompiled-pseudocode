/*
 * XREFs of _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_ @ 0x1805F2C08
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___::_implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___ @ 0x1805F2D64 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncActionCompletedHa_ea_1805F2D64.c)
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1805F4850 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor$13 @ 0x1806FDFBF (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--HideMACFlyout_ea_1806FDFBF.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805F2E50 (--1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_(__int64 *a1)
{
  MeetAndChatTelemetry::HideFlyout::~HideFlyout((MeetAndChatTelemetry::HideFlyout *)(a1 + 1));
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
