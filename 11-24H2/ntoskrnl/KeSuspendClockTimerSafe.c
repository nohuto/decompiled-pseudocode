/*
 * XREFs of KeSuspendClockTimerSafe @ 0x1405B75DC
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x14045F638 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140B56760 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x140B56BC4 (PnprQuiesceProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeSuspendClockTimerSafe(__int64 a1, __int64 a2)
{
  unsigned __int8 EffectiveIrql; // al
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *v6; // rdi
  int v7; // ebp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  int v10; // esi

  EffectiveIrql = KeGetEffectiveIrql(a1, a2);
  v4 = 13LL;
  if ( EffectiveIrql >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (unsigned int)KiClockState;
    v10 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      result = guard_dispatch_icall_no_overrides(v3, 13LL);
      CurrentPrcb->ClockTimerState.ClockActive = 0;
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v10 )
      ++dword_140F21424;
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
      guard_dispatch_icall_no_overrides(v3, v4);
      v6->ClockTimerState.ClockActive = 0;
      v6->PendingTickFlags &= ~1u;
    }
    if ( v6->Number == v7 )
      ++dword_140F21424;
    if ( v6->ClockOwner )
      v6->ClockOwner = 0;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
