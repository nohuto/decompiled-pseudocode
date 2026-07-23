/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1405B52DC
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1404E92D8 (PpmIdleExecuteTransition.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B5660 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     KiShouldRearmClockTimer @ 0x140276050 (KiShouldRearmClockTimer.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1404F1AE4 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 *     KiSetClockTimerDeadlineNoWake @ 0x1404F3C70 (KiSetClockTimerDeadlineNoWake.c)
 *     Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline @ 0x1405B50A0 (Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405B6394 (KiCancelClockTimerKTimerDeadlines.c)
 *     KiFindNextTimerDueTime @ 0x1405C0638 (KiFindNextTimerDueTime.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v12; // r8
  __int64 v13; // rdi
  struct _KPRCB *v14; // rdi
  int v15; // r13d
  NTSTATUS result; // eax
  unsigned __int8 ClockOwner; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int8 ClockActive; // [rsp+49h] [rbp-BFh] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v21; // [rsp+60h] [rbp-A8h]
  LARGE_INTEGER v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  unsigned __int8 *p_ClockOwner; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  unsigned __int8 *p_ClockActive; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  __int64 *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  unsigned __int64 *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = a1;
  v21 = a1;
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
  v19 = -1LL;
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
           &v19);
    v5 = v19;
    if ( v9 < v19 )
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
             &v19);
      v5 = v19;
      if ( v8 < v19 )
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
        KiSetNextClockTickDueTime(InterruptTimePrecise, 0LL, v12);
      }
      NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
      v13 = NextTickDueTime - InterruptTimePrecise.QuadPart;
      goto LABEL_42;
    }
    ++v10;
    v11 += 16;
  }
  v14 = KeGetCurrentPrcb();
  v15 = KiClockTimerOwner;
  if ( (v14->PendingTickFlags & 1) != 0 )
  {
    guard_dispatch_icall_no_overrides(v10);
    v14->ClockTimerState.ClockActive = 0;
    v14->PendingTickFlags &= ~1u;
  }
  if ( v14->Number == v15 )
    ++dword_140F20984;
  if ( v14->ClockOwner )
    v14->ClockOwner = 0;
  v2 = v21;
  v13 = -1LL;
LABEL_42:
  CurrentPrcb->ClockTimerState.ClockArmedForIdle = 1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v22 = InterruptTimePrecise;
    v28 = 8LL;
    v27 = &v22;
    ClockOwner = CurrentPrcb->ClockOwner;
    v34 = 8LL;
    p_ClockOwner = &ClockOwner;
    ClockActive = CurrentPrcb->ClockTimerState.ClockActive;
    p_ClockActive = &ClockActive;
    v33 = &v23;
    v35 = &v24;
    v37 = &v25;
    v36 = 8LL;
    v38 = 8LL;
    v30 = 1LL;
    v32 = 1LL;
    v23 = v13;
    v24 = NextTickDueTime;
    v25 = v5;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07080,
               (unsigned __int8 *)&dword_140047244,
               0LL,
               0LL,
               8u,
               &v26);
  }
  if ( v2 )
    *v2 = NextTickDueTime;
  return result;
}
