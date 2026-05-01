/*
 * XREFs of ??1EM_ViewShownActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18021CD98
 * Callers:
 *     ?OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180384CC0 (-OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CToastCenterExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x1806E5146 (_CToastCenterExperienceManager--OnViewShown_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026ED4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_ViewShownActivity::~EM_ViewShownActivity(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ToastCenterTelemetry::EM_ViewShownActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
