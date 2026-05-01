/*
 * XREFs of ??$Start@PEBGUguid@winrt@@_N@SystemDialogActivity@GamingPostureUXTelemetryProvider@@SA?AV01@$$QEAPEBG$$QEAUguid@winrt@@$$QEA_N@Z @ 0x18033C78C
 * Callers:
 *     ??0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@AEBUhstring@6@AEBUguid@6@AEBU?$com_ptr@UIServiceProvider@@@6@@Z @ 0x18033D328 (--0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QE.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 * Callees:
 *     ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18033D060 (--0-$ActivityBase@VGamingPostureUXTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA_ea_18033D060.c)
 *     ?StartActivity@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAAXPEBGU_GUID@@_N@Z @ 0x18033F2F8 (-StartActivity@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAAXPEBGU_GUID@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
GamingPostureUXTelemetryProvider::SystemDialogActivity *__fastcall GamingPostureUXTelemetryProvider::SystemDialogActivity::Start<unsigned short const *,winrt::guid,bool>(
        GamingPostureUXTelemetryProvider::SystemDialogActivity *this,
        const unsigned __int16 **a2,
        struct _GUID *a3,
        bool *a4)
{
  struct _GUID v9; // [rsp+20h] [rbp-18h] BYREF

  wil::ActivityBase<GamingPostureUXTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &GamingPostureUXTelemetryProvider::SystemDialogActivity::`vftable';
  v9 = *a3;
  GamingPostureUXTelemetryProvider::SystemDialogActivity::StartActivity(this, *a2, &v9, *a4);
  return this;
}
