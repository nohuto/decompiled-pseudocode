/*
 * XREFs of ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800324BC
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800324BC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x180058E88 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18005A444 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18007B1D4 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800998C0 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032388 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800324BC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180032750 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180032814 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180032884 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x1800328D8 (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800329A8 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180032A50 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800337C0 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180059D44 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18005A444 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0jdd_EtwEventWriteTransfer @ 0x180097B7C (McTemplateU0jdd_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800A6C4C (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimationClock::_SetState(__int64 a1, unsigned int a2)
{
  int v4; // r15d
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // edx
  int v8; // ecx
  void (__fastcall ***v9)(_QWORD, __int128 *, _QWORD); // rcx
  void (__fastcall **v10)(_QWORD, __int128 *, _QWORD); // rax
  unsigned int v12; // r14d
  __int64 ElapsedMillsecondsFromTime; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  struct _GUID v17; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  void **v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[272]; // [rsp+58h] [rbp-A8h] BYREF
  char v21[8]; // [rsp+168h] [rbp+68h] BYREF
  char v22[48]; // [rsp+170h] [rbp+70h] BYREF

  v4 = 0;
  v5 = -1;
  if ( a2 == 1 )
  {
    v5 = *(_DWORD *)(a1 + 136);
    goto LABEL_25;
  }
  if ( a2 == 2 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      ElapsedMillsecondsFromTime = CAnimationClock::s_GetElapsedMillsecondsFromTime((const union _LARGE_INTEGER *)(a1 + 88));
      if ( ElapsedMillsecondsFromTime > 0 )
        v5 = ElapsedMillsecondsFromTime;
    }
    else
    {
      v5 = 0;
    }
  }
  else if ( a2 != 3 )
  {
    if ( a2 != 4 )
    {
      if ( a2 == 5 || a2 == 6 )
      {
        v5 = 1000;
      }
      else if ( a2 != 7 )
      {
        return (unsigned int)-2147418113;
      }
      goto LABEL_8;
    }
    v5 = *(_DWORD *)(a1 + 140);
    v4 = CAnimationClock::_TriggerAnimation((CAnimationClock *)a1);
    if ( *(_QWORD *)(a1 + 88) )
    {
      v14 = CAnimationClock::s_GetElapsedMillsecondsFromTime((const union _LARGE_INTEGER *)(a1 + 88));
      v15 = *(unsigned int *)(a1 + 140);
      v16 = -v14;
      if ( v14 > 0 )
        v16 = v14;
      if ( v16 >= v15 )
        v5 = 0;
      else
        v5 = v15 - v14;
    }
LABEL_25:
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
LABEL_8:
  v6 = *(_DWORD *)(a1 + 80);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    &v19,
    "AnimationClockStateChange");
  v19 = &AnimationClockLoggingTelemetry::AnimationClockStateChange::`vftable';
  v17 = *(struct _GUID *)(a1 + 120);
  AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
    (AnimationClockLoggingTelemetry::AnimationClockStateChange *)&v19,
    &v17,
    v6,
    a2);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0jdd_EtwEventWriteTransfer(v8, v7, a1 + 120, *(_DWORD *)(a1 + 80), a2);
  *(_DWORD *)(a1 + 80) = a2;
  if ( *(_QWORD *)(a1 + 72) )
  {
    *(_QWORD *)&v17.Data1 = a1 + 24;
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
    v9 = *(void (__fastcall ****)(_QWORD, __int128 *, _QWORD))(a1 + 72);
    v10 = *v9;
    v18 = *(_OWORD *)(a1 + 120);
    (*v10)(v9, &v18, a2);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  }
  if ( a2 == *(_DWORD *)(a1 + 80) )
  {
    if ( v5 != -1 )
      v4 = CAnimationClock::_SetTimer((CAnimationClock *)a1, v5);
    if ( v4 >= 0 )
    {
      v12 = a2 - 2;
      if ( v12 )
      {
        if ( v12 == 1 )
          v4 = CAnimationClock::_SetTime(a1, 0LL, 0LL);
      }
      else if ( v5 == -1 )
      {
        CAnimationClock::_SetState(a1, 4LL);
      }
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v19, (unsigned int)v4);
  v19 = &AnimationClockLoggingTelemetry::AnimationClockStateChange::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v19);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v22);
  wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v21);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>(v20);
  return (unsigned int)v4;
}
