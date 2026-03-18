/*
 * XREFs of ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801B3B30
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800097B8 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800A9D10 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     _lambda_c3c427167b990826593ca3f677af520c_::operator() @ 0x1801B3A80 (_lambda_c3c427167b990826593ca3f677af520c_--operator().c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::CalcWorldSpaceClippedBounds(__int64 a1, float *a2, float *a3)
{
  int v3; // eax
  float *v6; // r10
  float *v7; // r9
  char v8; // bp
  float *v9; // rsi
  char v10; // r11
  struct D2D_POINT_2F *v11; // r8
  unsigned int v12; // edx
  unsigned int i; // ecx
  __int64 result; // rax
  int v15; // eax
  __m128 v16; // xmm2
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  __int64 v20; // rcx
  __m128 v21; // xmm0
  float v22; // xmm7_4
  float v23; // xmm1_4
  float v24; // xmm6_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float x; // xmm0_4
  unsigned __int64 v31; // rax
  float y; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float *v35; // r9
  const struct D2D_RECT_F *v36; // r10
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  __int64 v40; // rcx
  void (__fastcall *v41)(__int64, __int128 *, struct D2D_POINT_2F *); // rax
  __int128 v42; // [rsp+20h] [rbp-78h] BYREF
  struct D2D_POINT_2F v43[4]; // [rsp+30h] [rbp-68h] BYREF

  v3 = *(_DWORD *)(a1 + 296);
  v6 = a2;
  v42 = 0LL;
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
      v9 = a3 + 2;
      v8 = 1;
      *a3 = *v6 + v7[12];
      a3[1] = v6[1] + v7[13];
      a3[2] = v6[2] + v7[12];
      a3[3] = v6[3] + v7[13];
LABEL_6:
      v10 = 1;
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
    CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v35, v36, v43);
    v12 = 8;
    v11 = v43;
    v9 = a3 + 2;
    goto LABEL_8;
  }
  v9 = a3 + 2;
  v8 = 1;
  *a3 = (float)(v36->left * *v35) + v35[12];
  a3[1] = (float)(v36->top * v35[5]) + v35[13];
  a3[2] = (float)(v36->right * *v35) + v35[12];
  a3[3] = (float)(v36->bottom * v35[5]) + v35[13];
  if ( *v35 > 0.0 )
  {
    v9 = a3 + 2;
    if ( v35[5] > 0.0 )
    {
      v9 = a3 + 2;
      goto LABEL_6;
    }
  }
LABEL_7:
  v11 = (struct D2D_POINT_2F *)a3;
  v12 = 4;
LABEL_8:
  for ( i = 0; i < v12; ++i )
    ;
  if ( !v10 )
  {
    if ( v8 )
    {
      v37 = *a3;
      if ( *a3 > *v9 )
      {
        *a3 = *v9;
        *v9 = v37;
      }
      v38 = a3[1];
      v39 = a3[3];
      if ( v38 > v39 )
      {
        a3[1] = v39;
        a3[3] = v38;
      }
    }
    else
    {
      x = v43[0].x;
      v31 = 1LL;
      y = v43[0].y;
      v33 = v43[0].x;
      *a3 = v43[0].x;
      v34 = y;
      a3[1] = y;
      *v9 = v33;
      a3[3] = y;
      do
      {
        x = fminf(x, v43[v31].x);
        *a3 = x;
        y = fminf(y, v43[v31].y);
        a3[1] = y;
        v33 = fmaxf(v33, v43[v31].x);
        *v9 = v33;
        v34 = fmaxf(v34, v43[v31++].y);
        a3[3] = v34;
      }
      while ( v31 < 4 );
    }
  }
  result = *(_QWORD *)(a1 + 752);
  if ( result == *(_QWORD *)(a1 + 744) )
  {
    v16.m128_i32[0] = _xmm;
    LODWORD(v17) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
    LODWORD(v18) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
    LODWORD(v19) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
  }
  else
  {
    if ( *(_QWORD *)(result - 184) )
    {
      v15 = *(_DWORD *)(a1 + 3120);
      if ( v15 )
        v16 = *(__m128 *)(*(_QWORD *)(a1 + 3112) + 16LL * (unsigned int)(v15 - 1));
      else
        v16 = (__m128)_xmm;
      LODWORD(v17) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
      LODWORD(v18) = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
      LODWORD(v19) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
    }
    else
    {
      v40 = *(_QWORD *)(result - 192);
      v41 = *(void (__fastcall **)(__int64, __int128 *, struct D2D_POINT_2F *))(*(_QWORD *)v40 + 88LL);
      if ( (char *)v41 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
        IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v40, &v42);
      else
        v41(v40, &v42, v11);
      v16.m128_i32[0] = 0;
      v19 = 0.0;
      v18 = (float)(int)v42;
      v17 = (float)SDWORD1(v42);
    }
    result = *(_QWORD *)(a1 + 752);
    if ( result != *(_QWORD *)(a1 + 744) && *(_QWORD *)(result - 168) )
    {
      result = *(unsigned int *)(a1 + 3144);
      if ( (_DWORD)result )
      {
        v20 = (unsigned int)(result - 1);
        result = *(_QWORD *)(a1 + 3136);
        v21 = *(__m128 *)(result + 16 * v20);
      }
      else
      {
        v21 = (__m128)_xmm;
      }
      if ( v21.m128_f32[0] > v16.m128_f32[0] )
        v16.m128_i32[0] = v21.m128_i32[0];
      v22 = v19;
      v23 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
      if ( v23 > v19 )
      {
        v19 = v23;
        v22 = v23;
      }
      v24 = v18;
      v25 = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
      if ( v18 > v25 )
      {
        v18 = v25;
        v24 = v25;
      }
      v26 = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
      v27 = v17;
      if ( v17 > v26 )
      {
        v17 = v26;
        v27 = v26;
      }
      if ( v24 <= v16.m128_f32[0] || v27 <= v22 )
      {
        v17 = 0.0;
        v18 = 0.0;
        v19 = 0.0;
        v16.m128_i32[0] = 0;
      }
    }
  }
  v28 = *a3;
  if ( v16.m128_f32[0] > *a3 )
  {
    *a3 = v16.m128_f32[0];
    v28 = v16.m128_f32[0];
  }
  if ( v19 > a3[1] )
    a3[1] = v19;
  if ( *v9 > v18 )
  {
    *v9 = v18;
    v28 = *a3;
  }
  v29 = a3[3];
  if ( v29 > v17 )
  {
    a3[3] = v17;
    v29 = v17;
  }
  if ( *v9 <= v28 || v29 <= a3[1] )
  {
    a3[3] = 0.0;
    *v9 = 0.0;
    *(_QWORD *)a3 = 0LL;
  }
  return result;
}
