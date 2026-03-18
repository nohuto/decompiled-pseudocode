/*
 * XREFs of NtYieldExecution @ 0x14027B220
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 */

void __noreturn NtYieldExecution()
{
  KeYieldExecution(0LL);
}
