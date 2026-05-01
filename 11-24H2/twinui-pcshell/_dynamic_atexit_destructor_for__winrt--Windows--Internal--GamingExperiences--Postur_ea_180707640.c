/*
 * XREFs of _dynamic_atexit_destructor_for__winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configurationChangedEvent__ @ 0x180707640
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 */

void dynamic_atexit_destructor_for__winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configurationChangedEvent__()
{
  if ( winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configurationChangedEvent )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configurationChangedEvent);
}
