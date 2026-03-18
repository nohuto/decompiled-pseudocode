/*
 * XREFs of ?InitializeMegaRectVisibleRegion@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C4330
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D57D0 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CMegaRectBatchCommand::InitializeMegaRectVisibleRegion(__int64 a1, float *a2)
{
  _DWORD *result; // rax
  float *v3; // r8
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm7_4
  float v7; // xmm10_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128i v12; // xmm2
  int v13; // r9d
  int v14; // r10d
  int v15; // eax
  int v16; // r11d
  _DWORD *v17; // rdx
  __m128 v18; // [rsp+0h] [rbp-68h]

  result = *(_DWORD **)(a1 + 8);
  v3 = (float *)*((_QWORD *)result + 2);
  v4 = (float)((float)(*(float *)(a1 + 32) * v3[15]) + (float)(*(float *)(a1 + 16) * v3[14])) + *(float *)(a1 + 64);
  v5 = (float)((float)(*(float *)(a1 + 32) * v3[17]) + (float)(*(float *)(a1 + 16) * v3[16])) + *(float *)(a1 + 64);
  v6 = (float)((float)(*(float *)(a1 + 36) * v3[15]) + (float)(*(float *)(a1 + 20) * v3[14])) + *(float *)(a1 + 68);
  v7 = (float)((float)(*(float *)(a1 + 36) * v3[17]) + (float)(*(float *)(a1 + 20) * v3[16])) + *(float *)(a1 + 68);
  v18.m128_i32[0] = fmaxf(*a2, fminf(v4, v5));
  v8 = fmaxf(a2[1], fminf(v6, v7));
  v9 = fminf(a2[3], fmaxf(v6, v7));
  v18.m128_f32[1] = v8;
  v18.m128_u64[1] = __PAIR64__(LODWORD(v9), COERCE_UNSIGNED_INT(fminf(a2[2], fmaxf(v4, v5))));
  if ( v18.m128_f32[2] > v18.m128_f32[0] && v9 > v8 )
  {
    v10 = _mm_mul_ps(_mm_add_ps(v18, g_halfFixedPointForRounding), (__m128)_xmm);
    v11 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v10);
    v12 = (__m128i)_mm_or_ps(_mm_andnot_ps(v11, (__m128)_mm_cvttps_epi32(v10)), _mm_and_ps(v11, DirectX::g_XMAbsMask));
    v13 = _mm_cvtsi128_si32(v12);
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
    if ( v13 >= v14
      || (v15 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4)), v16 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12)), v15 >= v16) )
    {
      result = *(_DWORD **)(a1 + 96);
      *result = 0;
    }
    else
    {
      v17 = *(_DWORD **)(a1 + 96);
      v17[3] = v15;
      *v17 = 2;
      v17[1] = v13;
      v17[2] = v14;
      v17[4] = 16;
      result = v17 + 5;
      v17[7] = v13;
      v17[8] = v14;
      v17[5] = v16;
      v17[6] = 16;
    }
  }
  return result;
}
