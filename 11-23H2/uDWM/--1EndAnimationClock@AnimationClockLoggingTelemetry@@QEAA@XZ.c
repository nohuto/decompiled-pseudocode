/*
 * XREFs of ??1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18001394C
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180013818 (-End@CAnimationClock@@QEAAJXZ.c)
 *     _CAnimationClock::End_::_1_::dtor$1 @ 0x180068569 (_CAnimationClock--End_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800118A8 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::EndAnimationClock::~EndAnimationClock(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&AnimationClockLoggingTelemetry::EndAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
