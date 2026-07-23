/*
 * XREFs of ExRealTimeIsUniversal @ 0x1404B21C0
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x140A7BD0C (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
