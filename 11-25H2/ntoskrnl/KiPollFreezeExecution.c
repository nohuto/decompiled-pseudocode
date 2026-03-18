/*
 * XREFs of KiPollFreezeExecution @ 0x1404F8110
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140B5BAB0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
