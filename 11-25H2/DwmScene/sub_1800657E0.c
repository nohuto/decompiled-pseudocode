/*
 * XREFs of sub_1800657E0 @ 0x1800657E0
 * Callers:
 *     sub_18005F680 @ 0x18005F680 (sub_18005F680.c)
 *     sub_1800632D4 @ 0x1800632D4 (sub_1800632D4.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180013D0C @ 0x180013D0C (sub_180013D0C.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_1800614FC @ 0x1800614FC (sub_1800614FC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800657E0(__int64 a1, __int64 *a2, char a3, char a4)
{
  __int64 v8; // rdi
  __m128 v9; // xmm8
  __m128 v10; // xmm7
  float v11; // xmm6_4
  __int64 v12; // rcx
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128 v16; // xmm0
  float v17; // xmm7_4
  __int64 v18; // rbx
  float v19; // xmm0_4
  __int64 v20; // rbx
  __int64 v21; // [rsp+28h] [rbp-29h] BYREF
  __int64 v22; // [rsp+30h] [rbp-21h]
  __int64 v23; // [rsp+38h] [rbp-19h] BYREF
  __int64 v24; // [rsp+40h] [rbp-11h]
  unsigned int *v25; // [rsp+48h] [rbp-9h] BYREF
  __int64 v26; // [rsp+50h] [rbp-1h]
  __int64 v27; // [rsp+58h] [rbp+7h] BYREF
  __int64 v28; // [rsp+60h] [rbp+Fh]

  if ( *a2 )
  {
    sub_180011B04(*a2 + 56, &v21);
    sub_18001258C(v21, &v23);
    if ( v22 )
      sub_18001050C(v22);
    v8 = sub_1800323A0(a1, *(_DWORD *)(v23 + 112));
    v9 = (__m128)0x3F800000u;
    v10 = (__m128)0x3F800000u;
    LODWORD(v22) = 1065353216;
    v11 = 0.0;
    sub_1800614FC(v12, &v27, &v23);
    if ( v27 )
    {
      sub_180013D0C(v27, &v25);
      if ( v25 )
      {
        v10 = (__m128)v25[26];
        v11 = v10.m128_f32[0] + v10.m128_f32[0];
        v9 = (__m128)v25[25];
        LODWORD(v22) = v25[27];
      }
      if ( v26 )
        sub_18001050C(v26);
    }
    if ( v28 )
      sub_18001050C(v28);
    v13 = 0LL;
    v13.m128_u64[0] = _mm_unpacklo_ps(v9, v10).m128_u64[0];
    v14 = _mm_movelh_ps(v13, (__m128)(unsigned int)v22);
    v15 = _mm_mul_ps(v14, v14);
    v16 = _mm_shuffle_ps(v15, v15, 102);
    v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
    LODWORD(v17) = _mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0)).m128_u32[0];
    if ( a3 )
    {
      v18 = *a2;
      v19 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6828);
      *(_DWORD *)(v18 + 1800) = 0;
      *(float *)(v18 + 1804) = v19 * v11;
      *(_DWORD *)(v18 + 1808) = 0;
    }
    if ( a4 )
    {
      v20 = *a2;
      *(float *)(v20 + 1812) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6948)
                             * v17;
    }
    if ( v24 )
      sub_18001050C(v24);
  }
}
