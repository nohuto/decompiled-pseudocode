/*
 * XREFs of KeInitializeClockOtherProcessors @ 0x140B474EC
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     KiSetPendingTick @ 0x140277258 (KiSetPendingTick.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiGetClockTimerState @ 0x1404F6178 (KiGetClockTimerState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeInitializeClockOtherProcessors(__int64 a1)
{
  __int64 v1; // rcx
  __int64 ClockTimerState; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax

  ClockTimerState = KiGetClockTimerState(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
  guard_dispatch_icall_no_overrides(v1);
  KiSetPendingTick(0);
  guard_dispatch_icall_no_overrides(v4);
  LOBYTE(v5) = 1;
  guard_dispatch_icall_no_overrides(v5);
  guard_dispatch_icall_no_overrides(0LL);
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
