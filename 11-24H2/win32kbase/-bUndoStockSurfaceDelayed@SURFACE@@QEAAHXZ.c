/*
 * XREFs of ?bUndoStockSurfaceDelayed@SURFACE@@QEAAHXZ @ 0x1400EDAD0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bUndoStockSurfaceDelayed(SURFACE *this)
{
  return (*(_DWORD *)this & 0x800000) != 0 && _bittest16((const signed __int16 *)this + 51, 0xAu);
}
