/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1405D93A0
 * Callers:
 *     ExpPcwHostCallback @ 0x1407B1B10 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
