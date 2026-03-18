/*
 * XREFs of PpmPerfQueryPackageId @ 0x1405D2E30
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 36392);
}
