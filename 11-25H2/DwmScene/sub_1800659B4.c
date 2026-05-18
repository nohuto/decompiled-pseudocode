/*
 * XREFs of sub_1800659B4 @ 0x1800659B4
 * Callers:
 *     sub_18005F680 @ 0x18005F680 (sub_18005F680.c)
 *     sub_180061FF0 @ 0x180061FF0 (sub_180061FF0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012D60 @ 0x180012D60 (sub_180012D60.c)
 *     sub_180013D0C @ 0x180013D0C (sub_180013D0C.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_180039960 @ 0x180039960 (sub_180039960.c)
 *     sub_18003B2D0 @ 0x18003B2D0 (sub_18003B2D0.c)
 *     sub_18003B348 @ 0x18003B348 (sub_18003B348.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 *     sub_1800614FC @ 0x1800614FC (sub_1800614FC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int8 __fastcall sub_1800659B4(__int64 a1, __int64 *a2, char a3)
{
  __m128 v3; // xmm0
  __int64 v7; // rbx
  unsigned __int8 result; // al
  __m128 v9; // xmm11
  __int64 v10; // r8
  char v11; // al
  char v12; // r15
  __m128 v13; // xmm12
  __m128 v14; // xmm13
  double v15; // xmm0_8
  unsigned int v16; // xmm6_4
  double v17; // xmm0_8
  unsigned int v18; // xmm8_4
  double v19; // xmm0_8
  unsigned int v20; // xmm9_4
  double v21; // xmm0_8
  unsigned __int32 v22; // xmm10_4
  __int64 v23; // rcx
  __int64 v24; // rbx
  __m128 v25; // xmm6
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  unsigned __int64 v30; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int32 v31; // [rsp+30h] [rbp-71h]
  unsigned int v32; // [rsp+40h] [rbp-61h]
  __int64 v33; // [rsp+48h] [rbp-59h] BYREF
  __int64 v34; // [rsp+50h] [rbp-51h]
  __int64 v35; // [rsp+58h] [rbp-49h] BYREF
  __int128 v36; // [rsp+60h] [rbp-41h]

  v7 = sub_1800323A0(a1, *(_DWORD *)(*a2 + 112));
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C49A8, 0LL);
  if ( result )
  {
    *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C4988);
    v9 = v3;
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C49C8, v10);
    v12 = v11;
    *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C49E8);
    v13 = v3;
    *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C4A08);
    v14 = v3;
    v15 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C4A28);
    v16 = LODWORD(v15);
    v17 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C4A48);
    v18 = LODWORD(v17);
    v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C4A68);
    v20 = LODWORD(v19);
    v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C4A88);
    v22 = LODWORD(v21);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C4AA8);
    result = (unsigned __int8)sub_1800614FC(v23, &v35, a2);
    v24 = v35;
    if ( v35 )
    {
      if ( a3 || sub_180040290(a1 + 1419) )
      {
        v32 = v16;
        v25 = 0LL;
        v31 = 0;
        if ( v12 )
        {
          sub_180013D0C(v24, &v33);
          if ( v33 )
          {
            v25 = (__m128)*(unsigned int *)(v33 + 104);
            v25.m128_f32[0] = v25.m128_f32[0] + 0.0;
          }
          if ( v34 )
            sub_18001050C(v34);
        }
        v26 = 0LL;
        v26.m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, v25).m128_u64[0];
        v27 = 0LL;
        v27.m128_u64[0] = _mm_unpacklo_ps(v13, v14).m128_u64[0];
        v28 = _mm_add_ps(_mm_movelh_ps(v27, (__m128)v32), _mm_movelh_ps(v26, (__m128)v31));
        v30 = v28.m128_u64[0];
        v31 = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
        sub_180012D60(v24, &v30);
        if ( a3 )
          goto LABEL_19;
      }
      if ( sub_180040290(a1 + 1420) )
      {
LABEL_19:
        v30 = __PAIR64__(v20, v18);
        v31 = v22;
        sub_180039960((__int64)&v33, &v30);
        sub_18003B2D0(v24, &v33);
        if ( a3 )
          goto LABEL_14;
      }
      result = sub_180040290(a1 + 1418);
      if ( result )
      {
LABEL_14:
        sub_18003BCDC(v24);
        v32 = *(_DWORD *)(v24 + 180);
        v29 = _mm_mul_ps(
                _mm_shuffle_ps(v9, v9, 0),
                _mm_movelh_ps((__m128)*(unsigned __int64 *)(v24 + 172), (__m128)v32));
        v30 = v29.m128_u64[0];
        v31 = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
        result = sub_18003B348(v24, &v30);
      }
    }
    if ( (_QWORD)v36 )
      return sub_18001050C(v36);
  }
  return result;
}
