/*
 * XREFs of ?SetBlackedOutForMonitor@CDeviceTextureTarget@@UEAAX_N@Z @ 0x18020A9C0
 * Callers:
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x1800D85F0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetBlackedOutForMonitor(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this + 52) = a2;
}
