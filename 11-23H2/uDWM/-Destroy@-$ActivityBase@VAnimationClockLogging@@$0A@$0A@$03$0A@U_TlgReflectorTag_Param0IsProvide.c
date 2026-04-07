/*
 * XREFs of ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800118A8
 * Callers:
 *     ??1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800113A4 (--1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x180012DF4 (--1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800136F0 (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18001394C (--1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x180013C3C (--1BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A9610 (--1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18000AC68 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180010CC0 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800110FC (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        volatile signed __int32 **a1)
{
  volatile signed __int32 **v1; // rdi
  char v3; // si
  volatile signed __int32 *v4; // rcx
  int v5; // edx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 39;
  v3 = 1;
  if ( !a1[39] )
    goto LABEL_2;
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  if ( !*v1 || **v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_2:
    v4 = a1[6];
    if ( *v4 == 1 )
    {
      LODWORD(SRWLock) = *((_DWORD *)v4 + 22);
      v5 = -2147024322;
      if ( (int)SRWLock < 0 )
        v5 = (int)SRWLock;
      wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        (__int64)v4,
        v5,
        (int *)&SRWLock);
      (*((void (__fastcall **)(volatile signed __int32 **))*a1 + 1))(a1);
    }
  }
}
