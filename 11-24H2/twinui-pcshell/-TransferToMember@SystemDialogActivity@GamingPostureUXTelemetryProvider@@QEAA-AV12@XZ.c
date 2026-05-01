/*
 * XREFs of ?TransferToMember@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA?AV12@XZ @ 0x18033F8B0
 * Callers:
 *     ??0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@AEBUhstring@6@AEBUguid@6@AEBU?$com_ptr@UIServiceProvider@@@6@@Z @ 0x18033D328 (--0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QE.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 * Callees:
 *     ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18033CF90 (--0-$ActivityBase@VGamingPostureUXTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflect.c)
 */

struct wil::details::IFailureCallback *__fastcall GamingPostureUXTelemetryProvider::SystemDialogActivity::TransferToMember(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<GamingPostureUXTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    0);
  *(_QWORD *)a2 = &GamingPostureUXTelemetryProvider::SystemDialogActivity::`vftable';
  return a2;
}
