/*
 * XREFs of ExCancelTimer @ 0x1403C05F0
 * Callers:
 *     EtwpUpdatePeriodicCaptureState @ 0x1407AD74C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpStopLoggerInstance @ 0x1409D9164 (EtwpStopLoggerInstance.c)
 *     PnpWatchdogTimerPause @ 0x1409F001C (PnpWatchdogTimerPause.c)
 *     WdtpCancelTimer @ 0x1409F0120 (WdtpCancelTimer.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1403C0598 (ExpCheckForFreedEnhancedTimer.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
