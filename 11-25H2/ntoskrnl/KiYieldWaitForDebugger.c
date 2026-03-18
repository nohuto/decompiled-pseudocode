/*
 * XREFs of KiYieldWaitForDebugger @ 0x1405B0C94
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C13E4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KiCheckForFreezeExecution @ 0x1405AF800 (KiCheckForFreezeExecution.c)
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
