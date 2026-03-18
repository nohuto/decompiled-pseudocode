/*
 * XREFs of ??0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z @ 0x18000BD58
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 */

DwmDbg::DbgString *__fastcall DwmDbg::DbgString::DbgString(DwmDbg::DbgString *this, const struct CMILMatrix *a2)
{
  DwmDbg::DbgString::DbgString(
    this,
    "(%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f)",
    *(float *)a2,
    *((float *)a2 + 1),
    *((float *)a2 + 2),
    *((float *)a2 + 3),
    *((float *)a2 + 4),
    *((float *)a2 + 5),
    *((float *)a2 + 6),
    *((float *)a2 + 7),
    *((float *)a2 + 8),
    *((float *)a2 + 9),
    *((float *)a2 + 10),
    *((float *)a2 + 11),
    *((float *)a2 + 12),
    *((float *)a2 + 13),
    *((float *)a2 + 14),
    *((float *)a2 + 15));
  return this;
}
