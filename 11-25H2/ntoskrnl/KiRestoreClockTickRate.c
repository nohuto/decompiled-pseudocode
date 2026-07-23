/*
 * XREFs of KiRestoreClockTickRate @ 0x1404C7BF0
 * Callers:
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x1404F2E04 (KiResumeClockTimer.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B5B04 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiShouldRearmClockTimer @ 0x140276050 (KiShouldRearmClockTimer.c)
 *     KiSetPendingTick @ 0x140277258 (KiSetPendingTick.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     KiGetClockIntervalOneShot @ 0x1404435F0 (KiGetClockIntervalOneShot.c)
 *     KiLogClockIncrementUpdate @ 0x140464858 (KiLogClockIncrementUpdate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int8 __fastcall KiRestoreClockTickRate(unsigned __int64 a1, _QWORD *a2, int *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 LastRequestedTimeIncrement; // rax
  bool v11; // zf
  unsigned __int8 result; // al
  int v13; // edi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int ClockIntervalOneShot; // eax
  int v17; // r8d

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    CurrentPrcb->ClockTimerState.ClockArmedForIdle = 0;
    if ( KiShouldRearmClockTimer((__int64)CurrentPrcb, (LARGE_INTEGER)v6, 1) )
    {
      LOBYTE(v8) = 1;
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiSetNextClockTickDueTime((LARGE_INTEGER)v6, v8, v9);
    }
    *(_QWORD *)a3 = CurrentPrcb->ClockTimerState.TimeIncrement;
    LastRequestedTimeIncrement = CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement;
    CurrentPrcb->ClockKeepAlive = 1;
    CurrentPrcb->ClockTimerState.ClockActive = 1;
    v11 = KiIrqlFlags == 0;
    *a2 = LastRequestedTimeIncrement;
    if ( !v11 )
    {
      LOBYTE(v8) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v13 = KiClockOwnerOneShotRequestState;
    v14 = (unsigned int)KiLastRequestedTimeIncrement;
    *a2 = (unsigned int)KiLastRequestedTimeIncrement;
    if ( v13 )
    {
      v15 = KiClockOwnerOneShotRequest;
      if ( KiClockOwnerOneShotCorrectiveRequest >= v6
        && KiClockOwnerOneShotCorrectiveRequest < (unsigned __int64)KiClockOwnerOneShotRequest )
      {
        v15 = KiClockOwnerOneShotCorrectiveRequest;
      }
      ClockIntervalOneShot = KiGetClockIntervalOneShot(v15, v6);
      *a2 = ClockIntervalOneShot;
      guard_dispatch_icall_no_overrides(1LL, ClockIntervalOneShot);
      KiLastRequestedTimeIncrement = *(_DWORD *)a2;
      KeTimeIncrement = *a3;
    }
    else
    {
      guard_dispatch_icall_no_overrides(0LL, v14);
    }
    v17 = *(_DWORD *)a2;
    CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = *(_DWORD *)a2;
    CurrentPrcb->ClockTimerState.OneShotState = v13;
    CurrentPrcb->ClockTimerState.TimeIncrement = *a3;
    *(_WORD *)&CurrentPrcb->ClockTimerState.ClockActive = 1;
    KiLogClockIncrementUpdate((__int64)CurrentPrcb, v6, v17, *a3, v13 == 1);
    return KiSetPendingTick(1);
  }
  return result;
}
