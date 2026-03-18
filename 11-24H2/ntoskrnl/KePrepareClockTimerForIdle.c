/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1405B911C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B94A0 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x14029D018 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     KiShouldRearmClockTimer @ 0x14029F97C (KiShouldRearmClockTimer.c)
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiSetClockTimerDeadlineNoWake @ 0x1404A9EC4 (KiSetClockTimerDeadlineNoWake.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline @ 0x1405B8ECC (Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405BA1B8 (KiCancelClockTimerKTimerDeadlines.c)
 *     KiFindNextTimerDueTime @ 0x1405C4988 (KiFindNextTimerDueTime.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall KePrepareClockTimerForIdle(__int64 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 *v2; // r13
  __int64 NextTickDueTime; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 InterruptTimePrecise; // r12
  unsigned __int64 v9; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  unsigned __int64 v14; // rax
  unsigned __int64 NextTimerDueTime; // rax
  __int64 v16; // rcx
  $87EB86BDBDD92E8BF97779A35E7D9D76 *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdi
  struct _KPRCB *v20; // rdi
  int v21; // r13d
  NTSTATUS result; // eax
  unsigned __int8 ClockOwner; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int8 ClockActive; // [rsp+49h] [rbp-BFh] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  unsigned __int8 *p_ClockOwner; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  unsigned __int8 *p_ClockActive; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  __int64 *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  __int64 *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  unsigned __int64 *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = a1;
  v27 = a1;
  v26 = 0LL;
  NextTickDueTime = -1LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v26);
  v9 = -1LL;
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
    v13 = 2;
    goto LABEL_17;
  }
  v25 = -1LL;
  if ( (unsigned int)Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline(
                       v5,
                       v4,
                       v6,
                       v7) )
  {
    if ( KiSerializeTimerExpiration )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
      goto LABEL_28;
    }
    NextTimerDueTime = KiFindNextTimerDueTime(CurrentPrcb, InterruptTimePrecise, 0LL, &v25);
    v9 = v25;
    if ( NextTimerDueTime < v25 )
      v9 = NextTimerDueTime;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    if ( v9 == -1LL )
    {
      KiCancelClockTimerKTimerDeadlines(CurrentPrcb);
      goto LABEL_28;
    }
  }
  else
  {
    if ( !KiSerializeTimerExpiration )
    {
      v14 = KiFindNextTimerDueTime(CurrentPrcb, InterruptTimePrecise, 0LL, &v25);
      v9 = v25;
      if ( v14 < v25 )
        v9 = v14;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    if ( v9 == -1LL )
      goto LABEL_28;
  }
  if ( v9 > CurrentPrcb->ClockTimerState.ClockTimerEntries[1].DueTime )
  {
    KiSetClockTimer((__int64)CurrentPrcb, InterruptTimePrecise, v9, KeMinimumIncrement, 1, 0, 0);
    goto LABEL_28;
  }
  if ( !(unsigned int)Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline() )
  {
    v13 = 1;
LABEL_17:
    KiSetClockTimerDeadlineNoWake((__int64)CurrentPrcb, v13);
  }
LABEL_28:
  v16 = 0LL;
  v17 = &CurrentPrcb->ClockTimerState.ClockTimerEntries[0].12;
  while ( v16 < 7 )
  {
    if ( (v17->TypeFlags & 3) == 1 )
    {
      if ( KiShouldRearmClockTimer((__int64)CurrentPrcb, InterruptTimePrecise, 0) )
      {
        CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
        KiSetNextClockTickDueTime(InterruptTimePrecise, 0LL, v18);
      }
      NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
      v19 = NextTickDueTime - InterruptTimePrecise;
      goto LABEL_42;
    }
    ++v16;
    v17 += 16;
  }
  v20 = KeGetCurrentPrcb();
  v21 = KiClockTimerOwner;
  if ( (v20->PendingTickFlags & 1) != 0 )
  {
    guard_dispatch_icall_no_overrides(v16, v17, v11, v12);
    v20->ClockTimerState.ClockActive = 0;
    v20->PendingTickFlags &= ~1u;
  }
  if ( v20->Number == v21 )
    ++dword_140F21764;
  if ( v20->ClockOwner )
    v20->ClockOwner = 0;
  v2 = v27;
  v19 = -1LL;
LABEL_42:
  CurrentPrcb->ClockTimerState.ClockArmedForIdle = 1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (unsigned int)dword_140E070B8 > 5 )
  {
    v28 = InterruptTimePrecise;
    v34 = 8LL;
    v33 = &v28;
    ClockOwner = CurrentPrcb->ClockOwner;
    v40 = 8LL;
    p_ClockOwner = &ClockOwner;
    ClockActive = CurrentPrcb->ClockTimerState.ClockActive;
    p_ClockActive = &ClockActive;
    v39 = &v29;
    v41 = &v30;
    v43 = &v31;
    v42 = 8LL;
    v44 = 8LL;
    v36 = 1LL;
    v38 = 1LL;
    v29 = v19;
    v30 = NextTickDueTime;
    v31 = v9;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E070B8,
               (unsigned __int8 *)word_140047A42,
               0LL,
               0LL,
               8u,
               &v32);
  }
  if ( v2 )
    *v2 = NextTickDueTime;
  return result;
}
