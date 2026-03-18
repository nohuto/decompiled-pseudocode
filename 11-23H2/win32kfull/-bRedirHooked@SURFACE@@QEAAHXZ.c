/*
 * XREFs of ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1C00712E4
 * Callers:
 *     ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C000B5C0 (-SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ.c)
 *     EngDrawStream @ 0x1C00710A0 (EngDrawStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bRedirHooked(SURFACE *this)
{
  unsigned int v1; // edx

  v1 = 1;
  if ( (*((_DWORD *)this + 29) & 1) != 0 || (*((_DWORD *)this + 28) & 0x800) == 0 || *((_WORD *)this + 50) != 3 )
    return 0;
  return v1;
}
