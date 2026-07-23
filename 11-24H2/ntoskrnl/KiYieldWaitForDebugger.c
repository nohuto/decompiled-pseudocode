/*
 * XREFs of KiYieldWaitForDebugger @ 0x1405B15C4
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KiCheckForFreezeExecution @ 0x1405B0100 (KiCheckForFreezeExecution.c)
 */

void __noreturn KiYieldWaitForDebugger()
{
  while ( 1 )
  {
    if ( KeGetPcr()->Prcb.CombinedNmiMceActive )
      KiCheckForFreezeExecution(0LL);
    _mm_pause();
  }
}
