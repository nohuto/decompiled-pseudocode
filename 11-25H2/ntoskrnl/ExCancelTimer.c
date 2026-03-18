/*
 * XREFs of ExCancelTimer @ 0x14036FA70
 * Callers:
 *     EtwpUpdatePeriodicCaptureState @ 0x14079E37C (EtwpUpdatePeriodicCaptureState.c)
 *     PnpWatchdogTimerPause @ 0x14096E52C (PnpWatchdogTimerPause.c)
 *     WdtpCancelTimer @ 0x14096E630 (WdtpCancelTimer.c)
 *     EtwpStopLoggerInstance @ 0x1409902C0 (EtwpStopLoggerInstance.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x14036FA1C (ExpCheckForFreedEnhancedTimer.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
