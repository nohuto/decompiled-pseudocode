/*
 * XREFs of HalCvmDmaEnabled @ 0x1404F8F58
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x140981740 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     <none>
 */

char HalCvmDmaEnabled()
{
  return HalpDmaCvmConfiguration;
}
