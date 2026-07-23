/*
 * XREFs of KeInitializeClockOtherProcessors @ 0x140B5950C
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     KiSetPendingTick @ 0x140318374 (KiSetPendingTick.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiGetClockTimerState @ 0x1404F51A4 (KiGetClockTimerState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeInitializeClockOtherProcessors(__int64 a1)
{
  __int64 v1; // rcx
  __int64 ClockTimerState; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax

  ClockTimerState = KiGetClockTimerState(a1);
  CurrentIrql = KeGetCurrentIrql();
  v4 = 13LL;
  __writecr8(0xDuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
  guard_dispatch_icall_no_overrides(v1, v4);
  KiSetPendingTick(0);
  guard_dispatch_icall_no_overrides(v6, v5);
  LOBYTE(v7) = 1;
  guard_dispatch_icall_no_overrides(v7, v8);
  guard_dispatch_icall_no_overrides(0LL, KeMaximumIncrement);
  KiSetPendingTick(1);
  *(_DWORD *)(ClockTimerState + 12) = KeMaximumIncrement;
  *(_DWORD *)(ClockTimerState + 8) = 0;
  *(_WORD *)(ClockTimerState + 136) = 1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
