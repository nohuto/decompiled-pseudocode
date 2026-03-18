/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800214B0
 * Callers:
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180022B60 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800344E0 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038420 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800ABE30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800F7180 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?Transform3DBounds@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV2@@Z @ 0x1801F205C (-Transform3DBounds@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     _lambda_0e17c6475725e05fea3019b9a50aca17_::operator() @ 0x180281FA0 (_lambda_0e17c6475725e05fea3019b9a50aca17_--operator().c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180290020 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAUD2D_POINT_3F@@@Z @ 0x180020C40 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2A40 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2C70 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform3DBoundsHelper<0>(__int64 a1, float *a2, float *a3)
{
  __int64 v3; // r11
  char v5; // cl
  int v7; // xmm5_4
  char v8; // dl
  char result; // al
  float *v10; // r11
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  __int64 v17; // rcx
  __int64 v18; // r11
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm5_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm2_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm6_4
  float v32; // xmm6_4
  float v33; // xmm6_4
  float v34; // xmm6_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  float v37; // xmm6_4
  float v38; // xmm6_4
  float v39; // xmm6_4
  float v40; // xmm6_4
  float v41; // xmm6_4
  float v42; // xmm6_4
  float v43; // xmm6_4
  float v44; // xmm6_4
  float v45; // xmm6_4
  float v46; // xmm6_4
  float v47; // xmm6_4
  float v48; // xmm6_4
  float v49; // xmm6_4
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  __int128 v53; // [rsp+28h] [rbp-79h] BYREF
  __int128 v54; // [rsp+38h] [rbp-69h] BYREF
  float v55; // [rsp+48h] [rbp-59h] BYREF
  float v56; // [rsp+4Ch] [rbp-55h]
  float v57; // [rsp+50h] [rbp-51h]
  float v58; // [rsp+54h] [rbp-4Dh]
  float v59; // [rsp+58h] [rbp-49h]
  float v60; // [rsp+5Ch] [rbp-45h]
  float v61; // [rsp+60h] [rbp-41h]
  float v62; // [rsp+64h] [rbp-3Dh]
  float v63; // [rsp+68h] [rbp-39h]
  float v64; // [rsp+6Ch] [rbp-35h]
  float v65; // [rsp+70h] [rbp-31h]
  float v66; // [rsp+74h] [rbp-2Dh]
  float v67; // [rsp+78h] [rbp-29h]
  float v68; // [rsp+7Ch] [rbp-25h]
  float v69; // [rsp+80h] [rbp-21h]
  float v70; // [rsp+84h] [rbp-1Dh]
  float v71; // [rsp+88h] [rbp-19h]
  float v72; // [rsp+8Ch] [rbp-15h]
  float v73; // [rsp+90h] [rbp-11h]
  float v74; // [rsp+94h] [rbp-Dh]
  float v75; // [rsp+98h] [rbp-9h]
  float v76; // [rsp+9Ch] [rbp-5h]
  float v77; // [rsp+A0h] [rbp-1h]
  float v78; // [rsp+A4h] [rbp+3h]

  v3 = a1;
  v5 = *(_BYTE *)(a1 + 65);
  if ( (v5 & 8) == 0 && 16 * (v5 & 0xFC) != 0 )
    goto LABEL_11;
  v7 = _xmm;
  if ( (v5 & 8) == 0 )
  {
    if ( (char)(4 * v5) >> 6 == 1 )
      goto LABEL_32;
    if ( (char)(4 * v5) >> 6 >= 0 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm))
                        - 1.0) & _xmm) >= 0.000081380211 )
      {
        *(_BYTE *)(v3 + 65) = v5 & 0xC3 | 0x14;
        goto LABEL_11;
      }
      v5 |= 0x30u;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
        goto LABEL_32;
    }
    else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
    {
      goto LABEL_32;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 32) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 36) - 0.0) & _xmm) < 0.000081380211 )
    {
      v5 |= 0xCu;
      *(_BYTE *)(v3 + 65) = v5;
      goto LABEL_3;
    }
LABEL_32:
    *(_BYTE *)(v3 + 65) = v5 & 0xF3 | 4;
    goto LABEL_11;
  }
LABEL_3:
  v8 = *(_BYTE *)(v3 + 64);
  if ( (char)(16 * v8) >> 6 == 1 )
    goto LABEL_11;
  if ( (char)(16 * v8) >> 6 >= 0 )
  {
    if ( (char)(4 * v5) >> 6 == 1 )
      goto LABEL_36;
    if ( (char)(4 * v5) >> 6 >= 0 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm))
                        - 1.0) & _xmm) >= 0.000081380211 )
      {
        *(_BYTE *)(v3 + 65) = v5 & 0xCF | 0x10;
        *(_BYTE *)(v3 + 64) = v8 & 0xF3 | 4;
        goto LABEL_11;
      }
      *(_BYTE *)(v3 + 65) = v5 | 0x30;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 8) - 0.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 24) - 0.0) & _xmm) >= 0.000081380211 )
    {
LABEL_36:
      *(_BYTE *)(v3 + 64) = v8 & 0xF3 | 4;
      goto LABEL_11;
    }
    *(_BYTE *)(v3 + 64) = v8 | 0xC;
  }
  result = (char)(4 * *(_BYTE *)(v3 + 64)) >> 6;
  if ( result == 1 )
    goto LABEL_11;
  if ( result >= 0 )
  {
    result = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v3);
    if ( !result
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v3 - 1.0) & v7) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 20) - 1.0) & v7) >= 0.000081380211 )
    {
      *(_BYTE *)(v3 + 64) &= ~0x20u;
      *(_BYTE *)(v3 + 64) |= 0x10u;
      goto LABEL_11;
    }
    *(_BYTE *)(v3 + 64) |= 0x30u;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 40) - 1.0) & v7) < 0.000081380211 )
  {
    *a3 = *a2 + *(float *)(v3 + 48);
    a3[1] = a2[1] + *(float *)(v3 + 52);
    a3[4] = a2[4] + *(float *)(v3 + 56);
    a3[2] = a2[2] + *(float *)(v3 + 48);
    a3[3] = a2[3] + *(float *)(v3 + 52);
    a3[5] = a2[5] + *(float *)(v3 + 56);
    return result;
  }
LABEL_11:
  result = CMILMatrix::IsTranslateAndScale<1>(v3);
  if ( result )
  {
    v11 = (float)(*v10 * *a2) + v10[12];
    *a3 = v11;
    v12 = (float)(a2[1] * v10[5]) + v10[13];
    a3[1] = v12;
    v13 = (float)(a2[4] * v10[10]) + v10[14];
    a3[4] = v13;
    v14 = (float)(a2[2] * *v10) + v10[12];
    a3[2] = v14;
    v15 = (float)(a2[3] * v10[5]) + v10[13];
    a3[3] = v15;
    v16 = (float)(a2[5] * v10[10]) + v10[14];
    a3[5] = v16;
    if ( *v10 <= 0.0 || v10[5] <= 0.0 || v10[10] <= 0.0 )
    {
      if ( v11 > v14 )
      {
        *a3 = v14;
        a3[2] = v11;
      }
      if ( v12 > v15 )
      {
        a3[1] = v15;
        a3[3] = v12;
      }
      if ( v13 > v16 )
      {
        a3[4] = v16;
        a3[5] = v13;
      }
    }
  }
  else if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>() )
  {
    v54 = 0LL;
    v53 = *(_OWORD *)a2;
    result = CMILMatrix::Transform2DBoundsHelper<0>(v17, &v53, &v54);
    v19 = *(float *)(v18 + 40);
    v20 = (float)(v19 * a2[5]) + *(float *)(v18 + 56);
    v21 = (float)(v19 * a2[4]) + *(float *)(v18 + 56);
    if ( v21 > v20 )
    {
      v52 = v21;
      v21 = v20;
      v20 = v52;
    }
    *(_OWORD *)a3 = v54;
    a3[4] = v21;
    a3[5] = v20;
  }
  else
  {
    result = CMILMatrix::Transform3DRectToPerspective(v17, a2, &v55);
    *a3 = 3.4028235e38;
    a3[1] = 3.4028235e38;
    a3[2] = -3.4028235e38;
    a3[3] = -3.4028235e38;
    a3[4] = 3.4028235e38;
    a3[5] = -3.4028235e38;
    v22 = v55;
    v23 = *a3;
    if ( v55 < 3.4028235e38 )
    {
      *a3 = v55;
      v23 = v22;
    }
    v24 = a3[2];
    if ( v22 > -3.4028235e38 )
    {
      a3[2] = v22;
      v24 = v22;
    }
    v25 = v56;
    v26 = a3[1];
    if ( v56 < 3.4028235e38 )
    {
      a3[1] = v56;
      v26 = v25;
    }
    v27 = a3[3];
    if ( v25 > -3.4028235e38 )
    {
      a3[3] = v25;
      v27 = v25;
    }
    v28 = v57;
    v29 = a3[4];
    if ( v57 < 3.4028235e38 )
    {
      a3[4] = v57;
      v29 = v28;
    }
    v30 = a3[5];
    if ( v28 > -3.4028235e38 )
    {
      a3[5] = v28;
      v30 = v28;
    }
    v31 = v58;
    if ( v23 > v58 )
    {
      *a3 = v58;
      v23 = v31;
    }
    if ( v31 > v24 )
    {
      a3[2] = v31;
      v24 = v31;
    }
    v32 = v59;
    if ( v26 > v59 )
    {
      a3[1] = v59;
      v26 = v32;
    }
    if ( v32 > v27 )
    {
      a3[3] = v32;
      v27 = v32;
    }
    v33 = v60;
    if ( v29 > v60 )
    {
      a3[4] = v60;
      v29 = v33;
    }
    if ( v33 > v30 )
    {
      a3[5] = v33;
      v30 = v33;
    }
    v34 = v61;
    if ( v23 > v61 )
    {
      *a3 = v61;
      v23 = v34;
    }
    if ( v34 > v24 )
    {
      a3[2] = v34;
      v24 = v34;
    }
    v35 = v62;
    if ( v26 > v62 )
    {
      a3[1] = v62;
      v26 = v35;
    }
    if ( v35 > v27 )
    {
      a3[3] = v35;
      v27 = v35;
    }
    v36 = v63;
    if ( v29 > v63 )
    {
      a3[4] = v63;
      v29 = v36;
    }
    if ( v36 > v30 )
    {
      a3[5] = v36;
      v30 = v36;
    }
    v37 = v64;
    if ( v23 > v64 )
    {
      *a3 = v64;
      v23 = v37;
    }
    if ( v37 > v24 )
    {
      a3[2] = v37;
      v24 = v37;
    }
    v38 = v65;
    if ( v26 > v65 )
    {
      a3[1] = v65;
      v26 = v38;
    }
    if ( v38 > v27 )
    {
      a3[3] = v38;
      v27 = v38;
    }
    v39 = v66;
    if ( v29 > v66 )
    {
      a3[4] = v66;
      v29 = v39;
    }
    if ( v39 > v30 )
    {
      a3[5] = v39;
      v30 = v39;
    }
    v40 = v67;
    if ( v23 > v67 )
    {
      *a3 = v67;
      v23 = v40;
    }
    if ( v40 > v24 )
    {
      a3[2] = v40;
      v24 = v40;
    }
    v41 = v68;
    if ( v26 > v68 )
    {
      a3[1] = v68;
      v26 = v41;
    }
    if ( v41 > v27 )
    {
      a3[3] = v41;
      v27 = v41;
    }
    v42 = v69;
    if ( v29 > v69 )
    {
      a3[4] = v69;
      v29 = v42;
    }
    if ( v42 > v30 )
    {
      a3[5] = v42;
      v30 = v42;
    }
    v43 = v70;
    if ( v23 > v70 )
    {
      *a3 = v70;
      v23 = v43;
    }
    if ( v43 > v24 )
    {
      a3[2] = v43;
      v24 = v43;
    }
    v44 = v71;
    if ( v26 > v71 )
    {
      a3[1] = v71;
      v26 = v44;
    }
    if ( v44 > v27 )
    {
      a3[3] = v44;
      v27 = v44;
    }
    v45 = v72;
    if ( v29 > v72 )
    {
      a3[4] = v72;
      v29 = v45;
    }
    if ( v45 > v30 )
    {
      a3[5] = v45;
      v30 = v45;
    }
    v46 = v73;
    if ( v23 > v73 )
    {
      *a3 = v73;
      v23 = v46;
    }
    if ( v46 > v24 )
    {
      a3[2] = v46;
      v24 = v46;
    }
    v47 = v74;
    if ( v26 > v74 )
    {
      a3[1] = v74;
      v26 = v47;
    }
    if ( v47 > v27 )
    {
      a3[3] = v47;
      v27 = v47;
    }
    v48 = v75;
    if ( v29 > v75 )
    {
      a3[4] = v75;
      v29 = v48;
    }
    if ( v48 > v30 )
    {
      a3[5] = v48;
      v30 = v48;
    }
    v49 = v76;
    if ( v23 > v76 )
      *a3 = v76;
    if ( v49 > v24 )
      a3[2] = v49;
    v50 = v77;
    if ( v26 > v77 )
      a3[1] = v77;
    if ( v50 > v27 )
      a3[3] = v50;
    v51 = v78;
    if ( v29 > v78 )
      a3[4] = v78;
    if ( v51 > v30 )
      a3[5] = v51;
  }
  return result;
}
