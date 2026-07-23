/*
 * XREFs of NtYieldExecution @ 0x14027B220
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
