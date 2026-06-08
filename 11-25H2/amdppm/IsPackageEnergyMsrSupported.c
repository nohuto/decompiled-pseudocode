/*
 * XREFs of IsPackageEnergyMsrSupported @ 0x1400222FC
 * Callers:
 *     InitDriver @ 0x140022E14 (InitDriver.c)
 * Callees:
 *     <none>
 */

char IsPackageEnergyMsrSupported()
{
  __readmsr(0xC0010299);
  __readmsr(0xC001029B);
  return 1;
}
