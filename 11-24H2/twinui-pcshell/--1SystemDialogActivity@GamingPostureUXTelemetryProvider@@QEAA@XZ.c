/*
 * XREFs of ??1SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x18032D3F8
 * Callers:
 *     ??R?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@QEBAXPEAVSystemDialogActivity@GamingPostureUXTelemetryProvider@@@Z @ 0x18032D73C (--R-$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@QEBAXPEAVSyste.c)
 *     ??0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@AEBUhstring@6@AEBUguid@6@AEBU?$com_ptr@UIServiceProvider@@@6@@Z @ 0x18033D328 (--0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QE.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::GamingPostureSystemDialog_::_1_::dtor$5 @ 0x1806E1806 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1806.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::GamingPostureSystemDialog_::_1_::dtor$6 @ 0x1806E1818 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1818.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806E18E4 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E18E4.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806E1916 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1916.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18032E8F4 (-Destroy@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgR.c)
 */

void __fastcall GamingPostureUXTelemetryProvider::SystemDialogActivity::~SystemDialogActivity(
        GamingPostureUXTelemetryProvider::SystemDialogActivity *this)
{
  *(_QWORD *)this = &GamingPostureUXTelemetryProvider::SystemDialogActivity::`vftable';
  wil::ActivityBase<GamingPostureUXTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<GamingPostureUXTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<GamingPostureUXTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
