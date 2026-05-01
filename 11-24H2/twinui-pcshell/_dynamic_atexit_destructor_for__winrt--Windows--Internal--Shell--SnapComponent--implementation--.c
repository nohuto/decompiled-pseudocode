/*
 * XREFs of _dynamic_atexit_destructor_for__winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary__ @ 0x180706F50
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 */

void dynamic_atexit_destructor_for__winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary__()
{
  if ( winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary);
}
