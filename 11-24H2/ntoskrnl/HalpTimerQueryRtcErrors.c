/*
 * XREFs of HalpTimerQueryRtcErrors @ 0x1405395B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpTimerQueryRtcErrors()
{
  return HalpTimerRtcErrorCode & 0x1F;
}
