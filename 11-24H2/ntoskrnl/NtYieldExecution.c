/*
 * XREFs of NtYieldExecution @ 0x14031B9D0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
