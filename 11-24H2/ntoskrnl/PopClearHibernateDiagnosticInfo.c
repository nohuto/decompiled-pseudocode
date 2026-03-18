/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x140AB5D08
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140B67B90 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset_0(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
