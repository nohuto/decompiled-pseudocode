/*
 * XREFs of HalpInterruptIsHvMsiRemappingSupported @ 0x1404A6514
 * Callers:
 *     HalpInterruptUnmap @ 0x1406F1C38 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvMsiRemappingSupported()
{
  return qword_140FC0748 != 0;
}
