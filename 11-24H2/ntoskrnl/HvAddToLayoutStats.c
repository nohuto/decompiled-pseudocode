/*
 * XREFs of HvAddToLayoutStats @ 0x14098AF50
 * Callers:
 *     HvCheckHive @ 0x14098A9C0 (HvCheckHive.c)
 *     HvCheckBin @ 0x14098AC00 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
