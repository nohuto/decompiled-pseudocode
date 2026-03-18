/*
 * XREFs of ?SetBlackedOutForReadback@CDeviceTextureTarget@@UEAAX_N@Z @ 0x180209700
 * Callers:
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x1800D85F0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetBlackedOutForReadback(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this + 51) = a2;
}
