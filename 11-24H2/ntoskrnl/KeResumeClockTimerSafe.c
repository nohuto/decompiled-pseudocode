/*
 * XREFs of KeResumeClockTimerSafe @ 0x1405B9F4C
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140467B1C (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140B54710 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x140B55254 (PnprWakeProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiResumeClockTimer @ 0x1404F5708 (KiResumeClockTimer.c)
 */

char KeResumeClockTimerSafe()
{
  unsigned __int8 EffectiveIrql; // al
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // bl
  char result; // al

  EffectiveIrql = KeGetEffectiveIrql();
  v4 = 13LL;
  if ( EffectiveIrql >= 0xDu )
    return KiResumeClockTimer(v1, 13LL, v2, v3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
  KiResumeClockTimer(v1, v4, v2, v3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
