/*
 * XREFs of KiRestoreClockTickRate @ 0x140434EB0
 * Callers:
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x1404F3008 (KiResumeClockTimer.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     KiSetPendingTick @ 0x140318374 (KiSetPendingTick.c)
 *     KiShouldRearmClockTimer @ 0x14043516C (KiShouldRearmClockTimer.c)
 *     KiGetClockIntervalOneShot @ 0x14043A160 (KiGetClockIntervalOneShot.c)
 *     KiLogClockIncrementUpdate @ 0x1404523E4 (KiLogClockIncrementUpdate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int8 __fastcall KiRestoreClockTickRate(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int *v4; // r14
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx
  __int64 LastRequestedTimeIncrement; // rax
  bool v10; // zf
  unsigned __int8 result; // al
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int ClockIntervalOneShot; // eax
  int v16; // r8d

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a3;
  v6 = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    LOBYTE(a3) = 1;
    CurrentPrcb->ClockTimerState.ClockArmedForIdle = 0;
    if ( (unsigned __int8)KiShouldRearmClockTimer(CurrentPrcb, v6, a3) )
    {
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiSetNextClockTickDueTime((LARGE_INTEGER)v6, 1u);
    }
    *(_QWORD *)v4 = CurrentPrcb->ClockTimerState.TimeIncrement;
    LastRequestedTimeIncrement = CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement;
    CurrentPrcb->ClockKeepAlive = 1;
    CurrentPrcb->ClockTimerState.ClockActive = 1;
    v10 = KiIrqlFlags == 0;
    *a2 = LastRequestedTimeIncrement;
    if ( !v10 )
    {
      LOBYTE(v8) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v12 = KiClockOwnerOneShotRequestState;
    v13 = (unsigned int)KiLastRequestedTimeIncrement;
    *a2 = (unsigned int)KiLastRequestedTimeIncrement;
    if ( v12 )
    {
      v14 = KiClockOwnerOneShotRequest;
      if ( KiClockOwnerOneShotCorrectiveRequest >= v6
        && KiClockOwnerOneShotCorrectiveRequest < (unsigned __int64)KiClockOwnerOneShotRequest )
      {
        v14 = KiClockOwnerOneShotCorrectiveRequest;
      }
      ClockIntervalOneShot = KiGetClockIntervalOneShot(v14, v6);
      *a2 = ClockIntervalOneShot;
      guard_dispatch_icall_no_overrides(1LL, ClockIntervalOneShot);
      KiLastRequestedTimeIncrement = *(_DWORD *)a2;
      KeTimeIncrement = *v4;
    }
    else
    {
      guard_dispatch_icall_no_overrides(0LL, v13);
    }
    v16 = *(_DWORD *)a2;
    CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = *(_DWORD *)a2;
    CurrentPrcb->ClockTimerState.OneShotState = v12;
    CurrentPrcb->ClockTimerState.TimeIncrement = *v4;
    *(_WORD *)&CurrentPrcb->ClockTimerState.ClockActive = 1;
    KiLogClockIncrementUpdate((_DWORD)CurrentPrcb, v6, v16, *v4, v12 == 1);
    return KiSetPendingTick(1);
  }
  return result;
}
