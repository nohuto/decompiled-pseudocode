/*
 * XREFs of ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NXZ @ 0x18033AAE4
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803374F0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 *     ?get_EnabledAtStartup@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x18033C090 (-get_EnabledAtStartup@-$produce@UGamingPostureConfiguration@factory_implementation@Posture@Gamin.c)
 * Callees:
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180338AB8 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 */

bool __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::EnabledAtStartup(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return (unsigned int)anonymous_namespace_::GetConfigurationValue_unsigned_long_(
                         (__int64)c_enabledAtStartupValueName,
                         a2,
                         a3,
                         0,
                         0LL) != 0;
}
