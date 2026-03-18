/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CGaussianBlurEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18022B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 */

_OWORD *__fastcall CGaussianBlurEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        struct D2D_RECT_F *a4,
        struct D2D_RECT_F *a5,
        _OWORD *a6)
{
  __m128 v6; // xmm2
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  _QWORD *v11; // rcx
  _OWORD *v12; // r8
  _OWORD *result; // rax
  __m128 v14; // [rsp+20h] [rbp-18h] BYREF

  v6 = (__m128)_mm_loadu_si128(a3);
  v7 = *(float *)(a1 + 176) * 3.0;
  v8 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
  v14 = v6;
  if ( v8 > v6.m128_f32[0] )
  {
    v9 = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
    v10 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
    if ( v9 <= v10 )
      goto LABEL_5;
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(v14.m128_f32, v7, v7);
    v8 = v14.m128_f32[2];
    v6.m128_i32[0] = v14.m128_i32[0];
  }
  v10 = v14.m128_f32[1];
  v9 = v14.m128_f32[3];
LABEL_5:
  *a5 = *a4;
  if ( v6.m128_f32[0] > a5->left )
    LODWORD(a5->left) = v6.m128_i32[0];
  if ( v10 > a5->top )
    a5->top = v10;
  if ( a5->right > v8 )
    a5->right = v8;
  if ( a5->bottom > v9 )
    a5->bottom = v9;
  if ( IsEmpty(a5) )
  {
    v11[1] = 0LL;
    *v11 = 0LL;
  }
  result = a6;
  *a6 = *v12;
  return result;
}
