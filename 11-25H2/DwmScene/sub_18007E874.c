/*
 * XREFs of sub_18007E874 @ 0x18007E874
 * Callers:
 *     sub_180090830 @ 0x180090830 (sub_180090830.c)
 * Callees:
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 */

__int64 __fastcall sub_18007E874(_QWORD *a1, float a2, float a3, float a4, int a5, int a6)
{
  __int64 v7; // rcx
  __int64 v10; // rax
  __int128 v11; // xmm0
  __m128 v12; // xmm5
  __int128 v13; // xmm2
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rcx
  __int64 v21; // rax
  __m128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rcx
  __int64 v26; // rax
  __m128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __m128 v30; // [rsp+28h] [rbp-39h] BYREF
  __m128 v31; // [rsp+38h] [rbp-29h]
  __int128 v32; // [rsp+48h] [rbp-19h]
  __int128 v33; // [rsp+58h] [rbp-9h]
  __int64 v34; // [rsp+68h] [rbp+7h]

  v7 = a1[6];
  v10 = *(_QWORD *)(v7 + 112);
  v11 = *(_OWORD *)(v10 + 32);
  v12 = *(__m128 *)(v10 + 16);
  v13 = *(_OWORD *)(v10 + 48);
  v30 = *(__m128 *)v10;
  v32 = v11;
  *(_QWORD *)&v11 = *(_QWORD *)(v10 + 64);
  v31 = v12;
  v33 = v13;
  v34 = v11;
  if ( _mm_shuffle_ps(v30, v30, 255).m128_f32[0] != a2
    || _mm_shuffle_ps(v12, v12, 85).m128_f32[0] != a3
    || v12.m128_f32[0] != a4
    || (result = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 8)), (_BYTE)result != 1)
    || HIDWORD(v34) != a6 )
  {
    v30.m128_f32[3] = a2;
    v31.m128_u64[0] = __PAIR64__(LODWORD(a3), LODWORD(a4));
    v31.m128_i8[8] = 1;
    HIDWORD(v34) = a6;
    result = sub_18007EEC0(v7, &v30, 0LL);
    v15 = a1[8];
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 112);
      v17 = *(__m128 *)(v16 + 16);
      v30 = *(__m128 *)v16;
      v18 = *(_OWORD *)(v16 + 32);
      v31 = v17;
      v19 = *(_OWORD *)(v16 + 48);
      v31.m128_i8[8] = 1;
      v32 = v18;
      LODWORD(v34) = *(_QWORD *)(v16 + 64);
      HIDWORD(v34) = a6;
      v30.m128_f32[3] = a2;
      v31.m128_u64[0] = __PAIR64__(LODWORD(a3), LODWORD(a4));
      v33 = v19;
      result = sub_18007EEC0(v15, &v30, 0LL);
    }
    v20 = a1[10];
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 112);
      v22 = *(__m128 *)(v21 + 16);
      v30 = *(__m128 *)v21;
      v23 = *(_OWORD *)(v21 + 32);
      v31 = v22;
      v24 = *(_OWORD *)(v21 + 48);
      v31.m128_i8[8] = 1;
      v32 = v23;
      LODWORD(v34) = *(_QWORD *)(v21 + 64);
      HIDWORD(v34) = a6;
      v30.m128_f32[3] = a2;
      v31.m128_u64[0] = __PAIR64__(LODWORD(a3), LODWORD(a4));
      v33 = v24;
      result = sub_18007EEC0(v20, &v30, 0LL);
    }
    v25 = a1[12];
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 112);
      v27 = *(__m128 *)(v26 + 16);
      v30 = *(__m128 *)v26;
      v28 = *(_OWORD *)(v26 + 32);
      v31 = v27;
      v29 = *(_OWORD *)(v26 + 48);
      v31.m128_i8[8] = 1;
      v32 = v28;
      LODWORD(v34) = *(_QWORD *)(v26 + 64);
      HIDWORD(v34) = a6;
      v30.m128_f32[3] = a2;
      v31.m128_u64[0] = __PAIR64__(LODWORD(a3), LODWORD(a4));
      v33 = v29;
      return sub_18007EEC0(v25, &v30, 0LL);
    }
  }
  return result;
}
