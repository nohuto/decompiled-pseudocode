/*
 * XREFs of ?CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18023BDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180170C98 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 */

__int64 __fastcall CFilterEffectLayer::CalcDeviceTransformDelta(
        CFilterEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __m128i v3; // xmm4
  __m128i v4; // xmm1
  __m128i v5; // xmm3
  __m128i v6; // xmm2
  __int128 v7; // xmm0
  int v8; // eax
  __int128 v9; // xmm1
  __int64 v10; // r10
  __int128 v11; // xmm0
  float v13[2]; // [rsp+20h] [rbp-19h] BYREF
  float v14; // [rsp+28h] [rbp-11h]
  float v15; // [rsp+2Ch] [rbp-Dh]
  float v16; // [rsp+30h] [rbp-9h] BYREF
  float v17; // [rsp+34h] [rbp-5h]
  float v18; // [rsp+38h] [rbp-1h]
  float v19; // [rsp+3Ch] [rbp+3h]
  _OWORD v20[4]; // [rsp+40h] [rbp+7h] BYREF
  int v21; // [rsp+80h] [rbp+47h]

  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v21 = 0;
  v13[0] = 0.0;
  v13[1] = 0.0;
  v16 = _mm_cvtepi32_ps(v4).m128_f32[0];
  v17 = _mm_cvtepi32_ps(v6).m128_f32[0];
  v14 = _mm_cvtepi32_ps(v3).m128_f32[0];
  v15 = _mm_cvtepi32_ps(v5).m128_f32[0];
  v18 = v14 + v16;
  v19 = v15 + v17;
  CMILMatrix::InferAffineMatrix((__int64)v20, &v16, v13);
  v7 = v20[1];
  v8 = v21;
  v9 = v20[2];
  *(_OWORD *)v10 = v20[0];
  *(_OWORD *)(v10 + 16) = v7;
  v11 = v20[3];
  *(_OWORD *)(v10 + 32) = v9;
  *(_OWORD *)(v10 + 48) = v11;
  *(_DWORD *)(v10 + 64) = v8;
  return 0LL;
}
