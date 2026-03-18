/*
 * XREFs of KeSuspendClockTimerSafe @ 0x1405B6188
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140469354 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140B44710 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x140B44B74 (PnprQuiesceProcessors.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KeSuspendClockTimerSafe()
{
  __int64 v0; // rcx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *v2; // rdi
  int v3; // ebp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  int v6; // esi

  if ( ObGetCurrentIrql() >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (unsigned int)KiClockState;
    v6 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      result = guard_dispatch_icall_no_overrides(v0);
      CurrentPrcb->ClockTimerState.ClockActive = 0;
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v6 )
      ++dword_140F20984;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xDuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
    v2 = KeGetCurrentPrcb();
    v3 = KiClockTimerOwner;
    if ( (v2->PendingTickFlags & 1) != 0 )
    {
      guard_dispatch_icall_no_overrides(v0);
      v2->ClockTimerState.ClockActive = 0;
      v2->PendingTickFlags &= ~1u;
    }
    if ( v2->Number == v3 )
      ++dword_140F20984;
    if ( v2->ClockOwner )
      v2->ClockOwner = 0;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
