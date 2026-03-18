/*
 * XREFs of PopClearShutdownMarker @ 0x1406F0324
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

void PopClearShutdownMarker()
{
  PopBsdShutdownInProgress = 0;
}
