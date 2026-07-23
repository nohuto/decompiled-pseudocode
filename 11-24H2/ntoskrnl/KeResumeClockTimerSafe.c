/*
 * XREFs of KeResumeClockTimerSafe @ 0x1405B757C
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x14045F638 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140B56760 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x140B572A4 (PnprWakeProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiResumeClockTimer @ 0x1404F3008 (KiResumeClockTimer.c)
 */

char __fastcall KeResumeClockTimerSafe(__int64 a1, __int64 a2)
{
  unsigned __int8 EffectiveIrql; // al
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // bl
  char result; // al

  EffectiveIrql = KeGetEffectiveIrql(a1, a2);
  v4 = 13LL;
  if ( EffectiveIrql >= 0xDu )
    return KiResumeClockTimer(v3, 13LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
  KiResumeClockTimer(v3, v4);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
