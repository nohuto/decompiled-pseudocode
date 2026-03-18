/*
 * XREFs of PpmPerfQueryPhysicalCoreId @ 0x1405D2F10
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPhysicalCoreId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 36380);
}
