/*
 * XREFs of ?IsIntermediate@CDeviceTextureTarget@@UEBA_NXZ @ 0x1801F1DD0
 * Callers:
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x180055BA0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsIntermediate(CDeviceTextureTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 50) )
    return *((_BYTE *)this + 49) == 0;
  return result;
}
