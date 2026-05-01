/*
 * XREFs of ??$Start@AEAPEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEAPEBG@Z @ 0x18033951C
 * Callers:
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180338AB8 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 *     _anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____ @ 0x180338CF0 (_anonymous_namespace_--GetConfigurationValue_std--basic_string_unsigned_short_std--char_traits_u.c)
 * Callees:
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18033A344 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?StartActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG@Z @ 0x18033B7E0 (-StartActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity *__fastcall GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Start<unsigned short const * &>(
        GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity *this,
        const unsigned __int16 **a2)
{
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::`vftable';
  GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::StartActivity(this, *a2);
  return this;
}
