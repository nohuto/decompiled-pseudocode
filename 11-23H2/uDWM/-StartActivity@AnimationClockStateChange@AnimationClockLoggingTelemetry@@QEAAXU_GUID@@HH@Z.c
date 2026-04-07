/*
 * XREFs of ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x180011450
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800111AC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180011060 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180011638 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180011734 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800117D4 (-EnsureWatchingCurrentThread@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflecto.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005EE0C (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 */

void __fastcall AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this,
        struct _GUID *a2,
        int a3,
        int a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+3Ch] [rbp-55h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-51h] BYREF
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v16[32]; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v17; // [rsp+78h] [rbp-19h]
  __int64 v18; // [rsp+80h] [rbp-11h]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp-9h]
  __int64 v20; // [rsp+90h] [rbp-1h]
  struct _GUID *v21; // [rsp+98h] [rbp+7h]
  __int64 v22; // [rsp+A0h] [rbp+Fh]
  int *v23; // [rsp+A8h] [rbp+17h]
  __int64 v24; // [rsp+B0h] [rbp+1Fh]
  int *v25; // [rsp+B8h] [rbp+27h]
  __int64 v26; // [rsp+C0h] [rbp+2Fh]

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = *(_DWORD **)(wil::details::static_lazy<AnimationClockLogging>::get(
                      v8,
                      _lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v9 > 4u )
  {
    v12 = a4;
    v13 = a3;
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0LL;
    v10 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v11 = *((_QWORD *)this + 6);
    v25 = &v12;
    v26 = 4LL;
    v23 = &v13;
    v24 = 4LL;
    p_CurrentThreadId = &CurrentThreadId;
    v21 = a2;
    v17 = &v15;
    v22 = 16LL;
    v20 = 4LL;
    v18 = 8LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v9, byte_1801252E8, v11 + 8, v10, 7, (__int64)v16);
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(this);
}
