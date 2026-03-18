/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1801B0270
 * Callers:
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@H@Z @ 0x1801B0234 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N1@Z @ 0x18028491C (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDrawingContext::IsOccluded(__int64 a1, float *a2, int a3)
{
  int v3; // eax
  float *v5; // r10
  float *v7; // r9
  char v8; // di
  float v9; // xmm6_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm9_4
  char v13; // r11
  struct D2D_POINT_2F *v14; // r8
  unsigned int v15; // edx
  unsigned int i; // ecx
  __int64 v17; // rax
  int v18; // eax
  __m128 v19; // xmm2
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  __int64 v23; // rax
  int v24; // eax
  __m128 v25; // xmm0
  float v26; // xmm11_4
  float v27; // xmm1_4
  float v28; // xmm10_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  float x; // xmm2_4
  unsigned __int64 v38; // rax
  float y; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float *v44; // r9
  const struct D2D_RECT_F *v45; // r10
  float v46; // xmm2_4
  float v47; // xmm3_4
  float v48; // xmm0_4
  float v49; // xmm0_4
  __int64 v50; // rcx
  void (__fastcall *v51)(__int64, __int128 *, struct D2D_POINT_2F *); // rax
  __int128 v52; // [rsp+38h] [rbp-69h] BYREF
  __int128 v53; // [rsp+48h] [rbp-59h] BYREF
  struct D2D_POINT_2F v54[4]; // [rsp+58h] [rbp-49h] BYREF

  v3 = *(_DWORD *)(a1 + 296);
  v5 = a2;
  v53 = 0LL;
  v52 = 0LL;
  if ( v3 )
    v7 = (float *)(*(_QWORD *)(a1 + 288) + 68LL * (unsigned int)(v3 - 1));
  else
    v7 = (float *)&CMILMatrix::Identity;
  v8 = 0;
  if ( (char)(4 * *((_BYTE *)v7 + 64)) >> 6 != 1 )
  {
    if ( (char)(4 * *((_BYTE *)v7 + 64)) >> 6 < 0 )
    {
LABEL_5:
      v8 = 1;
      v9 = v7[12] + *v5;
      v10 = v7[12] + v5[2];
      v11 = v7[13] + v5[1];
      v12 = v7[13] + v5[3];
      *(float *)&v53 = v9;
      *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(LODWORD(v10), LODWORD(v11));
      *((float *)&v53 + 3) = v12;
LABEL_6:
      v13 = 1;
      goto LABEL_7;
    }
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v7)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*v7 - 1.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v7[5] - 1.0) & _xmm) < 0.000081380211 )
    {
      *((_BYTE *)v7 + 64) |= 0x30u;
      goto LABEL_5;
    }
    *((_BYTE *)v7 + 64) &= ~0x20u;
    *((_BYTE *)v7 + 64) |= 0x10u;
  }
  if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v7) )
  {
    CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v44, v45, v54);
    v12 = *((float *)&v53 + 3);
    v14 = v54;
    v10 = *((float *)&v53 + 2);
    v15 = 8;
    v11 = *((float *)&v53 + 1);
    LODWORD(v9) = v53;
    goto LABEL_8;
  }
  v46 = *v44;
  v8 = 1;
  v47 = v44[5];
  v9 = (float)(*v44 * v45->left) + v44[12];
  v11 = (float)(v47 * v45->top) + v44[13];
  v10 = (float)(*v44 * v45->right) + v44[12];
  v12 = (float)(v47 * v45->bottom) + v44[13];
  *(float *)&v53 = v9;
  *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(LODWORD(v10), LODWORD(v11));
  *((float *)&v53 + 3) = v12;
  if ( v46 > 0.0 && v47 > 0.0 )
    goto LABEL_6;
LABEL_7:
  v14 = (struct D2D_POINT_2F *)&v53;
  v15 = 4;
LABEL_8:
  for ( i = 0; i < v15; ++i )
    ;
  if ( !v13 )
  {
    if ( v8 )
    {
      if ( v9 > v10 )
      {
        v48 = v9;
        v9 = v10;
        v10 = v48;
      }
      if ( v11 > v12 )
      {
        v49 = v11;
        v11 = v12;
        v12 = v49;
      }
    }
    else
    {
      x = v54[0].x;
      v38 = 1LL;
      y = v54[0].y;
      v40 = v54[0].x;
      v41 = v54[0].y;
      do
      {
        v42 = v54[v38].x;
        v43 = v54[v38].y;
        x = fminf(x, v42);
        y = fminf(y, v43);
        ++v38;
        v40 = fmaxf(v40, v42);
        v41 = fmaxf(v41, v43);
        v9 = x;
        v11 = y;
        v10 = v40;
        v12 = v41;
      }
      while ( v38 < 4 );
    }
  }
  v17 = *(_QWORD *)(a1 + 752);
  if ( v17 == *(_QWORD *)(a1 + 744) )
  {
    v19.m128_i32[0] = _xmm;
    LODWORD(v20) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
    LODWORD(v21) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
    LODWORD(v22) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
  }
  else
  {
    if ( *(_QWORD *)(v17 - 184) )
    {
      v18 = *(_DWORD *)(a1 + 3120);
      if ( v18 )
        v19 = *(__m128 *)(*(_QWORD *)(a1 + 3112) + 16LL * (unsigned int)(v18 - 1));
      else
        v19 = (__m128)_xmm;
      LODWORD(v20) = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
      LODWORD(v21) = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
      LODWORD(v22) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
    }
    else
    {
      v50 = *(_QWORD *)(v17 - 192);
      v51 = *(void (__fastcall **)(__int64, __int128 *, struct D2D_POINT_2F *))(*(_QWORD *)v50 + 88LL);
      if ( (char *)v51 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
        IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v50, &v52);
      else
        v51(v50, &v52, v14);
      v19.m128_i32[0] = 0;
      v22 = 0.0;
      v21 = (float)(int)v52;
      v20 = (float)SDWORD1(v52);
    }
    v23 = *(_QWORD *)(a1 + 752);
    if ( v23 != *(_QWORD *)(a1 + 744) && *(_QWORD *)(v23 - 168) )
    {
      v24 = *(_DWORD *)(a1 + 3144);
      if ( v24 )
        v25 = *(__m128 *)(*(_QWORD *)(a1 + 3136) + 16LL * (unsigned int)(v24 - 1));
      else
        v25 = (__m128)_xmm;
      if ( v25.m128_f32[0] > v19.m128_f32[0] )
        v19.m128_i32[0] = v25.m128_i32[0];
      v26 = v22;
      v27 = _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
      if ( v27 > v22 )
      {
        v22 = v27;
        v26 = v27;
      }
      v28 = v21;
      v29 = _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
      if ( v21 > v29 )
      {
        v21 = v29;
        v28 = v29;
      }
      v30 = _mm_shuffle_ps(v25, v25, 255).m128_f32[0];
      v31 = v20;
      if ( v20 > v30 )
      {
        v20 = v30;
        v31 = v30;
      }
      if ( v28 <= v19.m128_f32[0] || v31 <= v26 )
      {
        v20 = 0.0;
        v21 = 0.0;
        v22 = 0.0;
        v19.m128_i32[0] = 0;
      }
    }
  }
  if ( v19.m128_f32[0] > v9 )
    v9 = v19.m128_f32[0];
  v32 = v11;
  if ( v22 > v11 )
  {
    v11 = v22;
    v32 = v22;
  }
  v33 = v10;
  if ( v10 > v21 )
  {
    v10 = v21;
    v33 = v21;
  }
  v34 = v12;
  if ( v12 > v20 )
  {
    v12 = v20;
    v34 = v20;
  }
  if ( v33 <= v9 || v34 <= v32 )
  {
    v12 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
    v9 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
  }
  if ( v33 > v9 && v34 > v11 )
  {
    v35 = *(_QWORD *)(a1 + 7960);
    if ( !v35 )
      return 0;
    if ( v10 > v9 && v12 > v11 )
    {
      if ( a3 )
      {
        *(_QWORD *)&v52 = __PAIR64__(LODWORD(v11), LODWORD(v9));
        *((_QWORD *)&v52 + 1) = __PAIR64__(LODWORD(v12), LODWORD(v10));
        return CArrayBasedCoverageSet::IsCovered(v35 + 616, &v52);
      }
      return 0;
    }
  }
  return 1;
}
