/*
 * XREFs of ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1801E7028
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x180073B4C (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180270130 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MILMatrix3x2::SetInverse(MILMatrix3x2 *this, const struct MILMatrix3x2 *a2)
{
  float v2; // xmm3_4

  v2 = 1.0 / (float)((float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 1) * *((float *)a2 + 2)));
  *(float *)this = *((float *)a2 + 3) * v2;
  *((float *)this + 1) = COERCE_FLOAT(*((_DWORD *)a2 + 1) ^ _xmm) * v2;
  *((float *)this + 2) = COERCE_FLOAT(*((_DWORD *)a2 + 2) ^ _xmm) * v2;
  *((float *)this + 3) = v2 * *(float *)a2;
  *((float *)this + 4) = (float)((float)(*((float *)a2 + 2) * *((float *)a2 + 5))
                               - (float)(*((float *)a2 + 3) * *((float *)a2 + 4)))
                       * v2;
  *((float *)this + 5) = (float)((float)(*((float *)a2 + 1) * *((float *)a2 + 4))
                               - (float)(*(float *)a2 * *((float *)a2 + 5)))
                       * v2;
}
