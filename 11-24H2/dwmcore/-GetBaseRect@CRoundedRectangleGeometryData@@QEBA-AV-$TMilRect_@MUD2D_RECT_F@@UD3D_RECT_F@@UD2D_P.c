/*
 * XREFs of ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180075110
 * Callers:
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x18001C710 (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801AD040 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetRectangles@CRoundedRectangleShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180259120 (-GetRectangles@CRoundedRectangleShape@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z @ 0x180266160 (-FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRoundedRectangleGeometryData::GetBaseRect(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4

  if ( *(_BYTE *)(a1 + 52) )
  {
    v3 = *(float *)(a1 + 4);
    result = a2;
    v4 = *(float *)a1;
    *(_DWORD *)a2 = *(_DWORD *)a1;
    v5 = v4 + *(float *)(a1 + 8);
    *(float *)(a2 + 4) = v3;
    v6 = v3 + *(float *)(a1 + 12);
    *(float *)(a2 + 8) = v5;
    *(float *)(a2 + 12) = v6;
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
    return a2;
  }
  return result;
}
