/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x140AB0E40
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset_0(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
