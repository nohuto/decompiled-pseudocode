/*
 * XREFs of KiDeferDpcWatchdogViolation @ 0x14044A274
 * Callers:
 *     KeAccumulateTicks @ 0x140273800 (KeAccumulateTicks.c)
 * Callees:
 *     KeRelaxTimingConstraints @ 0x1405B0F80 (KeRelaxTimingConstraints.c)
 */

signed __int64 KiDeferDpcWatchdogViolation()
{
  struct _KPRCB *CurrentPrcb; // rbx
  signed __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = _InterlockedCompareExchange64(&KiDeferredDpcWatchdogActivePrcb, (signed __int64)CurrentPrcb, 0LL);
  if ( !result )
  {
    KeRelaxTimingConstraints(1LL);
    LODWORD(KiSavedDpcTimeCount) = CurrentPrcb->DpcTimeCount;
    result = CurrentPrcb->DpcTimeLimitTicks;
    LODWORD(KiSavedDpcTimeLimitTicks) = CurrentPrcb->DpcTimeLimitTicks;
  }
  return result;
}
