/*
 * XREFs of NtGdiGetSystemPaletteUse @ 0x140337D50
 * Callers:
 *     <none>
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1401FA99C (GreGetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiGetSystemPaletteUse(HDC a1)
{
  return GreGetSystemPaletteUse(a1);
}
