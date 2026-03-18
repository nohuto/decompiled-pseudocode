/*
 * XREFs of HalCvmDmaEnabled @ 0x1404FB694
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x1409C6A98 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     <none>
 */

char HalCvmDmaEnabled()
{
  return HalpDmaCvmConfiguration;
}
