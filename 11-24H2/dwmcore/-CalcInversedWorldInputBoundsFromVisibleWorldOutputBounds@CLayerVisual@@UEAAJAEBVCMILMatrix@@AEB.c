/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800A6B00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800369E0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A68F4 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A6F68 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1800A7200 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A8004 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800A8CCC (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A9BF0 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct D2D_RECT_F *a5,
        struct D2D_RECT_F *a6)
{
  bool v6; // zf
  int BoundsWithLayerEffect; // eax
  unsigned int v12; // ebx
  FLOAT v14; // xmm0_4
  float left; // xmm2_4
  FLOAT top; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float right; // xmm1_4
  float v20; // xmm0_4
  FLOAT v21; // xmm5_4
  FLOAT v22; // xmm8_4
  float bottom; // xmm6_4
  float v24; // xmm0_4
  FLOAT v25; // xmm7_4
  int v26; // xmm1_4
  int v27; // eax
  int ShadowBounds; // eax
  FLOAT v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  float v35; // xmm4_4
  float v36; // xmm1_4
  void *v37; // rdx
  FLOAT v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm4_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  int v46; // xmm3_4
  int v47; // eax
  struct D2D_RECT_F v48; // xmm1
  __int128 v49; // xmm0
  int v50; // eax
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  struct D2D_RECT_F v59; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v60; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v61; // [rsp+58h] [rbp-B0h]
  __int128 v62; // [rsp+68h] [rbp-A0h]
  __int128 v63; // [rsp+78h] [rbp-90h]
  int v64; // [rsp+88h] [rbp-80h]
  struct D2D_RECT_F v65; // [rsp+98h] [rbp-70h] BYREF
  struct D2D_RECT_F v66; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v67; // [rsp+B8h] [rbp-50h] BYREF
  int v68; // [rsp+C8h] [rbp-40h]
  int v69; // [rsp+CCh] [rbp-3Ch]
  __int64 v70[2]; // [rsp+D0h] [rbp-38h] BYREF
  int v71; // [rsp+E0h] [rbp-28h]
  int v72; // [rsp+E4h] [rbp-24h]

  v6 = *(_QWORD *)(a1 + 680) == 0LL;
  v65 = 0LL;
  if ( v6 )
  {
    BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(a1, &v65);
    v12 = BoundsWithLayerEffect;
    if ( BoundsWithLayerEffect >= 0 )
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, &v65, &v65.left);
      v14 = *(float *)a3;
      left = v65.left;
      if ( *(float *)a3 > v65.left )
      {
        v65.left = *(FLOAT *)a3;
        left = v14;
      }
      top = v65.top;
      v17 = *(float *)(a3 + 4);
      v18 = v65.top;
      if ( v17 > v65.top )
      {
        v65.top = *(FLOAT *)(a3 + 4);
        top = v17;
        v18 = v17;
      }
      right = v65.right;
      v20 = *(float *)(a3 + 8);
      v21 = v65.right;
      v22 = v65.right;
      if ( v65.right > v20 )
      {
        v65.right = *(FLOAT *)(a3 + 8);
        right = v20;
        v21 = v20;
        v22 = v20;
      }
      bottom = v65.bottom;
      v24 = *(float *)(a3 + 12);
      v25 = v65.bottom;
      if ( v65.bottom > v24 )
      {
        v65.bottom = *(FLOAT *)(a3 + 12);
        bottom = v24;
        v21 = v22;
        v25 = v24;
      }
      if ( right <= left || bottom <= v18 )
      {
        v65.bottom = 0.0;
        left = 0.0;
        v65.right = 0.0;
        top = 0.0;
        v65.top = 0.0;
        v21 = 0.0;
        v65.left = 0.0;
        v25 = 0.0;
      }
      v26 = *(_DWORD *)(a3 + 20);
      v71 = *(_DWORD *)(a3 + 16);
      v72 = v26;
      v70[0] = __PAIR64__(LODWORD(top), LODWORD(left));
      v70[1] = __PAIR64__(LODWORD(v25), LODWORD(v21));
      v27 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
              (_QWORD *)a1,
              a2,
              (struct D2D_RECT_F *)v70,
              a4,
              a5,
              a6);
      v12 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x11Bu, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BoundsWithLayerEffect, 0x109u, 0LL);
    }
    return v12;
  }
  *(_OWORD *)v70 = 0LL;
  v66 = 0LL;
  v59 = 0LL;
  ShadowBounds = CLayerVisual::GetShadowBounds(a1, &v65);
  v12 = ShadowBounds;
  if ( ShadowBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShadowBounds, 0x125u, 0LL);
    return v12;
  }
  if ( *(_BYTE *)(a1 + 705) )
  {
    v51 = *(_OWORD *)(a2 + 16);
    v64 = *(_DWORD *)(a2 + 64);
    v67 = 0LL;
    v52 = *(_OWORD *)a2;
    v61 = v51;
    v53 = *(_OWORD *)(a2 + 48);
    v60 = v52;
    v54 = *(_OWORD *)(a2 + 32);
    v63 = v53;
    v62 = v54;
    if ( CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)&v60, (float *)a3, (float *)&v67) )
    {
      if ( *(float *)&v67 > v65.left )
        LODWORD(v65.left) = v67;
      if ( *((float *)&v67 + 1) > v65.top )
        v65.top = *((FLOAT *)&v67 + 1);
      if ( v65.right > *((float *)&v67 + 2) )
        v65.right = *((FLOAT *)&v67 + 2);
      if ( v65.bottom > *((float *)&v67 + 3) )
        v65.bottom = *((FLOAT *)&v67 + 3);
      if ( IsEmpty(&v65) )
      {
        v65.bottom = 0.0;
        v65.right = 0.0;
        v65.top = 0.0;
        v65.left = 0.0;
      }
    }
    v37 = &CMILMatrix::Identity;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v65, &v65.left);
    v29 = *(float *)a3;
    v30 = v65.left;
    if ( *(float *)a3 > v65.left )
    {
      v65.left = *(FLOAT *)a3;
      v30 = v29;
    }
    v31 = *(float *)(a3 + 4);
    v32 = v65.top;
    if ( v31 > v65.top )
    {
      v65.top = *(FLOAT *)(a3 + 4);
      v32 = v31;
    }
    v33 = *(float *)(a3 + 8);
    v34 = v65.right;
    if ( v65.right > v33 )
    {
      v65.right = *(FLOAT *)(a3 + 8);
      v34 = v33;
    }
    v35 = *(float *)(a3 + 12);
    v36 = v65.bottom;
    if ( v65.bottom > v35 )
    {
      v65.bottom = *(FLOAT *)(a3 + 12);
      v36 = v35;
    }
    if ( v34 <= v30 || v36 <= v32 )
    {
      v65.bottom = 0.0;
      v65.right = 0.0;
      v65.top = 0.0;
      v65.left = 0.0;
    }
    LODWORD(v37) = a2;
  }
  CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(a1, (int)v37, (__int64)v70);
  CLayerVisual::GetMaskBounds(a1, &v66);
  if ( *(_BYTE *)(a1 + 705) )
  {
    v55 = *(_OWORD *)(a2 + 16);
    v64 = *(_DWORD *)(a2 + 64);
    v67 = 0LL;
    v56 = *(_OWORD *)a2;
    v61 = v55;
    v57 = *(_OWORD *)(a2 + 48);
    v60 = v56;
    v58 = *(_OWORD *)(a2 + 32);
    v63 = v57;
    v62 = v58;
    if ( !CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)&v60, (float *)a3, (float *)&v67) )
      goto LABEL_41;
    if ( *(float *)&v67 > v66.left )
      LODWORD(v66.left) = v67;
    if ( *((float *)&v67 + 1) > v66.top )
      v66.top = *((FLOAT *)&v67 + 1);
    if ( v66.right > *((float *)&v67 + 2) )
      v66.right = *((FLOAT *)&v67 + 2);
    if ( v66.bottom > *((float *)&v67 + 3) )
      v66.bottom = *((FLOAT *)&v67 + 3);
    if ( !IsEmpty(&v66) )
      goto LABEL_41;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v66, &v66.left);
    v38 = *(float *)a3;
    v39 = v66.left;
    if ( *(float *)a3 > v66.left )
    {
      v66.left = *(FLOAT *)a3;
      v39 = v38;
    }
    v40 = *(float *)(a3 + 4);
    v41 = v66.top;
    if ( v40 > v66.top )
    {
      v66.top = *(FLOAT *)(a3 + 4);
      v41 = v40;
    }
    v42 = *(float *)(a3 + 8);
    v43 = v66.right;
    if ( v66.right > v42 )
    {
      v66.right = *(FLOAT *)(a3 + 8);
      v43 = v42;
    }
    v44 = *(float *)(a3 + 12);
    v45 = v66.bottom;
    if ( v66.bottom > v44 )
    {
      v66.bottom = *(FLOAT *)(a3 + 12);
      v45 = v44;
    }
    if ( v43 > v39 && v45 > v41 )
      goto LABEL_41;
  }
  v66.bottom = 0.0;
  v66.right = 0.0;
  v66.top = 0.0;
  v66.left = 0.0;
LABEL_41:
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v59.left, &v66.left);
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v70, &v66.left);
  if ( CDropShadow::GetMaskForLayerVisualNoRef(*(CDropShadow **)(a1 + 680)) )
  {
    v48 = *(struct D2D_RECT_F *)v70;
    *a5 = v59;
    *a6 = v48;
  }
  else
  {
    v46 = *(_DWORD *)(a3 + 20);
    v71 = *(_DWORD *)(a3 + 16);
    v72 = v46;
    *(struct D2D_RECT_F *)v70 = v59;
    if ( *(_BYTE *)(a1 + 705) )
    {
      v49 = *(_OWORD *)(a1 + 176);
      v68 = 0;
      v69 = 0;
      v67 = v49;
      v50 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
              (_QWORD *)a1,
              (__int64)&CMILMatrix::Identity,
              (struct D2D_RECT_F *)v70,
              (__int64)&v67,
              a5,
              a6);
      v12 = v50;
      if ( v50 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0x18Du, 0LL);
    }
    else
    {
      v47 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
              (_QWORD *)a1,
              a2,
              (struct D2D_RECT_F *)v70,
              a4,
              a5,
              a6);
      v12 = v47;
      if ( v47 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0x19Au, 0LL);
    }
  }
  return v12;
}
