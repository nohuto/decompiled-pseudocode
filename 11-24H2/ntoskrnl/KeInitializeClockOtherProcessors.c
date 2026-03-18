/*
 * XREFs of KeInitializeClockOtherProcessors @ 0x140B5748C
 * Callers:
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 * Callees:
 *     KiSetPendingTick @ 0x1402A0A04 (KiSetPendingTick.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiGetClockTimerState @ 0x1404F78C4 (KiGetClockTimerState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeInitializeClockOtherProcessors(__int64 a1)
{
  __int64 v1; // rcx
  __int64 ClockTimerState; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  int v16; // r10d
  __int64 result; // rax
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = 0LL;
  ClockTimerState = KiGetClockTimerState(a1);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 13LL;
  __writecr8(0xDuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
  guard_dispatch_icall_no_overrides(v1, v6, v3, v4);
  KiSetPendingTick(0);
  guard_dispatch_icall_no_overrides(v8, v7, v9, v10);
  LOBYTE(v11) = 1;
  guard_dispatch_icall_no_overrides(v11, v12, v13, v14);
  guard_dispatch_icall_no_overrides(0LL, (unsigned int)KeMaximumIncrement, &v18, v15);
  KiSetPendingTick(1);
  v16 = v18;
  *(_DWORD *)(ClockTimerState + 12) = KeMaximumIncrement;
  *(_DWORD *)(ClockTimerState + 8) = v16;
  *(_WORD *)(ClockTimerState + 136) = 1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
