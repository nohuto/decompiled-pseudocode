/*
 * XREFs of KeQueryTimerDueTime @ 0x14048E920
 * Callers:
 *     ExGetWakeTimerList @ 0x1404BFC7C (ExGetWakeTimerList.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405BBBB0 (KiGetNextTimerExpirationDueTime.c)
 *     NtQueryTimer @ 0x140A4D160 (NtQueryTimer.c)
 *     ExGetNextWakeTime @ 0x140B6DF68 (ExGetNextWakeTime.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
