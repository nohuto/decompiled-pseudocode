/*
 * XREFs of ?SetBlackedOutForReadback@CDeviceTextureTarget@@UEAAX_N@Z @ 0x1801FCCD0
 * Callers:
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x180055BA0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetBlackedOutForReadback(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this + 51) = a2;
}
