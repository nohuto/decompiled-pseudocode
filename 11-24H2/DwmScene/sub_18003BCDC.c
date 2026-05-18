/*
 * XREFs of sub_18003BCDC @ 0x18003BCDC
 * Callers:
 *     sub_180039FF4 @ 0x180039FF4 (sub_180039FF4.c)
 * Callees:
 *     sub_180017828 @ 0x180017828 (sub_180017828.c)
 *     sub_180039B00 @ 0x180039B00 (sub_180039B00.c)
 *     sub_180039B70 @ 0x180039B70 (sub_180039B70.c)
 */

__int64 __fastcall sub_18003BCDC(__int64 a1)
{
  __int64 v1; // r9
  __m128 v2; // xmm3
  __m128 v3; // xmm4
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm5
  __m128 v7; // xmm4
  __m128 v8; // xmm3
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __int128 *v15; // rax
  __int128 *v16; // rax
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm0
  __int64 v20; // r9
  __int64 result; // rax
  _OWORD v22[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v23[4]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v24[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v25[64]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v26[64]; // [rsp+120h] [rbp+20h] BYREF

  sub_180039B70((__int64)v24, (unsigned __int64 *)(a1 + 144));
  v2 = *(__m128 *)(v1 + 156);
  v3 = _mm_add_ps(v2, v2);
  v4 = _mm_mul_ps(v3, v2);
  v5 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 230), _mm_shuffle_ps(v2, v2, 208));
  v6 = _mm_sub_ps(
         _mm_sub_ps((__m128)xmmword_1800FA0C0, _mm_and_ps(_mm_shuffle_ps(v4, v4, 193), (__m128)xmmword_1800F8040)),
         _mm_and_ps(_mm_shuffle_ps(v4, v4, 218), (__m128)xmmword_1800F8040));
  v7 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 201), _mm_shuffle_ps(v2, v2, 255));
  v8 = _mm_add_ps(v7, v5);
  v9 = _mm_sub_ps(v5, v7);
  v10 = _mm_shuffle_ps(v8, v9, 73);
  v11 = _mm_shuffle_ps(v8, v9, 160);
  v12 = _mm_shuffle_ps(v10, v10, 120);
  v13 = _mm_shuffle_ps(v6, v12, 76);
  v14 = _mm_shuffle_ps(v6, v12, 237);
  v22[0] = _mm_shuffle_ps(v13, v13, 120);
  v22[1] = _mm_shuffle_ps(v14, v14, 114);
  v22[2] = _mm_shuffle_ps(_mm_shuffle_ps(v11, v11, 136), v6, 228);
  v22[3] = xmmword_1800F8150;
  sub_180039B00((__int64)v23, (unsigned int *)(v1 + 172));
  v15 = sub_180017828((__int64)v25, v23, v22);
  v16 = sub_180017828((__int64)v26, v15, v24);
  v17 = v16[2];
  v18 = v16[3];
  v19 = *v16;
  *(_OWORD *)(v20 + 240) = v16[1];
  *(_OWORD *)(v20 + 224) = v19;
  *(_OWORD *)(v20 + 256) = v17;
  *(_OWORD *)(v20 + 272) = v18;
  result = *(_QWORD *)(v20 + 208);
  *(_QWORD *)(v20 + 352) = result;
  return result;
}
