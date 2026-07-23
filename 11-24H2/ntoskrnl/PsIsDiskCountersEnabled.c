/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1405E2860
 * Callers:
 *     ExpPcwHostCallback @ 0x1407C1730 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
