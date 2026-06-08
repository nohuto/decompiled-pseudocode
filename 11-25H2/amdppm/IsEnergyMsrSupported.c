/*
 * XREFs of IsEnergyMsrSupported @ 0x1400222B8
 * Callers:
 *     InitEnergyCountersOnCurrentProcessor @ 0x140022170 (InitEnergyCountersOnCurrentProcessor.c)
 *     InitDriver @ 0x140022E14 (InitDriver.c)
 * Callees:
 *     <none>
 */

char IsEnergyMsrSupported()
{
  __readmsr(0xC0010299);
  __readmsr(0xC001029A);
  return 1;
}
