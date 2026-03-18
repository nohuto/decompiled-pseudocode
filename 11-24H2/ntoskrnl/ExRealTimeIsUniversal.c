/*
 * XREFs of ExRealTimeIsUniversal @ 0x1404B79E0
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x140A812AC (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
