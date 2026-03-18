/*
 * XREFs of ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0
 * Callers:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x18006FB54 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800737F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009D528 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A9F60 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800C6240 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800C6BC0 (-ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CFE30 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x1800D11F0 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F4D78 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800FACC0 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801245B0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x180128888 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180176590 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18025D8A0 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsIdentity<0>(__int64 a1)
{
  char v1; // dl
  char v2; // r8
  char v3; // al
  char v5; // r8
  char v6; // dl
  char v7; // al
  char v8; // dl
  char v9; // dl

  v1 = *(_BYTE *)(a1 + 64);
  if ( (char)(v1 << 6) >> 6 == 1 )
    return 0;
  if ( (char)(v1 << 6) >> 6 != 0xFE )
  {
    v2 = *(_BYTE *)(a1 + 65);
    if ( (char)(16 * v2) >> 6 != 1 )
    {
      if ( (char)(16 * v2) >> 6 != 0xFE )
      {
        if ( (char)(4 * v2) >> 6 == 1 )
          return 0;
        if ( (char)(4 * v2) >> 6 == 0xFE )
        {
          if ( (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) != 0.0 )
            return 0;
        }
        else
        {
          if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                             + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                     + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) == 1.0 )
          {
            v3 = 1;
            *(_BYTE *)(a1 + 65) = v2 & 0xCF ^ 0x20;
          }
          else
          {
            v3 = 0;
          }
          if ( ((unsigned __int8)v3 & ((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) == 0.0)) == 0 )
            return 0;
        }
        if ( *(float *)(a1 + 32) != 0.0 || *(float *)(a1 + 36) != 0.0 )
          return 0;
        *(_BYTE *)(a1 + 65) = *(_BYTE *)(a1 + 65) & 0xF3 ^ 8;
      }
      if ( (char)(16 * v1) >> 6 != 1 )
      {
        if ( (char)(16 * v1) >> 6 != 0xFE )
        {
          v5 = *(_BYTE *)(a1 + 65);
          if ( (char)(4 * v5) >> 6 == 1 )
            return 0;
          if ( (char)(4 * v5) >> 6 != 0xFE )
          {
            if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                               + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                       + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) != 1.0 )
              return 0;
            *(_BYTE *)(a1 + 65) = v5 & 0xCF ^ 0x20;
          }
          if ( *(float *)(a1 + 8) != 0.0 || *(float *)(a1 + 24) != 0.0 )
            return 0;
          *(_BYTE *)(a1 + 64) = v1 & 0xF3 ^ 8;
        }
        v6 = *(_BYTE *)(a1 + 64);
        v7 = (char)(4 * v6) >> 6;
        if ( v7 != 1 )
        {
          if ( v7 >= 0 || v7 != -2 )
          {
            v8 = v6 >> 6;
            if ( v8 > 0 )
              return 0;
            if ( v8 >= 0 || v8 != -2 )
            {
              v9 = *(_BYTE *)(a1 + 65);
              if ( (char)(4 * v9) >> 6 == 1 )
                return 0;
              if ( (char)(4 * v9) >> 6 != 0xFE )
              {
                if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                   + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                           + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) != 1.0 )
                  return 0;
                *(_BYTE *)(a1 + 65) = v9 & 0xCF ^ 0x20;
              }
              if ( *(float *)(a1 + 4) != 0.0 || *(float *)(a1 + 16) != 0.0 )
                return 0;
              *(_BYTE *)(a1 + 64) = *(_BYTE *)(a1 + 64) & 0x3F | 0x80;
            }
            if ( *(float *)a1 != 1.0 || *(float *)(a1 + 20) != 1.0 )
              return 0;
            *(_BYTE *)(a1 + 64) = *(_BYTE *)(a1 + 64) & 0xCF ^ 0x20;
          }
          if ( *(float *)(a1 + 40) == 1.0
            && *(float *)(a1 + 48) == 0.0
            && *(float *)(a1 + 52) == 0.0
            && *(float *)(a1 + 56) == 0.0 )
          {
            *(_BYTE *)(a1 + 64) = *(_BYTE *)(a1 + 64) & 0xFC ^ 2;
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return 1;
}
