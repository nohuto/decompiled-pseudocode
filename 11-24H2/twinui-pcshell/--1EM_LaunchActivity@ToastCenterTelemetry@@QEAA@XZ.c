/*
 * XREFs of ??1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180226B3C
 * Callers:
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800B39F0 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::Launch_::_1_::dtor$0 @ 0x1806CFBBC (_CToastCenterExperienceManager--Launch_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026ED4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_LaunchActivity::~EM_LaunchActivity(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ToastCenterTelemetry::EM_LaunchActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
