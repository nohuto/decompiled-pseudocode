/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x14057FBA4
 * Callers:
 *     PpmHvEnableQosEnlightenment @ 0x140AC9098 (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
