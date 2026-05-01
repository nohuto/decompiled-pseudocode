/*
 * XREFs of ?CurrentSessionId@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x18033A904
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803374F0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     _anonymous_namespace_::SetConfigurationValue_winrt::hstring_ @ 0x1803393D0 (_anonymous_namespace_--SetConfigurationValue_winrt--hstring_.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::CurrentSessionId(
        const struct winrt::hstring *a1)
{
  winrt::hstring *v1; // rax
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = winrt::hstring::hstring((winrt::hstring *)&v2, a1);
  anonymous_namespace_::SetConfigurationValue_winrt::hstring_(L"CurrentSessionId", v1);
}
