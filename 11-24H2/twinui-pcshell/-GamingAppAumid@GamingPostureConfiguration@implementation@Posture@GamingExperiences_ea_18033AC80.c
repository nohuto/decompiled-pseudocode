/*
 * XREFs of ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x18033AC80
 * Callers:
 *     ?put_GamingAppAumid@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x18033C200 (-put_GamingAppAumid@-$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingE.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x180335728 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     _anonymous_namespace_::SetConfigurationValue_winrt::hstring_ @ 0x1803393D0 (_anonymous_namespace_--SetConfigurationValue_winrt--hstring_.c)
 *     ??$Start@AEAPEBGPEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEAPEBG$$QEAPEBG@Z @ 0x180339564 (--$Start@AEAPEBGPEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@A.c)
 *     ??1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x18033A624 (--1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18033B884 (-Stop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::GamingAppAumid(
        const struct winrt::hstring *a1)
{
  winrt::hstring *v2; // rax
  const unsigned __int16 *v3; // rcx
  DWORD cbData; // eax
  __int64 v5; // rax
  int v6; // eax
  int lpData; // [rsp+20h] [rbp-188h]
  _QWORD v8[2]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v9[336]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
  {
    v2 = winrt::hstring::hstring((winrt::hstring *)v8, a1);
    anonymous_namespace_::SetConfigurationValue_winrt::hstring_(c_gamingAppAumidValueName, v2);
  }
  else
  {
    v8[0] = winrt::hstring::c_str(a1);
    GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::Start<unsigned short const * &,unsigned short const *>(
      (struct wil::details::IFailureCallback *)v9,
      &c_gamingAppAumidValueName,
      v8);
    v3 = winrt::hstring::c_str(a1);
    if ( v3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v3[v5] );
      cbData = 2 * v5 + 2;
    }
    else
    {
      cbData = 0;
    }
    v6 = RegSetKeyValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration",
           c_gamingAppAumidValueName,
           1u,
           v3,
           cbData);
    if ( v6 > 0 )
      v6 = (unsigned __int16)v6 | 0x80070000;
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v6,
        lpData);
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
    GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::~SetConfigurationValueActivity((GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity *)v9);
  }
}
