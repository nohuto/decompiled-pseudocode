/*
 * XREFs of KeQueryTimerDueTime @ 0x14048EAC4
 * Callers:
 *     ExGetWakeTimerList @ 0x1404C1614 (ExGetWakeTimerList.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405B7D10 (KiGetNextTimerExpirationDueTime.c)
 *     NtQueryTimer @ 0x140A4AB50 (NtQueryTimer.c)
 *     ExGetNextWakeTime @ 0x140B5EEBC (ExGetNextWakeTime.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryTimerDueTime(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rdx

  v1 = a1;
  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v1);
  if ( (*(_BYTE *)(v1 + 3) & 0x40) != 0 )
    v2 = *(_QWORD *)(v1 + 24);
  _InterlockedAnd((volatile signed __int32 *)v1, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(CurrentIrql);
  return v2;
}
