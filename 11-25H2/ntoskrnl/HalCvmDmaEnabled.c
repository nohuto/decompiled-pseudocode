/*
 * XREFs of HalCvmDmaEnabled @ 0x1404F8F88
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x1409AD200 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     <none>
 */

char HalCvmDmaEnabled()
{
  return HalpDmaCvmConfiguration;
}
