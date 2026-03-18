/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x1404F80AC
 * Callers:
 *     HalpPostSleepMP @ 0x140B58A3C (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140FC0728 != 0;
}
