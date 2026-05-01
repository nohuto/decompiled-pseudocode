/*
 * XREFs of ??1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1801EF7B8
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801E6388 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::PositionView_::_1_::dtor$0 @ 0x1806D8DB8 (_CToastCenterExperienceManager--PositionView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026ED4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ToastCenterTelemetry::EM_PositionViewActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
