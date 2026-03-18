/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x14057F074
 * Callers:
 *     PpmHvEnableQosEnlightenment @ 0x140AC46CC (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
