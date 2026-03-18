/*
 * XREFs of KiYieldWaitForDebugger @ 0x1405B4640
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KiCheckForFreezeExecution @ 0x1405B3190 (KiCheckForFreezeExecution.c)
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
