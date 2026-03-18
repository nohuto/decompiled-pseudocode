/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x1404FA574
 * Callers:
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140FC0EC8 != 0;
}
