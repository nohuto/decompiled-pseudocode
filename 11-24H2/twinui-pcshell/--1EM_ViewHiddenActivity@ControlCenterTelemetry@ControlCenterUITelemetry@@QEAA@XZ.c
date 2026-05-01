/*
 * XREFs of ??1EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1803736DC
 * Callers:
 *     ?OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180375BE0 (-OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CControlCenterExperienceManager::OnViewHidden_::_1_::dtor$0 @ 0x1806E4EFB (_CControlCenterExperienceManager--OnViewHidden_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E51CC (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewHiddenActivity::~EM_ViewHiddenActivity(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewHiddenActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
