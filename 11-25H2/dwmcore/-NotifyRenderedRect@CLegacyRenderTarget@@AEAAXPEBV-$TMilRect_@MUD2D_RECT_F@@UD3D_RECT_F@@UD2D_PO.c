/*
 * XREFs of ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180052640
 * Callers:
 *     _lambda_8d63a026ee05ea8998b7edda19b5853b_::operator() @ 0x18028959C (_lambda_8d63a026ee05ea8998b7edda19b5853b_--operator().c)
 * Callees:
 *     ?GetTransform@CMonitorTransform@@QEBAAEBVCMILMatrix@@_N@Z @ 0x180052B50 (-GetTransform@CMonitorTransform@@QEBAAEBVCMILMatrix@@_N@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180055430 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x180055480 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18008F6A0 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::NotifyRenderedRect(__int64 a1, const struct D2D_RECT_F *a2, char a3)
{
  __m128 v3; // xmm2
  const struct CMILMatrix *(__fastcall *v6)(CLegacyRenderTarget *__hidden); // rax
  const struct CMILMatrix *Transform; // rax
  const struct CMILMatrix *v8; // r9
  char v9; // al
  __m128i x_low; // xmm3
  __m128i v11; // xmm10
  __m128i y_low; // xmm11
  __m128i v13; // xmm8
  int v14; // ecx
  __m128 v15; // xmm2
  __m128 v16; // xmm2
  int v17; // ecx
  __m128 v18; // xmm2
  __m128 v19; // xmm2
  int v20; // ecx
  __m128 v21; // xmm2
  __m128 v22; // xmm2
  int v23; // ecx
  __int64 v24; // rcx
  __int128 *v25; // rdx
  __int64 result; // rax
  float *v27; // r9
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128 v30; // rt1
  __m128 v31; // rt1
  __m128 v32; // rt1
  __m128 v33; // rt1
  float x; // xmm1_4
  float y; // xmm0_4
  unsigned __int64 v36; // rcx
  float v37; // [rsp+20h] [rbp-B8h]
  float v38; // [rsp+20h] [rbp-B8h]
  float v39; // [rsp+20h] [rbp-B8h]
  float v40; // [rsp+20h] [rbp-B8h]
  __int128 v41; // [rsp+30h] [rbp-A8h] BYREF
  struct D2D_POINT_2F v42[4]; // [rsp+40h] [rbp-98h] BYREF

  if ( !a2 )
  {
    v24 = *(_QWORD *)(a1 + 200);
    v25 = 0LL;
    goto LABEL_26;
  }
  v41 = 0LL;
  if ( !a3 )
  {
    v6 = *(const struct CMILMatrix *(__fastcall **)(CLegacyRenderTarget *__hidden))(*(_QWORD *)(a1 + 88) + 64LL);
    if ( v6 == CLegacyRenderTarget::GetDeviceTransform )
      Transform = CMonitorTransform::GetTransform((CMonitorTransform *)(a1 + 30888), *(_BYTE *)(a1 + 19689));
    else
      Transform = v6((CLegacyRenderTarget *)(a1 + 88));
    v8 = Transform;
    v9 = (char)(4 * *((_BYTE *)Transform + 64)) >> 6;
    if ( v9 <= 0 )
    {
      if ( v9 < 0 )
      {
LABEL_7:
        v11 = (__m128i)*((unsigned int *)v8 + 12);
        v13 = (__m128i)*((unsigned int *)v8 + 13);
        x_low = v11;
        *(float *)x_low.m128i_i32 = *(float *)v11.m128i_i32 + a2->left;
        *(float *)v11.m128i_i32 = *(float *)v11.m128i_i32 + a2->right;
        y_low = v13;
        *(float *)y_low.m128i_i32 = *(float *)v13.m128i_i32 + a2->top;
        *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 + a2->bottom;
LABEL_8:
        if ( (_mm_cvtsi128_si32(x_low) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v3.m128_f32[0] = (float)(int)*(float *)x_low.m128i_i32 - *(float *)x_low.m128i_i32;
          v30.m128_f32[0] = FLOAT_N0_5;
          v14 = (int)*(float *)x_low.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v3, v30));
        }
        else
        {
          v37 = *(float *)x_low.m128i_i32 + 6291456.25;
          v14 = (int)(LODWORD(v37) << 10) >> 11;
        }
        v15 = (__m128)x_low;
        v15.m128_f32[0] = *(float *)x_low.m128i_i32 - (float)v14;
        v16 = _mm_and_ps(v15, (__m128)(unsigned int)_xmm);
        if ( v16.m128_f32[0] > 0.00390625 )
          v14 = CFloatFPU::FloorSat(*(float *)x_low.m128i_i32);
        LODWORD(v41) = v14;
        if ( (_mm_cvtsi128_si32(y_low) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v16.m128_f32[0] = (float)(int)*(float *)y_low.m128i_i32 - *(float *)y_low.m128i_i32;
          v31.m128_f32[0] = FLOAT_N0_5;
          v17 = (int)*(float *)y_low.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v16, v31));
        }
        else
        {
          v38 = *(float *)y_low.m128i_i32 + 6291456.25;
          v17 = (int)(LODWORD(v38) << 10) >> 11;
        }
        v18 = (__m128)y_low;
        v18.m128_f32[0] = *(float *)y_low.m128i_i32 - (float)v17;
        v19 = _mm_and_ps(v18, (__m128)(unsigned int)_xmm);
        if ( v19.m128_f32[0] > 0.00390625 )
          v17 = CFloatFPU::FloorSat(*(float *)y_low.m128i_i32);
        DWORD1(v41) = v17;
        if ( (_mm_cvtsi128_si32(v11) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v19.m128_f32[0] = (float)(int)*(float *)v11.m128i_i32 - *(float *)v11.m128i_i32;
          v32.m128_f32[0] = FLOAT_N0_5;
          v20 = (int)*(float *)v11.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v19, v32));
        }
        else
        {
          v39 = *(float *)v11.m128i_i32 + 6291456.25;
          v20 = (int)(LODWORD(v39) << 10) >> 11;
        }
        v21 = (__m128)v11;
        v21.m128_f32[0] = *(float *)v11.m128i_i32 - (float)v20;
        v22 = _mm_and_ps(v21, (__m128)(unsigned int)_xmm);
        if ( v22.m128_f32[0] > 0.00390625 )
          v20 = CFloatFPU::CeilingSat(*(float *)v11.m128i_i32);
        DWORD2(v41) = v20;
        if ( (_mm_cvtsi128_si32(v13) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v22.m128_f32[0] = (float)(int)*(float *)v13.m128i_i32 - *(float *)v13.m128i_i32;
          v33.m128_f32[0] = FLOAT_N0_5;
          v23 = (int)*(float *)v13.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v22, v33));
        }
        else
        {
          v40 = *(float *)v13.m128i_i32 + 6291456.25;
          v23 = (int)(LODWORD(v40) << 10) >> 11;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v13.m128i_i32 - (float)v23) & _xmm) > 0.00390625 )
          v23 = CFloatFPU::CeilingSat(*(float *)v13.m128i_i32);
        HIDWORD(v41) = v23;
        goto LABEL_25;
      }
      if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v8) )
      {
        v3 = (__m128)LODWORD(FLOAT_0_000081380211);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v8 - 1.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v8 + 5) - 1.0) & _xmm) < 0.000081380211 )
        {
          *((_BYTE *)v8 + 64) |= 0x30u;
          goto LABEL_7;
        }
      }
      *((_BYTE *)v8 + 64) &= ~0x20u;
      *((_BYTE *)v8 + 64) |= 0x10u;
    }
    if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v8) )
    {
      v3 = (__m128)*(unsigned int *)v27;
      x_low = (__m128i)v3;
      y_low = (__m128i)*((unsigned int *)v27 + 5);
      v11 = (__m128i)v3;
      v13 = y_low;
      *(float *)x_low.m128i_i32 = (float)(v3.m128_f32[0] * a2->left) + v27[12];
      *(float *)y_low.m128i_i32 = (float)(*(float *)y_low.m128i_i32 * a2->top) + v27[13];
      *(float *)v11.m128i_i32 = (float)(v3.m128_f32[0] * a2->right) + v27[12];
      *(float *)v13.m128i_i32 = (float)(*(float *)v13.m128i_i32 * a2->bottom) + v27[13];
      if ( v3.m128_f32[0] <= 0.0 || v27[5] <= 0.0 )
      {
        if ( *(float *)x_low.m128i_i32 > *(float *)v11.m128i_i32 )
        {
          v28 = x_low;
          x_low = v11;
          v11 = v28;
        }
        if ( *(float *)y_low.m128i_i32 > *(float *)v13.m128i_i32 )
        {
          v29 = y_low;
          y_low = v13;
          v13 = v29;
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v27, a2, v42);
      x_low = (__m128i)LODWORD(v42[0].x);
      v36 = 1LL;
      y_low = (__m128i)LODWORD(v42[0].y);
      v11 = (__m128i)LODWORD(v42[0].x);
      v13 = (__m128i)LODWORD(v42[0].y);
      do
      {
        x = v42[v36].x;
        y = v42[v36].y;
        *(float *)x_low.m128i_i32 = fminf(*(float *)x_low.m128i_i32, x);
        ++v36;
        *(float *)y_low.m128i_i32 = fminf(*(float *)y_low.m128i_i32, y);
        *(float *)v11.m128i_i32 = fmaxf(*(float *)v11.m128i_i32, x);
        *(float *)v13.m128i_i32 = fmaxf(*(float *)v13.m128i_i32, y);
      }
      while ( v36 < 4 );
    }
    goto LABEL_8;
  }
  v41 = *(_OWORD *)PixelAlign(v42, a2);
LABEL_25:
  v24 = *(_QWORD *)(a1 + 200);
  v25 = &v41;
LABEL_26:
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v24 + 24) + 112LL))(v24 + 24, v25);
  *(_BYTE *)(a1 + 33896) = 1;
  return result;
}
