/*
 * XREFs of PpmPerfQueryPackageId @ 0x1405D0550
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 36392);
}
