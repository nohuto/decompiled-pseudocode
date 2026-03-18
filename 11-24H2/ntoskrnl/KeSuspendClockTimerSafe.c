/*
 * XREFs of KeSuspendClockTimerSafe @ 0x1405B9FAC
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140467B1C (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140B54710 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x140B54B74 (PnprQuiesceProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KeSuspendClockTimerSafe()
{
  unsigned __int8 EffectiveIrql; // al
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *v6; // rdi
  int v7; // ebp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  int v10; // esi

  EffectiveIrql = KeGetEffectiveIrql();
  v4 = 13LL;
  if ( EffectiveIrql >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (unsigned int)KiClockState;
    v10 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      result = guard_dispatch_icall_no_overrides(v1, 13LL, v2, v3);
      CurrentPrcb->ClockTimerState.ClockActive = 0;
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v10 )
      ++dword_140F21764;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xDuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
    v6 = KeGetCurrentPrcb();
    v7 = KiClockTimerOwner;
    if ( (v6->PendingTickFlags & 1) != 0 )
    {
      guard_dispatch_icall_no_overrides(v1, v4, v2, v3);
      v6->ClockTimerState.ClockActive = 0;
      v6->PendingTickFlags &= ~1u;
    }
    if ( v6->Number == v7 )
      ++dword_140F21764;
    if ( v6->ClockOwner )
      v6->ClockOwner = 0;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
