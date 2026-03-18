/*
 * XREFs of NtGdiGetSystemPaletteUse @ 0x1C02C2DA0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1C0097B90 (GreGetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiGetSystemPaletteUse(HDC a1)
{
  return GreGetSystemPaletteUse(a1);
}
