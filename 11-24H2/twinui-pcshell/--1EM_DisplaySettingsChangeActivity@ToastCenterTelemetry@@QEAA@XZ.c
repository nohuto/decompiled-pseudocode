/*
 * XREFs of ??1EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18021C630
 * Callers:
 *     _CToastCenterExperienceManager::DisplaySettingsChange_::_1_::dtor$0 @ 0x1806D8DA6 (_CToastCenterExperienceManager--DisplaySettingsChange_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026ED4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_DisplaySettingsChangeActivity::~EM_DisplaySettingsChangeActivity(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ToastCenterTelemetry::EM_DisplaySettingsChangeActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
