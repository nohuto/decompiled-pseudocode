/*
 * XREFs of HalpInterruptIsHvMsiRemappingSupported @ 0x1404A6FBC
 * Callers:
 *     HalpInterruptUnmap @ 0x1406FDA28 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvMsiRemappingSupported()
{
  return qword_140FC0EE8 != 0;
}
