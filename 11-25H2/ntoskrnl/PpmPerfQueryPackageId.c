/*
 * XREFs of PpmPerfQueryPackageId @ 0x1405CE550
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 36392);
}
