/*
 * XREFs of ??$Start@AEAPEBGPEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEAPEBG$$QEAPEBG@Z @ 0x180339564
 * Callers:
 *     _anonymous_namespace_::SetConfigurationValue_winrt::hstring_ @ 0x1803393D0 (_anonymous_namespace_--SetConfigurationValue_winrt--hstring_.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x18033AC80 (-GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences_ea_18033AC80.c)
 * Callees:
 *     ??$StartActivity@PEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG0@Z @ 0x180339684 (--$StartActivity@PEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEB.c)
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18033A344 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::Start<unsigned short const * &,unsigned short const *>(
        struct wil::details::IFailureCallback *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(a1);
  *(_QWORD *)a1 = &GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::`vftable';
  GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::StartActivity<unsigned short const *>(a1, *a2, *a3);
  return a1;
}
