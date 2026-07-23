/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1405B675C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B6AE0 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1402ABB08 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiSetClockTimer @ 0x14043504C (KiSetClockTimer.c)
 *     KiShouldRearmClockTimer @ 0x14043516C (KiShouldRearmClockTimer.c)
 *     KiSetClockTimerDeadlineNoWake @ 0x1404A4194 (KiSetClockTimerDeadlineNoWake.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline @ 0x1405B650C (Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405B77E8 (KiCancelClockTimerKTimerDeadlines.c)
 *     KiFindNextTimerDueTime @ 0x1405C2050 (KiFindNextTimerDueTime.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall KePrepareClockTimerForIdle(__int64 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 *v2; // r13
  __int64 NextTickDueTime; // rsi
  LARGE_INTEGER InterruptTimePrecise; // r12
  unsigned __int64 v5; // r14
  unsigned __int8 CurrentIrql; // r15
  int v7; // edx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  $725FE607DE8AA0A008C64067311614D0 *v11; // rdx
  __int64 v12; // rdi
  struct _KPRCB *v13; // rdi
  int v14; // r13d
  NTSTATUS result; // eax
  unsigned __int8 ClockOwner; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int8 ClockActive; // [rsp+49h] [rbp-BFh] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v20; // [rsp+60h] [rbp-A8h]
  LARGE_INTEGER v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER *v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  unsigned __int8 *p_ClockOwner; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  unsigned __int8 *p_ClockActive; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  __int64 *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  __int64 *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  unsigned __int64 *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = a1;
  v20 = a1;
  PerformanceCounter.QuadPart = 0LL;
  NextTickDueTime = -1LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = -1LL;
  if ( CurrentPrcb->ClockOwner )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    if ( (unsigned int)Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline() )
      goto LABEL_28;
    KiSetClockTimerDeadlineNoWake((__int64)CurrentPrcb, 1);
    if ( (CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TypeFlags & 1) == 0 )
      goto LABEL_28;
    v7 = 2;
    goto LABEL_17;
  }
  v18 = -1LL;
  if ( (unsigned int)Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline() )
  {
    if ( KiSerializeTimerExpiration )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
      goto LABEL_28;
    }
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiFindNextTimerDueTime)(
           CurrentPrcb,
           (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
           0LL,
           &v18);
    v5 = v18;
    if ( v9 < v18 )
      v5 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    if ( v5 == -1LL )
    {
      KiCancelClockTimerKTimerDeadlines(CurrentPrcb);
      goto LABEL_28;
    }
  }
  else
  {
    if ( !KiSerializeTimerExpiration )
    {
      v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiFindNextTimerDueTime)(
             CurrentPrcb,
             (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
             0LL,
             &v18);
      v5 = v18;
      if ( v8 < v18 )
        v5 = v8;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    if ( v5 == -1LL )
      goto LABEL_28;
  }
  if ( v5 > CurrentPrcb->ClockTimerState.ClockTimerEntries[1].DueTime )
  {
    KiSetClockTimer((__int64)CurrentPrcb, InterruptTimePrecise, v5, KeMinimumIncrement, 1, 0, 0);
    goto LABEL_28;
  }
  if ( !(unsigned int)Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline() )
  {
    v7 = 1;
LABEL_17:
    KiSetClockTimerDeadlineNoWake((__int64)CurrentPrcb, v7);
  }
LABEL_28:
  v10 = 0LL;
  v11 = &CurrentPrcb->ClockTimerState.ClockTimerEntries[0].12;
  while ( v10 < 7 )
  {
    if ( (v11->TypeFlags & 3) == 1 )
    {
      if ( KiShouldRearmClockTimer((__int64)CurrentPrcb, InterruptTimePrecise, 0) )
      {
        CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
        KiSetNextClockTickDueTime(InterruptTimePrecise, 0);
      }
      NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
      v12 = NextTickDueTime - InterruptTimePrecise.QuadPart;
      goto LABEL_42;
    }
    ++v10;
    v11 += 16;
  }
  v13 = KeGetCurrentPrcb();
  v14 = KiClockTimerOwner;
  if ( (v13->PendingTickFlags & 1) != 0 )
  {
    guard_dispatch_icall_no_overrides(v10, v11);
    v13->ClockTimerState.ClockActive = 0;
    v13->PendingTickFlags &= ~1u;
  }
  if ( v13->Number == v14 )
    ++dword_140F21424;
  if ( v13->ClockOwner )
    v13->ClockOwner = 0;
  v2 = v20;
  v12 = -1LL;
LABEL_42:
  CurrentPrcb->ClockTimerState.ClockArmedForIdle = 1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v21 = InterruptTimePrecise;
    v27 = 8LL;
    v26 = &v21;
    ClockOwner = CurrentPrcb->ClockOwner;
    v33 = 8LL;
    p_ClockOwner = &ClockOwner;
    ClockActive = CurrentPrcb->ClockTimerState.ClockActive;
    p_ClockActive = &ClockActive;
    v32 = &v22;
    v34 = &v23;
    v36 = &v24;
    v35 = 8LL;
    v37 = 8LL;
    v29 = 1LL;
    v31 = 1LL;
    v22 = v12;
    v23 = NextTickDueTime;
    v24 = v5;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07080,
               (unsigned __int8 *)byte_140047FB1,
               0LL,
               0LL,
               8u,
               &v25);
  }
  if ( v2 )
    *v2 = NextTickDueTime;
  return result;
}
