/*
 * XREFs of ??1EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1800E44D4
 * Callers:
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800E5D14 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _CControlCenterExperienceManager::PositionView_::_1_::dtor$0 @ 0x1806D169C (_CControlCenterExperienceManager--PositionView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E51CC (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_PositionViewActivity *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_PositionViewActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
