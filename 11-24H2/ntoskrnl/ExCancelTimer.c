/*
 * XREFs of ExCancelTimer @ 0x1403AF1B0
 * Callers:
 *     EtwpUpdatePeriodicCaptureState @ 0x1407ADBA0 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpStopLoggerInstance @ 0x1409D3C74 (EtwpStopLoggerInstance.c)
 *     PnpWatchdogTimerPause @ 0x1409ED8EC (PnpWatchdogTimerPause.c)
 *     WdtpCancelTimer @ 0x1409ED9F0 (WdtpCancelTimer.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1403AF158 (ExpCheckForFreedEnhancedTimer.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
