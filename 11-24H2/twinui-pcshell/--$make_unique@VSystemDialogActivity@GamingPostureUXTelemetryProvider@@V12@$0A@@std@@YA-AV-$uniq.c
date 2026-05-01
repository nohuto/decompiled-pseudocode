/*
 * XREFs of ??$make_unique@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@V12@$0A@@std@@YA?AV?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@0@$$QEAVSystemDialogActivity@GamingPostureUXTelemetryProvider@@@Z @ 0x18033CEC0
 * Callers:
 *     ??0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@AEBUhstring@6@AEBUguid@6@AEBU?$com_ptr@UIServiceProvider@@@6@@Z @ 0x18033D328 (--0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QE.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18033CF90 (--0-$ActivityBase@VGamingPostureUXTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflect.c)
 */

struct wil::details::IFailureCallback **__fastcall std::make_unique<GamingPostureUXTelemetryProvider::SystemDialogActivity,GamingPostureUXTelemetryProvider::SystemDialogActivity,0>(
        struct wil::details::IFailureCallback **a1)
{
  struct wil::details::IFailureCallback *v2; // rbx
  struct wil::details::IFailureCallback **result; // rax

  v2 = (struct wil::details::IFailureCallback *)operator new(0x150uLL);
  wil::ActivityBase<GamingPostureUXTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(v2);
  *(_QWORD *)v2 = &GamingPostureUXTelemetryProvider::SystemDialogActivity::`vftable';
  result = a1;
  *a1 = v2;
  return result;
}
