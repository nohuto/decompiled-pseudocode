/*
 * XREFs of ??1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800113A4
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800111AC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     _CAnimationClock::_SetState_::_1_::dtor$0 @ 0x180068533 (_CAnimationClock--_SetState_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800118A8 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::AnimationClockStateChange::~AnimationClockStateChange(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this)
{
  *(_QWORD *)this = &AnimationClockLoggingTelemetry::AnimationClockStateChange::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
