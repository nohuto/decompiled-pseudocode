/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x140AAFFD0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140B69CD0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset_0(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
