/*
 * XREFs of ??$Start@_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@$$QEA_N@Z @ 0x18032A2CC
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_ResumeCoro$1 @ 0x18032EAA0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EAA0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1 @ 0x18032EFD0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032EFD0.c)
 * Callees:
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032C6C4 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAA_ea_18032C6C4.c)
 *     ?StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z @ 0x18033413C (-StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *__fastcall GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::Start<bool>(
        GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *this,
        bool *a2)
{
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::`vftable';
  GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::StartActivity(this, *a2, 0);
  return this;
}
