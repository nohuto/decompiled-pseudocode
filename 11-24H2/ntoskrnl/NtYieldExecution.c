/*
 * XREFs of NtYieldExecution @ 0x14033C4F0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 */

void __noreturn NtYieldExecution()
{
  KeYieldExecution(0LL);
}
