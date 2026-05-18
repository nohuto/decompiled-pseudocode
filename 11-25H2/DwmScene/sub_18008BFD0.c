/*
 * XREFs of sub_18008BFD0 @ 0x18008BFD0
 * Callers:
 *     <none>
 * Callees:
 *     _o_atan2f @ 0x18000BFB0 (_o_atan2f.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_180012D60 @ 0x180012D60 (sub_180012D60.c)
 *     sub_180039E08 @ 0x180039E08 (sub_180039E08.c)
 *     sub_18003A4E8 @ 0x18003A4E8 (sub_18003A4E8.c)
 *     sub_18003AAE8 @ 0x18003AAE8 (sub_18003AAE8.c)
 *     sub_18003B8B8 @ 0x18003B8B8 (sub_18003B8B8.c)
 *     sub_18003B924 @ 0x18003B924 (sub_18003B924.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18008BF3C @ 0x18008BF3C (sub_18008BF3C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008BFD0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  float v4; // xmm0_4
  __int64 result; // rax
  float v6; // xmm9_4
  __int64 v7; // rbx
  __m128 v8; // xmm8
  __m128 v9; // xmm3
  __m128 v10; // xmm6
  __m128 v11; // xmm0
  __m128 v12; // xmm8
  unsigned int v13; // xmm6_4
  __m128 v14; // xmm7
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  unsigned __int64 v17; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v18; // [rsp+30h] [rbp-51h]
  unsigned __int64 v19; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-41h]
  unsigned __int64 v21; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-31h]
  __int64 v23; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int32 v24; // [rsp+60h] [rbp-21h]
  __int64 v25; // [rsp+68h] [rbp-19h] BYREF
  __int64 v26; // [rsp+70h] [rbp-11h]
  __int64 v27; // [rsp+78h] [rbp-9h] BYREF
  __int64 v28; // [rsp+80h] [rbp-1h]
  __int64 v29; // [rsp+88h] [rbp+7h] BYREF
  __int64 v30; // [rsp+90h] [rbp+Fh]

  sub_180011B04(a1 + 56, &v27);
  v2 = v27;
  sub_180012554(v27, &v29);
  sub_180039E08(v2, &v25);
  v19 = *(_QWORD *)(a1 + 112);
  v20 = *(_DWORD *)(a1 + 120);
  sub_18003B8B8(v25, (__int64)&v21, &v19);
  v19 = *(_QWORD *)(a1 + 124);
  v20 = *(_DWORD *)(a1 + 132);
  sub_18003B8B8(v25, (__int64)&v17, &v19);
  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 && *(_DWORD *)(a1 + 88) )
  {
    v19 = 0LL;
    v20 = 1065353216;
    sub_18003B924(v3, (__int64)&v23, &v19);
    v19 = (unsigned int)v23;
    v20 = v24;
    sub_18003AAE8(&v19);
    v4 = *(float *)&v20;
    o_atan2f();
    result = o_atan2f();
    v6 = (float)(v4 - 1.0) + *(float *)(a1 + 136);
    if ( *(_DWORD *)(a1 + 88) == 2 )
    {
      v7 = v25;
      sub_18003BCDC(v25);
      v24 = *(_DWORD *)(v7 + 152);
      v8 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(v7 + 144), (__m128)v24);
      v9 = _mm_sub_ps(_mm_movelh_ps((__m128)v17, (__m128)v18), v8);
      v10 = _mm_sub_ps(_mm_movelh_ps((__m128)v21, (__m128)v22), v8);
      v23 = v9.m128_u64[0];
      v24 = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
      sub_18008BF3C((__int64)&v19, (__int64)&v23, v6);
      v23 = v10.m128_u64[0];
      v24 = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
      sub_18008BF3C((__int64)&v21, (__int64)&v23, v6);
      v11 = _mm_add_ps(v8, _mm_movelh_ps((__m128)v21, (__m128)v22));
      v23 = v11.m128_u64[0];
      v24 = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
      sub_180012D60(v2, &v23);
      v12 = _mm_add_ps(v8, _mm_movelh_ps((__m128)v19, (__m128)v20));
      v19 = v12.m128_u64[0];
      *(_DWORD *)(a1 + 140) = v12.m128_i32[0];
      *(_DWORD *)(a1 + 144) = HIDWORD(v19);
      *(_DWORD *)(a1 + 148) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
LABEL_5:
      v23 = 0x3F80000000000000LL;
      v24 = 0;
      v21 = *(_QWORD *)(a1 + 140);
      v22 = *(_DWORD *)(a1 + 148);
      result = sub_18003A4E8(v2, &v21, (__int64)&v23);
      goto LABEL_9;
    }
    if ( *(_DWORD *)(a1 + 88) == 1 )
    {
      v13 = v18;
      v14 = _mm_movelh_ps((__m128)v17, (__m128)v18);
      v15 = _mm_sub_ps(_mm_movelh_ps((__m128)v21, (__m128)v22), v14);
      v23 = v15.m128_u64[0];
      v24 = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
      sub_18008BF3C((__int64)&v21, (__int64)&v23, v6);
      *(_QWORD *)(a1 + 140) = v17;
      *(_DWORD *)(a1 + 148) = v13;
      v16 = _mm_add_ps(_mm_movelh_ps((__m128)v21, (__m128)v22), v14);
      v23 = v16.m128_u64[0];
      v24 = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
      sub_180012D60(v2, &v23);
      goto LABEL_5;
    }
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 112);
    v24 = *(_DWORD *)(a1 + 120);
    sub_180012D60(v2, &v23);
    v23 = 0x3F80000000000000LL;
    v24 = 0;
    v21 = v17;
    v22 = v18;
    result = sub_18003A4E8(v2, &v21, (__int64)&v23);
    *(_QWORD *)(a1 + 140) = v17;
    *(_DWORD *)(a1 + 148) = v18;
  }
LABEL_9:
  if ( v26 )
    result = sub_18001050C(v26);
  if ( v30 )
    result = sub_18001050C(v30);
  if ( v28 )
    return sub_18001050C(v28);
  return result;
}
