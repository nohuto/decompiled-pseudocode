/*
 * XREFs of ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800B2FF0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x1800B17D0 (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRoundedRectangleGeometryData::HasIntersectingCorners(CRoundedRectangleGeometryData *this)
{
  float v1; // xmm1_4
  float v2; // xmm2_4
  bool v3; // cc

  if ( *((_BYTE *)this + 52) )
  {
    if ( (float)(*((float *)this + 4) + *((float *)this + 4)) > (float)((float)(*(float *)this + *((float *)this + 2))
                                                                      - *(float *)this) )
      return 1;
    v3 = (float)(*((float *)this + 5) + *((float *)this + 5)) <= (float)((float)(*((float *)this + 1)
                                                                               + *((float *)this + 3))
                                                                       - *((float *)this + 1));
  }
  else
  {
    v1 = *((float *)this + 2) - *(float *)this;
    if ( (float)(*((float *)this + 6) + *((float *)this + 4)) > v1 )
      return 1;
    if ( (float)(*((float *)this + 10) + *((float *)this + 8)) > v1 )
      return 1;
    v2 = *((float *)this + 3) - *((float *)this + 1);
    if ( (float)(*((float *)this + 11) + *((float *)this + 5)) > v2 )
      return 1;
    v3 = (float)(*((float *)this + 9) + *((float *)this + 7)) <= v2;
  }
  return !v3;
}
