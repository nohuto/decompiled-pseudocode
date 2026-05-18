/*
 * XREFs of sub_180088C60 @ 0x180088C60
 * Callers:
 *     <none>
 * Callees:
 *     _o_cosf @ 0x18000C428 (_o_cosf.c)
 *     _o_sinf @ 0x18000C494 (_o_sinf.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001120C @ 0x18001120C (sub_18001120C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18003A648 @ 0x18003A648 (sub_18003A648.c)
 *     sub_18003AC48 @ 0x18003AC48 (sub_18003AC48.c)
 *     sub_18003B698 @ 0x18003B698 (sub_18003B698.c)
 *     sub_180088654 @ 0x180088654 (sub_180088654.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180088C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128 v5; // xmm1
  unsigned int v6; // r15d
  __m128 v7; // xmm2
  unsigned __int64 v8; // xmm0_8
  int v9; // eax
  bool v10; // si
  __m128 v11; // xmm6
  float v12; // xmm0_4
  __m128 v13; // xmm7
  float v14; // xmm8_4
  int v15; // eax
  void (__fastcall *v16)(__int64, unsigned __int64, _QWORD, __int64, bool, bool, bool, _DWORD); // rax
  float v17; // xmm6_4
  float v18; // xmm1_4
  __m128 v19; // xmm0
  float v20; // xmm8_4
  float v21; // xmm6_4
  __m128 v22; // xmm6
  unsigned int v23; // edi
  __m128 v24; // xmm2
  __m128 v25; // xmm4
  int v26; // xmm4_4
  unsigned __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  float v29; // [rsp+60h] [rbp-A8h]
  unsigned __int32 v30; // [rsp+70h] [rbp-98h]
  unsigned int v31; // [rsp+80h] [rbp-88h]
  unsigned __int64 v32; // [rsp+88h] [rbp-80h] BYREF
  int v33; // [rsp+90h] [rbp-78h]
  __int64 v34; // [rsp+98h] [rbp-70h] BYREF
  int v35; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v37; // [rsp+B0h] [rbp-58h]
  __int64 v38; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-48h]
  __int64 v40; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-38h]

  while ( _InterlockedExchange((volatile __int32 *)(a2 + 56), 1) )
    ;
  v5 = *(__m128 *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 24);
  v7 = *(__m128 *)(a2 + 28);
  *(_DWORD *)(a2 + 56) = 0;
  v8 = _mm_srli_si128((__m128i)v5, 8).m128i_u64[0];
  v9 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v5, 8));
  v10 = v9 == 1;
  v11 = 0LL;
  if ( v7.m128_f32[0] == 0.0
    || (v12 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0], v12 == 0.0)
    || v5.m128_f32[0] == 0.0
    || (v13 = _mm_shuffle_ps(v5, v5, 85), v13.m128_f32[0] == 0.0) )
  {
    v13 = 0LL;
  }
  else
  {
    v13.m128_f32[0] = v13.m128_f32[0] - v12;
    v11 = v5;
    v11.m128_f32[0] = v5.m128_f32[0] - v7.m128_f32[0];
  }
  v14 = *(float *)a2;
  if ( (v8 & 0x100000000LL) != 0 && v9 == 1 )
    goto LABEL_12;
  if ( (v8 & 0x400000000LL) != 0 )
  {
    if ( v9 == 1 )
    {
LABEL_12:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
      goto LABEL_15;
    }
  }
  else if ( v9 == 1 )
  {
    goto LABEL_15;
  }
  *(float *)(a1 + 1892) = v14 + *(float *)(a1 + 1892);
LABEL_15:
  v15 = *(_DWORD *)(a1 + 1868);
  if ( v15 == 1 )
  {
    v16 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, bool, bool, bool, _DWORD))(*(_QWORD *)a1 + 208LL);
  }
  else
  {
    if ( v15 != 2 )
      goto LABEL_23;
    if ( (v8 & 0x800000000LL) != 0 && *(_BYTE *)(a1 + 1864) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
    v16 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, bool, bool, bool, _DWORD))(*(_QWORD *)a1 + 232LL);
  }
  LOBYTE(a4) = BYTE4(v8) & 1;
  v16(
    a1,
    _mm_unpacklo_ps(v11, v13).m128_u64[0],
    v6,
    a4,
    (v8 & 0x400000000LL) != 0,
    (v8 & 0x800000000LL) != 0,
    v10,
    LODWORD(v14));
LABEL_23:
  if ( *(_DWORD *)(a1 + 1868) )
  {
    *(float *)(a1 + 1876) = sub_18001120C(*(float *)(a1 + 1876), *(float *)(a1 + 1820), *(float *)(a1 + 1824));
    v17 = *(float *)(a1 + 1832);
    LODWORD(v18) = sub_180088654(a1).m128_u32[0];
    v19 = (__m128)*(unsigned int *)(a1 + 1880);
    v19.m128_f32[0] = sub_18001120C(v19.m128_f32[0], v18, v17);
    *(_DWORD *)(a1 + 1880) = v19.m128_i32[0];
    v20 = *(float *)(a1 + 1872);
    v21 = *(float *)(a1 + 1876);
    o_cosf();
    o_sinf();
    o_sinf();
    o_cosf();
    o_cosf();
    *(float *)&v28 = v21 * v20;
    *((float *)&v28 + 1) = v21;
    v29 = v21 * v20;
    sub_18003AC48(&v28);
    v22 = (__m128)*(unsigned __int64 *)(a1 + 1800);
    v23 = *(_DWORD *)(a1 + 1808);
    v31 = v23;
    v24 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), _mm_movelh_ps((__m128)v28, (__m128)LODWORD(v29)));
    v30 = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
    v25 = 0LL;
    v25.m128_u64[0] = v24.m128_u64[0];
    v19.m128_u64[0] = _mm_add_ps(_mm_movelh_ps(v25, (__m128)v30), _mm_movelh_ps(v22, (__m128)v23)).m128_u64[0];
    sub_180011C04(a1 + 56, &v38);
    v32 = v19.m128_u64[0];
    v33 = v26;
    sub_18003B698(v38, (__int64)&v32);
    if ( v39 )
      sub_18001060C(v39);
    sub_180011C04(a1 + 56, &v40);
    v34 = 0x3F80000000000000LL;
    v35 = 0;
    v36 = v22.m128_u64[0];
    v37 = v23;
    sub_18003A648(v40, &v36, (__int64)&v34);
    if ( v41 )
      sub_18001060C(v41);
  }
  return sub_180057828(a1);
}
