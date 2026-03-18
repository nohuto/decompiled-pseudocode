/*
 * XREFs of PpmPerfQueryPhysicalCoreId @ 0x1405CE630
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPhysicalCoreId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 36380);
}
