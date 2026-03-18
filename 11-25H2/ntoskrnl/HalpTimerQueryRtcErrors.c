/*
 * XREFs of HalpTimerQueryRtcErrors @ 0x140539520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpTimerQueryRtcErrors()
{
  return HalpTimerRtcErrorCode & 0x1F;
}
