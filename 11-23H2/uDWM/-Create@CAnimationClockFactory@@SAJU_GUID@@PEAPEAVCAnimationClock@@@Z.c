/*
 * XREFs of ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180012CE0
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180013164 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000F684 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800116A4 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x180012C34 (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ??1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x180012DF4 (--1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??0CAnimationClock@@QEAA@XZ @ 0x180012E20 (--0CAnimationClock@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationClockFactory::Create(struct _GUID *a1, struct CAnimationClock **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  CAnimationClock *v6; // rax
  struct CAnimationClock *v7; // rax
  struct _GUID v9; // [rsp+30h] [rbp-168h] BYREF
  __int64 v10[40]; // [rsp+40h] [rbp-158h] BYREF

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"CreateAnimationClock");
  v10[0] = (__int64)&AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  v9 = *a1;
  AnimationClockLoggingTelemetry::CreateAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::CreateAnimationClock *)v10,
    &v9);
  v4 = 0;
  *a2 = 0LL;
  v5 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v5 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v5 )
  {
    v6 = (CAnimationClock *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              152LL);
    *(_QWORD *)&v9.Data1 = v6;
    if ( v6 )
    {
      v7 = CAnimationClock::CAnimationClock(v6);
      *a2 = v7;
      if ( v7 )
        goto LABEL_6;
    }
    else
    {
      *a2 = 0LL;
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2AAu, 0LL);
  }
  else
  {
    v4 = -2147024809;
  }
  if ( *a2 )
  {
    CBaseObject::Release(*a2);
    *a2 = 0LL;
  }
LABEL_6:
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10, v4);
  AnimationClockLoggingTelemetry::CreateAnimationClock::~CreateAnimationClock((AnimationClockLoggingTelemetry::CreateAnimationClock *)v10);
  return v4;
}
