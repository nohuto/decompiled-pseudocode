/*
 * XREFs of CmSetLazyFlushState @ 0x140A9AAA0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     CmpEnableLazyFlush @ 0x1404ABD84 (CmpEnableLazyFlush.c)
 *     CmpDisableLazyFlush @ 0x1404F8550 (CmpDisableLazyFlush.c)
 */

void __fastcall CmSetLazyFlushState(char a1)
{
  int v1; // eax

  if ( a1 )
  {
    CmpDoIdleProcessing = CmpPrevIdleProcessingState;
    if ( CmpEnableLazyFlushTimerInitialized )
    {
      CmpDisableLazyFlush(1u);
      KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -900000000LL, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
    }
    CmpEnableLazyFlush(4);
  }
  else
  {
    CmpDisableLazyFlush(4u);
    if ( CmpEnableLazyFlushTimerInitialized && (CmpHoldLazyFlush & 1) != 0 )
    {
      if ( KeCancelTimer(&CmpEnableLazyFlushTimer) )
        CmpEnableLazyFlush(1);
    }
    v1 = CmpDoIdleProcessing;
    CmpDoIdleProcessing = 0;
    CmpPrevIdleProcessingState = v1;
  }
}
