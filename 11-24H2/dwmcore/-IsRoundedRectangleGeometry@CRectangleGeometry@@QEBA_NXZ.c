/*
 * XREFs of ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x1801B1C60
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18013BB14 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRectangleGeometry::IsRoundedRectangleGeometry(CRectangleGeometry *this)
{
  bool result; // al

  result = *((float *)this + 38) > 0.0 && *((float *)this + 39) > 0.0;
  if ( !*((_BYTE *)this + 188)
    && (*((float *)this + 40) > 0.0 && *((float *)this + 41) > 0.0
     || *((float *)this + 44) > 0.0 && *((float *)this + 45) > 0.0
     || *((float *)this + 42) > 0.0 && *((float *)this + 43) > 0.0) )
  {
    return result | 1;
  }
  return result;
}
