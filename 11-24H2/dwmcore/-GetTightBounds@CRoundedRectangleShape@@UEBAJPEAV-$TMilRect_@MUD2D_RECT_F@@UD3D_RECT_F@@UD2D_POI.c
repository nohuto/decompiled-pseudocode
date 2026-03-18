/*
 * XREFs of ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016810 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038420 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800737F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800ABE30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVSubTreeContext@1@PEAVCMILMatrix@@@Z @ 0x1800C28B0 (-ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVSubTreeContext@1.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3BF0 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800C3EE0 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800C6240 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x1800D7C20 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180123CE0 (-GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetTightBounds(CPolygonShape *this, struct D2D_RECT_F *a2, CMILMatrix *a3)
{
  __int64 v3; // rax
  CMILMatrix *v4; // r9
  CPolygonShape *v6; // r10
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  bool v10; // cc
  __int64 v11; // rax
  struct D2D_POINT_2F *v13; // rsi
  __int64 v14; // r9
  int (*v15)(CPathSegmentsShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  int v17; // edi
  int v18; // eax
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  __int64 v23; // rcx
  __int64 v24; // r9
  float right; // xmm1_4
  float bottom; // xmm0_4
  char v27; // cl
  char v28; // dl
  float v29; // xmm1_4
  unsigned int v30; // xmm0_4
  float *v31; // r9
  float top; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38; // xmm5_4
  float x; // xmm0_4
  float y; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  unsigned __int64 v43; // rax
  FLOAT v44; // xmm1_4
  FLOAT v45; // xmm0_4
  FLOAT v46; // xmm1_4
  unsigned int v47; // xmm0_4
  struct ID2D1Geometry *v48[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v49; // [rsp+40h] [rbp-9h] BYREF
  struct D2D_POINT_2F v50[2]; // [rsp+50h] [rbp+7h] BYREF
  unsigned __int64 v51; // [rsp+60h] [rbp+17h]

  v3 = *((_QWORD *)this + 2);
  v4 = a3;
  v6 = this;
  v7 = *(float *)(v3 + 32);
  if ( *(_BYTE *)(v3 + 68) )
  {
    if ( (float)(v7 + v7) > (float)((float)(*(float *)(v3 + 16) + *(float *)(v3 + 24)) - *(float *)(v3 + 16)) )
      goto LABEL_13;
    v10 = (float)(*(float *)(v3 + 36) + *(float *)(v3 + 36)) <= (float)((float)(*(float *)(v3 + 20) + *(float *)(v3 + 28))
                                                                      - *(float *)(v3 + 20));
  }
  else
  {
    v8 = *(float *)(v3 + 24) - *(float *)(v3 + 16);
    if ( (float)(v7 + *(float *)(v3 + 40)) > v8 )
      goto LABEL_13;
    if ( (float)(*(float *)(v3 + 56) + *(float *)(v3 + 48)) > v8 )
      goto LABEL_13;
    v9 = *(float *)(v3 + 28) - *(float *)(v3 + 20);
    if ( (float)(*(float *)(v3 + 60) + *(float *)(v3 + 36)) > v9 )
      goto LABEL_13;
    v10 = (float)(*(float *)(v3 + 52) + *(float *)(v3 + 44)) <= v9;
  }
  if ( !v10 )
    goto LABEL_13;
  if ( !a3 )
    goto LABEL_8;
  v27 = *((_BYTE *)a3 + 64);
  if ( v27 >> 6 == 1 )
  {
LABEL_12:
    if ( (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a3) )
      goto LABEL_8;
LABEL_13:
    v48[0] = 0LL;
    v13 = 0LL;
    v51 = 0LL;
    *(_OWORD *)&v50[0].x = 0LL;
    if ( v4 )
    {
      if ( !CMILMatrix::Is2DAffineOrNaN(v4, (bool)a2) )
        goto LABEL_15;
      v13 = v50;
      v44 = *(float *)(v14 + 4);
      v50[0].x = *(FLOAT *)v14;
      v45 = *(float *)(v14 + 16);
      v50[0].y = v44;
      v46 = *(float *)(v14 + 20);
      v50[1].x = v45;
      v47 = *(_DWORD *)(v14 + 48);
      v50[1].y = v46;
      v51 = __PAIR64__(*(_DWORD *)(v14 + 52), v47);
    }
    v14 = 0LL;
LABEL_15:
    v15 = *(int (**)(CPathSegmentsShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v6 + 24LL);
    if ( v15 == CPathSegmentsShape::GetD2DGeometry )
    {
      D2DGeometry = CPathSegmentsShape::GetD2DGeometry(v6, (const struct CMILMatrix *)v14, v48);
    }
    else if ( v15 == CPolygonShape::GetD2DGeometry )
    {
      D2DGeometry = CPolygonShape::GetD2DGeometry(v6, (const struct CMILMatrix *)v14, v48);
    }
    else
    {
      D2DGeometry = ((__int64 (__fastcall *)(CPolygonShape *, __int64, struct ID2D1Geometry **))v15)(v6, v14, v48);
    }
    v17 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x3F7u, 0LL);
    }
    else
    {
      v49 = 0LL;
      v18 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, struct D2D_POINT_2F *, __int128 *))(*(_QWORD *)v48[0]
                                                                                                 + 32LL))(
              v48[0],
              v13,
              &v49);
      v19 = *(float *)&v49;
      v17 = v18;
      v20 = *((float *)&v49 + 1);
      v21 = *((float *)&v49 + 2);
      v22 = *((float *)&v49 + 3);
      LODWORD(a2->left) = v49;
      a2->top = v20;
      a2->right = v21;
      a2->bottom = v22;
      if ( v21 < v19 || v22 < v20 )
      {
        *(_QWORD *)&a2->right = 0LL;
        *(_QWORD *)&a2->left = 0LL;
      }
    }
    if ( v17 == -2003238895 )
      v17 = -2003304438;
    if ( v48[0] )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v48[0] + 16LL))(v48[0]);
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x6Au, 0LL);
    return 0LL;
  }
  if ( v27 >> 6 < 0 )
    goto LABEL_8;
  v28 = *((_BYTE *)a3 + 65);
  if ( (char)(4 * v28) >> 6 == 1 )
    goto LABEL_36;
  if ( (char)(4 * v28) >> 6 < 0 )
    goto LABEL_35;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a3 + 7) & _xmm) * 61440.0)
                                    + (float)(COERCE_FLOAT(*((_DWORD *)a3 + 3) & _xmm) * 61440.0))
                            + COERCE_FLOAT(*((_DWORD *)a3 + 15) & _xmm))
                    - 1.0) & _xmm) >= 0.000081380211 )
  {
    *((_BYTE *)a3 + 65) = v28 & 0xCF | 0x10;
    *((_BYTE *)a3 + 64) = v27 & 0x3F | 0x40;
    goto LABEL_12;
  }
  *((_BYTE *)a3 + 65) = v28 | 0x30;
LABEL_35:
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 1) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 4) - 0.0) & _xmm) >= 0.000081380211 )
  {
LABEL_36:
    *((_BYTE *)a3 + 64) = v27 & 0x3F | 0x40;
    goto LABEL_12;
  }
  *((_BYTE *)a3 + 64) = v27 | 0xC0;
LABEL_8:
  v11 = *((_QWORD *)v6 + 2);
  if ( *(_BYTE *)(v11 + 68) )
  {
    v29 = *(float *)(v11 + 20);
    LODWORD(v48[0]) = *(_DWORD *)(v11 + 16);
    *(float *)&v30 = *(float *)v48 + *(float *)(v11 + 24);
    *((float *)v48 + 1) = v29;
    v48[1] = (struct ID2D1Geometry *)__PAIR64__(v29 + *(float *)(v11 + 28), v30);
  }
  else
  {
    *(_OWORD *)v48 = *(_OWORD *)(v11 + 16);
  }
  *a2 = *(struct D2D_RECT_F *)v48;
  if ( v4 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(v4) )
  {
    if ( (char)(4 * *(_BYTE *)(v24 + 64)) >> 6 != 1 )
    {
      if ( (char)(4 * *(_BYTE *)(v24 + 64)) >> 6 < 0 )
      {
LABEL_30:
        right = a2->right;
        a2->left = *(float *)(v24 + 48) + a2->left;
        a2->top = *(float *)(v24 + 52) + a2->top;
        bottom = a2->bottom;
        a2->right = right + *(float *)(v24 + 48);
        a2->bottom = bottom + *(float *)(v24 + 52);
        return 0LL;
      }
      if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v23)
        && v38 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v24 - 1.0) & _xmm)
        && v38 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + 20) - 1.0) & _xmm) )
      {
        *(_BYTE *)(v24 + 64) |= 0x30u;
        goto LABEL_30;
      }
      *(_BYTE *)(v24 + 64) = *(_BYTE *)(v24 + 64) & 0xCF | 0x10;
    }
    if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v24) )
    {
      top = a2->top;
      v33 = a2->bottom;
      v34 = (float)(*v31 * a2->left) + v31[12];
      a2->left = v34;
      v35 = (float)(top * v31[5]) + v31[13];
      a2->top = v35;
      v36 = (float)(*v31 * a2->right) + v31[12];
      a2->right = v36;
      v37 = (float)(v33 * v31[5]) + v31[13];
      a2->bottom = v37;
      if ( *v31 <= 0.0 || v31[5] <= 0.0 )
      {
        if ( v34 > v36 )
        {
          a2->left = v36;
          a2->right = v34;
        }
        if ( v35 > v37 )
        {
          a2->top = v37;
          a2->bottom = v35;
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v31, a2, v50);
      x = v50[0].x;
      v43 = 1LL;
      y = v50[0].y;
      v41 = v50[0].x;
      a2->left = v50[0].x;
      v42 = y;
      a2->top = y;
      a2->right = v41;
      a2->bottom = y;
      do
      {
        x = fminf(x, v50[v43].x);
        a2->left = x;
        y = fminf(y, v50[v43].y);
        a2->top = y;
        v41 = fmaxf(v41, v50[v43].x);
        a2->right = v41;
        v42 = fmaxf(v42, v50[v43++].y);
        a2->bottom = v42;
      }
      while ( v43 < 4 );
    }
  }
  return 0LL;
}
