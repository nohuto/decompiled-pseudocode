/*
 * XREFs of HvAddToLayoutStats @ 0x140995DC0
 * Callers:
 *     HvCheckHive @ 0x140995810 (HvCheckHive.c)
 *     HvCheckBin @ 0x140995A70 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
