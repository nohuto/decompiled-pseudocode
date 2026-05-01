/*
 * XREFs of ??1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x18033A624
 * Callers:
 *     _anonymous_namespace_::SetConfigurationValue_unsigned_long_ @ 0x180339260 (_anonymous_namespace_--SetConfigurationValue_unsigned_long_.c)
 *     _anonymous_namespace_::SetConfigurationValue_winrt::hstring_ @ 0x1803393D0 (_anonymous_namespace_--SetConfigurationValue_winrt--hstring_.c)
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x18033A9D0 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@W.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x18033AC80 (-GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences_ea_18033AC80.c)
 *     __anonymous_namespace_::SetConfigurationValue_unsigned_long__::_1_::dtor$1 @ 0x1806E14C6 (__anonymous_namespace_--SetConfigurationValue_unsigned_long__--_1_--dtor$1.c)
 *     __anonymous_namespace_::SetConfigurationValue_winrt::hstring__::_1_::dtor$2 @ 0x1806E1515 (__anonymous_namespace_--SetConfigurationValue_winrt--hstring__--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::GamingAppAumid_::_1_::dtor$1 @ 0x1806E15C2 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureConfiguratio.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18033A930 (-Destroy@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::~SetConfigurationValueActivity(
        GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity *this)
{
  *(_QWORD *)this = &GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::`vftable';
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
