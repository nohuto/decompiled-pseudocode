/*
 * XREFs of KeQueryTimerDueTime @ 0x140488D50
 * Callers:
 *     ExGetWakeTimerList @ 0x1404BB1AC (ExGetWakeTimerList.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405B91E0 (KiGetNextTimerExpirationDueTime.c)
 *     NtQueryTimer @ 0x140A43CF0 (NtQueryTimer.c)
 *     ExGetNextWakeTime @ 0x140B6FA08 (ExGetNextWakeTime.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
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
