/*
 * XREFs of ?IsDisplayTarget@CDeviceTextureTarget@@UEBA_NXZ @ 0x180073B40
 * Callers:
 *     ?ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ @ 0x180073AE4 (-ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsDisplayTarget(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 33);
}
