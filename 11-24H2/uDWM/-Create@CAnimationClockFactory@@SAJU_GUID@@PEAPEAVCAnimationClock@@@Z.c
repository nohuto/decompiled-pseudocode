/*
 * XREFs of ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180058F64
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180058C14 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032388 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180032750 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180032814 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180032884 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800329A8 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180032A50 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x180059240 (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ??0CAnimationClock@@QEAA@XZ @ 0x180059364 (--0CAnimationClock@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationClockFactory::Create(struct _GUID *a1, struct CAnimationClock **a2)
{
  const struct std::nothrow_t *v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rax
  CAnimationClock *v7; // rax
  struct CAnimationClock *v8; // rax
  struct _GUID v10; // [rsp+30h] [rbp-188h] BYREF
  void **v11; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v12[272]; // [rsp+48h] [rbp-170h] BYREF
  volatile signed __int32 *v13; // [rsp+158h] [rbp-60h] BYREF
  _BYTE v14[48]; // [rsp+160h] [rbp-58h] BYREF

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v11,
    (__int64)"CreateAnimationClock");
  v11 = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  v10 = *a1;
  AnimationClockLoggingTelemetry::CreateAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::CreateAnimationClock *)&v11,
    &v10);
  v5 = 0;
  *a2 = 0LL;
  v6 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v6 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    v7 = (CAnimationClock *)operator new[](0x98uLL, v4);
    *(_QWORD *)&v10.Data1 = v7;
    if ( v7 )
    {
      v8 = CAnimationClock::CAnimationClock(v7);
      *a2 = v8;
      if ( v8 )
        goto LABEL_6;
    }
    else
    {
      *a2 = 0LL;
    }
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2AAu, 0LL);
  }
  else
  {
    v5 = -2147024809;
  }
  if ( *a2 )
  {
    CBaseObject::Release(*a2);
    *a2 = 0LL;
  }
LABEL_6:
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v11, v5);
  v11 = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v11);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v14);
  wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v13);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  return v5;
}
