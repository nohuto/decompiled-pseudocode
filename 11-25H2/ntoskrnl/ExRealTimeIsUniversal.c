/*
 * XREFs of ExRealTimeIsUniversal @ 0x1404B8180
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x140A7DC2C (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
