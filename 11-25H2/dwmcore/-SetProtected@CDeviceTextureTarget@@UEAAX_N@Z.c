/*
 * XREFs of ?SetProtected@CDeviceTextureTarget@@UEAAX_N@Z @ 0x180209850
 * Callers:
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x1800D85F0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetProtected(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this - 4) = a2;
}
