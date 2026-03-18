/*
 * XREFs of ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800CD040
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006CC40 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18006DA94 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18006DA94.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD910 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D3EB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180174930 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::GetUnOccludedWorldShape(
        CDrawingContext *this,
        const struct CShape *a2,
        int a3,
        struct CShape **a4)
{
  __int64 v5; // r14
  unsigned int v9; // edi
  int v11; // eax
  void *v12; // r9
  __int64 v13; // r9
  float v14; // xmm1_4
  char v15; // r11
  float v16; // xmm8_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm11_4
  char v20; // r10
  struct D2D_POINT_2F *v21; // r8
  unsigned int v22; // edx
  unsigned int i; // ecx
  __int64 v24; // rax
  int v25; // eax
  __m128 v26; // xmm2
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  __int64 v30; // rax
  int v31; // eax
  __m128 v32; // xmm0
  float v33; // xmm10_4
  float v34; // xmm1_4
  float v35; // xmm9_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  unsigned int v42; // r8d
  __int64 v43; // rdx
  __m128 v44; // xmm2
  float v45; // xmm3_4
  __int64 v46; // rcx
  float v47; // xmm12_4
  float v48; // xmm1_4
  float v49; // xmm9_4
  float v50; // xmm13_4
  float v51; // xmm5_4
  float v52; // xmm10_4
  float v53; // xmm4_4
  float v54; // xmm0_4
  float v55; // xmm0_4
  bool (__fastcall *v56)(CRectanglesShape *__hidden, unsigned int *); // rax
  int v57; // eax
  int v58; // eax
  void *v59; // r13
  float *v60; // rcx
  char v61; // dl
  __int64 v62; // rax
  __int64 (__fastcall *v63)(const struct CShape *, struct D2D_RECT_F *, _QWORD); // rax
  int TightBounds; // eax
  __int64 v65; // rdx
  __int64 v66; // r8
  char v67; // r8
  __int64 v68; // rax
  __int64 (__fastcall *v69)(const struct CShape *, _DWORD *, void *, struct CShape **); // r10
  int v70; // eax
  int UnOccludedWorldShape; // eax
  float x; // xmm2_4
  unsigned __int64 v73; // rax
  float y; // xmm3_4
  float v75; // xmm4_4
  float v76; // xmm5_4
  float v77; // xmm1_4
  float v78; // xmm0_4
  float *v79; // r9
  float v80; // xmm2_4
  float v81; // xmm3_4
  float v82; // xmm0_4
  float v83; // xmm0_4
  __int64 v84; // rcx
  void (__fastcall *v85)(__int64, __int128 *, struct D2D_POINT_2F *); // rax
  __int128 v86; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v87; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_RECT_F v88; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v89[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct D2D_POINT_2F v90[4]; // [rsp+70h] [rbp-90h] BYREF

  *a4 = 0LL;
  v5 = *((_QWORD *)this + 995);
  v9 = -2003304309;
  if ( !v5 )
    return v9;
  v56 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)a2 + 64LL);
  if ( v56 != CRectanglesShape::IsRectangles && !v56(a2, 0LL) )
    return v9;
  if ( !a3 )
    return v9;
  if ( *((_DWORD *)this + 80) )
  {
    v57 = *((_DWORD *)this + 80);
    if ( v57 )
    {
      if ( *(_BYTE *)((unsigned int)(v57 - 1) + *((_QWORD *)this + 39)) )
        return v9;
    }
  }
  v58 = *((_DWORD *)this + 74);
  v59 = &CMILMatrix::Identity;
  if ( v58 )
    v60 = (float *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v58 - 1));
  else
    v60 = (float *)&CMILMatrix::Identity;
  v61 = *((_BYTE *)v60 + 64);
  if ( v61 >> 6 == 1 )
    goto LABEL_77;
  if ( v61 >> 6 < 0 )
    goto LABEL_69;
  v67 = *((_BYTE *)v60 + 65);
  if ( (char)(4 * v67) >> 6 != 1 )
  {
    if ( (char)(4 * v67) >> 6 < 0 )
    {
LABEL_75:
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v60[1] - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v60[4] - 0.0) & _xmm) < 0.000081380211 )
      {
        *((_BYTE *)v60 + 64) = v61 | 0xC0;
        goto LABEL_69;
      }
      goto LABEL_76;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT((_DWORD)v60[7] & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT((_DWORD)v60[3] & _xmm) * 61440.0))
                              + COERCE_FLOAT((_DWORD)v60[15] & _xmm))
                      - 1.0) & _xmm) < 0.000081380211 )
    {
      *((_BYTE *)v60 + 65) = v67 | 0x30;
      goto LABEL_75;
    }
    *((_BYTE *)v60 + 65) = v67 & 0xCF | 0x10;
  }
LABEL_76:
  *((_BYTE *)v60 + 64) = v61 & 0x3F | 0x40;
LABEL_77:
  if ( !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v60) )
    return v9;
LABEL_69:
  v62 = *(_QWORD *)a2;
  v88 = 0LL;
  v63 = *(__int64 (__fastcall **)(const struct CShape *, struct D2D_RECT_F *, _QWORD))(v62 + 48);
  if ( (char *)v63 == (char *)CRectanglesShape::GetTightBounds )
    TightBounds = CRectanglesShape::GetTightBounds(a2, &v88, 0LL);
  else
    TightBounds = v63(a2, &v88, 0LL);
  if ( TightBounds < 0 )
    return v9;
  v11 = *((_DWORD *)this + 74);
  v87 = 0LL;
  v86 = 0LL;
  if ( v11 )
    v12 = (void *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v11 - 1));
  else
    v12 = &CMILMatrix::Identity;
  if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(v12, v65, v66, v12) )
  {
    v14 = *(float *)(v13 + 48);
    v15 = 1;
    v16 = v88.right + v14;
    v17 = v14 + v88.left;
    v18 = v88.top + *(float *)(v13 + 52);
    v19 = v88.bottom + *(float *)(v13 + 52);
    *((float *)&v87 + 2) = v88.right + v14;
    *(float *)&v87 = v14 + v88.left;
    *((float *)&v87 + 1) = v18;
    *((float *)&v87 + 3) = v19;
LABEL_7:
    v20 = 1;
LABEL_8:
    v21 = (struct D2D_POINT_2F *)&v87;
    v22 = 4;
    goto LABEL_9;
  }
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v13) )
  {
    v80 = *v79;
    v15 = 1;
    v81 = v79[5];
    v17 = (float)(*v79 * v88.left) + v79[12];
    v18 = (float)(v88.top * v81) + v79[13];
    v16 = (float)(v88.right * *v79) + v79[12];
    *(float *)&v87 = v17;
    v19 = (float)(v88.bottom * v81) + v79[13];
    *(_QWORD *)((char *)&v87 + 4) = __PAIR64__(LODWORD(v16), LODWORD(v18));
    *((float *)&v87 + 3) = v19;
    if ( v80 <= 0.0 || v81 <= 0.0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v79, &v88, v90);
  v19 = *((float *)&v87 + 3);
  v21 = v90;
  v16 = *((float *)&v87 + 2);
  v22 = 8;
  v18 = *((float *)&v87 + 1);
  v17 = *(float *)&v87;
LABEL_9:
  for ( i = 0; i < v22; ++i )
    ;
  if ( !v20 )
  {
    if ( v15 )
    {
      if ( v17 > v16 )
      {
        v82 = v17;
        v17 = v16;
        v16 = v82;
      }
      if ( v18 > v19 )
      {
        v83 = v18;
        v18 = v19;
        v19 = v83;
      }
    }
    else
    {
      x = v90[0].x;
      v73 = 1LL;
      y = v90[0].y;
      v75 = v90[0].x;
      v76 = v90[0].y;
      do
      {
        v77 = v90[v73].x;
        v78 = v90[v73].y;
        x = fminf(x, v77);
        y = fminf(y, v78);
        ++v73;
        v75 = fmaxf(v75, v77);
        v76 = fmaxf(v76, v78);
        v17 = x;
        v18 = y;
        v16 = v75;
        v19 = v76;
      }
      while ( v73 < 4 );
    }
  }
  v24 = *((_QWORD *)this + 94);
  if ( v24 == *((_QWORD *)this + 93) )
  {
    v26.m128_i32[0] = _xmm;
    LODWORD(v27) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
    LODWORD(v28) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
    LODWORD(v29) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
  }
  else
  {
    if ( *(_QWORD *)(v24 - 184) )
    {
      v25 = *((_DWORD *)this + 780);
      if ( v25 )
        v26 = *(__m128 *)(*((_QWORD *)this + 389) + 16LL * (unsigned int)(v25 - 1));
      else
        v26 = (__m128)_xmm;
      LODWORD(v27) = _mm_shuffle_ps(v26, v26, 255).m128_u32[0];
      LODWORD(v28) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
      LODWORD(v29) = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
    }
    else
    {
      v84 = *(_QWORD *)(v24 - 192);
      v85 = *(void (__fastcall **)(__int64, __int128 *, struct D2D_POINT_2F *))(*(_QWORD *)v84 + 88LL);
      if ( (char *)v85 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
        IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v84, &v86);
      else
        v85(v84, &v86, v21);
      v26.m128_i32[0] = 0;
      v29 = 0.0;
      v28 = (float)(int)v86;
      v27 = (float)SDWORD1(v86);
    }
    v30 = *((_QWORD *)this + 94);
    if ( v30 != *((_QWORD *)this + 93) && *(_QWORD *)(v30 - 168) )
    {
      v31 = *((_DWORD *)this + 786);
      if ( v31 )
        v32 = *(__m128 *)(*((_QWORD *)this + 392) + 16LL * (unsigned int)(v31 - 1));
      else
        v32 = (__m128)_xmm;
      if ( v32.m128_f32[0] > v26.m128_f32[0] )
        v26.m128_i32[0] = v32.m128_i32[0];
      v33 = v29;
      v34 = _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
      if ( v34 > v29 )
      {
        v29 = v34;
        v33 = v34;
      }
      v35 = v28;
      v36 = _mm_shuffle_ps(v32, v32, 170).m128_f32[0];
      if ( v28 > v36 )
      {
        v28 = v36;
        v35 = v36;
      }
      v37 = _mm_shuffle_ps(v32, v32, 255).m128_f32[0];
      v38 = v27;
      if ( v27 > v37 )
      {
        v27 = v37;
        v38 = v37;
      }
      if ( v35 <= v26.m128_f32[0] || v38 <= v33 )
      {
        v27 = 0.0;
        v28 = 0.0;
        v29 = 0.0;
        v26.m128_i32[0] = 0;
      }
    }
  }
  if ( v26.m128_f32[0] > v17 )
    v17 = v26.m128_f32[0];
  v39 = v18;
  if ( v29 > v18 )
  {
    v18 = v29;
    v39 = v29;
  }
  v40 = v16;
  if ( v16 > v28 )
  {
    v16 = v28;
    v40 = v28;
  }
  v41 = v19;
  if ( v19 > v27 )
  {
    v19 = v27;
    v41 = v27;
  }
  if ( v40 <= v17 || v41 <= v39 )
  {
    v19 = 0.0;
    v16 = 0.0;
    v18 = 0.0;
    v17 = 0.0;
  }
  v42 = *(_DWORD *)(v5 + 640);
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0.0;
  if ( v42 )
  {
    do
    {
      v46 = *(_QWORD *)(v5 + 616) + 48 * v43;
      if ( *(_DWORD *)(v46 + 16) >= a3 )
        break;
      v47 = *(float *)(v46 + 8);
      if ( v47 > *(float *)v46 && *(float *)(v46 + 12) > *(float *)(v46 + 4) )
      {
        v48 = v17;
        if ( *(float *)v46 > v17 )
          v48 = *(float *)v46;
        v49 = v48;
        v50 = v48;
        v51 = v18;
        if ( *(float *)(v46 + 4) > v18 )
          v51 = *(float *)(v46 + 4);
        v52 = v51;
        v53 = v16;
        if ( v16 > v47 )
        {
          v53 = *(float *)(v46 + 8);
          v49 = v48;
          v50 = v48;
        }
        v54 = v19;
        if ( v19 > *(float *)(v46 + 12) )
        {
          v49 = v50;
          v52 = v51;
          v54 = *(float *)(v46 + 12);
        }
        if ( v53 > v49 && v54 > v52 )
        {
          v55 = (float)(v54 - v51) * (float)(v53 - v48);
          if ( v55 > v45 )
          {
            v44 = *(__m128 *)v46;
            v45 = v55;
          }
        }
      }
      v43 = (unsigned int)(v43 + 1);
    }
    while ( (unsigned int)v43 < v42 );
    if ( v45 > 0.0 )
    {
      v68 = *(_QWORD *)a2;
      v89[0] = v44.m128_i32[0];
      v69 = *(__int64 (__fastcall **)(const struct CShape *, _DWORD *, void *, struct CShape **))(v68 + 96);
      v70 = *((_DWORD *)this + 74);
      v89[1] = _mm_shuffle_ps(v44, v44, 85).m128_u32[0];
      v89[2] = _mm_shuffle_ps(v44, v44, 170).m128_u32[0];
      v89[3] = _mm_shuffle_ps(v44, v44, 255).m128_u32[0];
      if ( v70 )
        v59 = (void *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v70 - 1));
      if ( (char *)v69 == (char *)CRectanglesShape::GetUnOccludedWorldShape )
        UnOccludedWorldShape = CRectanglesShape::GetUnOccludedWorldShape(a2, v89, v59, a4);
      else
        UnOccludedWorldShape = v69(a2, v89, v59, a4);
      v9 = UnOccludedWorldShape;
      if ( UnOccludedWorldShape < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, UnOccludedWorldShape, 0x149Au, 0LL);
    }
  }
  return v9;
}
