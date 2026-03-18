/*
 * XREFs of ?SetBlackedOutForMonitor@CDeviceTextureTarget@@UEAAX_N@Z @ 0x1801FE020
 * Callers:
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x180055BA0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetBlackedOutForMonitor(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this + 52) = a2;
}
