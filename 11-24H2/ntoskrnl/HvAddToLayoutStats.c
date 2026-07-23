/*
 * XREFs of HvAddToLayoutStats @ 0x140974640
 * Callers:
 *     HvCheckHive @ 0x1409740B0 (HvCheckHive.c)
 *     HvCheckBin @ 0x1409742F0 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
