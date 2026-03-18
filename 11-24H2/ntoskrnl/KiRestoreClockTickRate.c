/*
 * XREFs of KiRestoreClockTickRate @ 0x1404C89B0
 * Callers:
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x1404F5708 (KiResumeClockTimer.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B9944 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiShouldRearmClockTimer @ 0x14029F97C (KiShouldRearmClockTimer.c)
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     KiSetPendingTick @ 0x1402A0A04 (KiSetPendingTick.c)
 *     KiGetClockIntervalOneShot @ 0x1404446C0 (KiGetClockIntervalOneShot.c)
 *     KiLogClockIncrementUpdate @ 0x14045D324 (KiLogClockIncrementUpdate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int8 __fastcall KiRestoreClockTickRate(unsigned __int64 a1, _QWORD *a2, int *a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 LastRequestedTimeIncrement; // rax
  bool v12; // zf
  unsigned __int8 result; // al
  int v14; // edi
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int ClockIntervalOneShot; // eax
  __int64 v18; // r9
  int v19; // r8d

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    CurrentPrcb->ClockTimerState.ClockArmedForIdle = 0;
    if ( KiShouldRearmClockTimer((__int64)CurrentPrcb, v7, 1) )
    {
      LOBYTE(v9) = 1;
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiSetNextClockTickDueTime(v7, v9, v10);
    }
    *(_QWORD *)a3 = CurrentPrcb->ClockTimerState.TimeIncrement;
    LastRequestedTimeIncrement = CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement;
    CurrentPrcb->ClockKeepAlive = 1;
    CurrentPrcb->ClockTimerState.ClockActive = 1;
    v12 = KiIrqlFlags == 0;
    *a2 = LastRequestedTimeIncrement;
    if ( !v12 )
    {
      LOBYTE(v9) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v14 = KiClockOwnerOneShotRequestState;
    v15 = (unsigned int)KiLastRequestedTimeIncrement;
    *a2 = (unsigned int)KiLastRequestedTimeIncrement;
    if ( v14 )
    {
      v16 = KiClockOwnerOneShotRequest;
      if ( KiClockOwnerOneShotCorrectiveRequest >= v7
        && KiClockOwnerOneShotCorrectiveRequest < (unsigned __int64)KiClockOwnerOneShotRequest )
      {
        v16 = KiClockOwnerOneShotCorrectiveRequest;
      }
      ClockIntervalOneShot = KiGetClockIntervalOneShot(v16, v7);
      *a2 = ClockIntervalOneShot;
      guard_dispatch_icall_no_overrides(1LL, ClockIntervalOneShot, a3, v18);
      KiLastRequestedTimeIncrement = *(_DWORD *)a2;
      KeTimeIncrement = *a3;
    }
    else
    {
      guard_dispatch_icall_no_overrides(0LL, v15, a3, a4);
    }
    v19 = *(_DWORD *)a2;
    CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = *(_DWORD *)a2;
    CurrentPrcb->ClockTimerState.OneShotState = v14;
    CurrentPrcb->ClockTimerState.TimeIncrement = *a3;
    *(_WORD *)&CurrentPrcb->ClockTimerState.ClockActive = 1;
    KiLogClockIncrementUpdate((__int64)CurrentPrcb, v7, v19, *a3, v14 == 1);
    return KiSetPendingTick(1);
  }
  return result;
}
