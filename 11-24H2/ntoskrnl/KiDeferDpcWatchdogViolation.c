/*
 * XREFs of KiDeferDpcWatchdogViolation @ 0x14043FF9C
 * Callers:
 *     KeAccumulateTicks @ 0x1402AAEB0 (KeAccumulateTicks.c)
 * Callees:
 *     KeRelaxTimingConstraints @ 0x1405B18B0 (KeRelaxTimingConstraints.c)
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
