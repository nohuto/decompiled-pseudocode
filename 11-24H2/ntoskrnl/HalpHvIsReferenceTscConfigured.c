/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x1404F7E54
 * Callers:
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140FC1128 != 0;
}
