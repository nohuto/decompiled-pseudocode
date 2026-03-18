/*
 * XREFs of ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CFE30
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C1560 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6560 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800C6BC0 (-ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800CE960 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C84C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBoundsForOcclusion@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C2890 (-GetBoundsForOcclusion@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?GetBoundsForOcclusion@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D3660 (-GetBoundsForOcclusion@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::GetTightBounds(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // r9
  __int64 v6; // rax
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  __int64 result; // rax
  __int64 v11; // rcx
  float *v12; // r10
  __int64 v13; // r11
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  struct D2D_RECT_F *v17; // r10
  float *v18; // r11
  float top; // xmm2_4
  float right; // xmm3_4
  float v21; // xmm4_4
  float bottom; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  float x; // xmm0_4
  float y; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  unsigned __int64 v30; // rax
  FLOAT *v31; // r10
  struct D2D_POINT_2F v32[4]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(int **)(a1 + 16);
  v6 = *v3;
  if ( !(_DWORD)v6 )
  {
    result = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)a2 = 0LL;
    return result;
  }
  v7 = v3[3];
  v8 = v3[2];
  v9 = v3[2 * v6 + 1];
  *(float *)a2 = (float)v3[1];
  *(float *)(a2 + 4) = (float)v7;
  *(float *)(a2 + 8) = (float)v8;
  *(float *)(a2 + 12) = (float)v9;
  if ( !a3 || (unsigned __int8)CMILMatrix::IsIdentity<0>(a3) )
    return 0LL;
  if ( (char)(4 * *(_BYTE *)(v13 + 64)) >> 6 != 1 )
  {
    if ( (char)(4 * *(_BYTE *)(v13 + 64)) >> 6 < 0 )
    {
LABEL_8:
      v14 = v12[1];
      *v12 = *v12 + *(float *)(v13 + 48);
      v15 = v12[2];
      v12[1] = v14 + *(float *)(v13 + 52);
      v16 = v12[3];
      v12[2] = v15 + *(float *)(v13 + 48);
      v12[3] = v16 + *(float *)(v13 + 52);
      return 0LL;
    }
    if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v11)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v13 - 1.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v13 + 20) - 1.0) & _xmm) < 0.000081380211 )
    {
      *(_BYTE *)(v13 + 64) |= 0x30u;
      goto LABEL_8;
    }
    *(_BYTE *)(v13 + 64) &= ~0x20u;
    *(_BYTE *)(v13 + 64) |= 0x10u;
  }
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v13) )
  {
    top = v17->top;
    right = v17->right;
    v21 = (float)(v17->left * *v18) + v18[12];
    bottom = v17->bottom;
    v17->left = v21;
    v23 = (float)(top * v18[5]) + v18[13];
    v17->top = v23;
    v24 = (float)(right * *v18) + v18[12];
    v17->right = v24;
    v25 = (float)(bottom * v18[5]) + v18[13];
    v17->bottom = v25;
    if ( *v18 > 0.0 && v18[5] > 0.0 )
      return 0LL;
    if ( v21 > v24 )
    {
      v17->left = v24;
      v17->right = v21;
    }
    result = 0LL;
    if ( v23 > v25 )
    {
      v17->top = v25;
      v17->bottom = v23;
    }
  }
  else
  {
    CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v18, v17, v32);
    x = v32[0].x;
    v30 = 1LL;
    y = v32[0].y;
    v28 = v32[0].x;
    *v31 = v32[0].x;
    v29 = y;
    v31[1] = y;
    v31[2] = v28;
    v31[3] = y;
    do
    {
      x = fminf(x, v32[v30].x);
      *v31 = x;
      y = fminf(y, v32[v30].y);
      v31[1] = y;
      v28 = fmaxf(v28, v32[v30].x);
      v31[2] = v28;
      v29 = fmaxf(v29, v32[v30++].y);
      v31[3] = v29;
    }
    while ( v30 < 4 );
    return 0LL;
  }
  return result;
}
