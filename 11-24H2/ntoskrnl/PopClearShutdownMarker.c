/*
 * XREFs of PopClearShutdownMarker @ 0x1406FC104
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140B67B90 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

void PopClearShutdownMarker()
{
  PopBsdShutdownInProgress = 0;
}
