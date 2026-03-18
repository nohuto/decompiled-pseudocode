/*
 * XREFs of NtGdiSetSystemPaletteUse @ 0x1C02C4810
 * Callers:
 *     <none>
 * Callees:
 *     GreSetSystemPaletteUse @ 0x1C02D1694 (GreSetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiSetSystemPaletteUse(HDC a1)
{
  return GreSetSystemPaletteUse(a1);
}
