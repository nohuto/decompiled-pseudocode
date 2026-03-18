/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1405E5340
 * Callers:
 *     ExpPcwHostCallback @ 0x1407C12E0 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
