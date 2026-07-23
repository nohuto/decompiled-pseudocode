/*
 * XREFs of HalpInterruptIsHvMsiRemappingSupported @ 0x1404A191C
 * Callers:
 *     HalpInterruptUnmap @ 0x1406FB668 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvMsiRemappingSupported()
{
  return qword_140FC1148 != 0;
}
