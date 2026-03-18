/*
 * XREFs of ?SetProtected@CDeviceTextureTarget@@UEAAX_N@Z @ 0x1801FCE20
 * Callers:
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x180055BA0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetProtected(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this - 4) = a2;
}
