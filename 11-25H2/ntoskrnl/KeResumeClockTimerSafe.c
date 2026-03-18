/*
 * XREFs of KeResumeClockTimerSafe @ 0x1405B6128
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140469354 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140B44710 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x140B45254 (PnprWakeProcessors.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiResumeClockTimer @ 0x1404F2E04 (KiResumeClockTimer.c)
 */

unsigned __int8 KeResumeClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // al
  __int64 v1; // rcx
  __int64 v2; // rdx
  unsigned __int8 v3; // bl
  unsigned __int8 result; // al

  CurrentIrql = ObGetCurrentIrql();
  v2 = 13LL;
  if ( CurrentIrql >= 0xDu )
    return KiResumeClockTimer(v1, 13LL);
  v3 = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v3, 13);
  KiResumeClockTimer(v1, v2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  result = v3;
  __writecr8(v3);
  return result;
}
