/*
 * XREFs of sub_180055CE0 @ 0x180055CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_18003769C @ 0x18003769C (sub_18003769C.c)
 *     sub_180039F04 @ 0x180039F04 (sub_180039F04.c)
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_180040728 @ 0x180040728 (sub_180040728.c)
 *     sub_18004D14C @ 0x18004D14C (sub_18004D14C.c)
 *     sub_18004D168 @ 0x18004D168 (sub_18004D168.c)
 *     sub_18004D1D8 @ 0x18004D1D8 (sub_18004D1D8.c)
 *     sub_1800572F0 @ 0x1800572F0 (sub_1800572F0.c)
 *     sub_180057334 @ 0x180057334 (sub_180057334.c)
 *     sub_1800573B8 @ 0x1800573B8 (sub_1800573B8.c)
 *     sub_1800573FC @ 0x1800573FC (sub_1800573FC.c)
 *     sub_1800574A0 @ 0x1800574A0 (sub_1800574A0.c)
 *     sub_18005757C @ 0x18005757C (sub_18005757C.c)
 *     sub_180058E38 @ 0x180058E38 (sub_180058E38.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 *     sub_18007C380 @ 0x18007C380 (sub_18007C380.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180055CE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // r8
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // r8
  _QWORD *v10; // rbx
  float v11; // xmm6_4
  float v12; // xmm0_4
  __int64 v13; // rax
  __int128 v14; // xmm14
  __m128 v15; // xmm10
  __m128 v16; // xmm9
  char v17; // al
  __m128i v18; // xmm0
  __m128i v19; // xmm6
  char v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __m128 v24; // xmm1
  __m128 v25; // xmm12
  __m128 v26; // xmm3
  __m128 v27; // xmm4
  double v28; // xmm5_8
  __m128 v29; // xmm2
  __m128 v30; // xmm3
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  float v33; // xmm9_4
  float v34; // xmm10_4
  float v35; // xmm12_4
  float v36; // xmm13_4
  int v37; // edx
  int v38; // eax
  int v39; // ecx
  float v40; // xmm1_4
  float v41; // xmm0_4
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 *v46; // rax
  __m128 v47; // xmm2
  __m128 v48; // xmm6
  unsigned __int32 v49; // xmm6_4
  __int128 *v50; // rax
  __int64 result; // rax
  _BYTE v52[20]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v53; // [rsp+5Ch] [rbp-ACh]
  __int128 v54; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v55; // [rsp+78h] [rbp-90h] BYREF
  __int128 v56; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v57; // [rsp+98h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-68h]
  __int128 v59; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-50h]
  __int128 v61; // [rsp+C8h] [rbp-40h]
  __int128 v62; // [rsp+D8h] [rbp-30h]
  __int128 v63; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v64; // [rsp+F8h] [rbp-10h]
  __int128 v65; // [rsp+108h] [rbp+0h]
  __int128 v66; // [rsp+118h] [rbp+10h]
  __m128i v67; // [rsp+128h] [rbp+20h]
  char v68; // [rsp+138h] [rbp+30h]
  unsigned __int64 v69; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned __int64 v70; // [rsp+210h] [rbp+108h]

  sub_180057334(a1, &v57, a2);
  if ( (*(_BYTE *)(a1 + 440) & 1) != 0 )
  {
    v5 = *(_QWORD *)(sub_180078418(a1) + 512);
    if ( *(_QWORD *)(a1 + 200) )
    {
      v54 = 0LL;
      sub_18004D168(v5, a1 + 184, &v54);
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      v54 = 0LL;
      sub_18004D168(v5, a1 + 216, &v54);
    }
    if ( *(_QWORD *)(a1 + 264) )
    {
      v59 = xmmword_1800F7620;
      v60 = xmmword_1800F7630;
      v61 = xmmword_1800F7640;
      v62 = xmmword_1800F7650;
      sub_18004D14C(v5);
    }
  }
  v6 = (_QWORD *)(a1 + 152);
  if ( *(_QWORD *)(a1 + 136) || *v6 )
  {
    v10 = v57;
    sub_18003769C((__int64)v57, (_QWORD *)(a1 + 136), v6);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(*(_QWORD *)*a3 + 40LL))(*a3, &v55);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 32LL))(*a3, &v54);
    v9 = (_QWORD *)v7;
    v10 = v57;
    sub_18003769C((__int64)v57, v8, v9);
    if ( *((_QWORD *)&v54 + 1) )
      sub_18001050C(*((__int64 *)&v54 + 1));
    if ( v55.m128i_i64[1] )
      sub_18001050C(v55.m128i_i64[1]);
    v11 = (float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 88LL))(*a3);
    v12 = (float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 80LL))(*a3);
    v13 = v10[12];
    *(_QWORD *)(v13 + 14544) = 0LL;
    *(float *)(v13 + 14552) = v12;
    *(float *)(v13 + 14556) = v11;
    *(_DWORD *)(v13 + 14560) = 0;
    *(_DWORD *)(v13 + 14564) = 1065353216;
  }
  v14 = xmmword_18018C390;
  v56 = xmmword_18018C390;
  sub_1800572F0(a1, &v69);
  *(_QWORD *)&v54 = 0LL;
  v15 = (__m128)(unsigned int)v69;
  DWORD2(v54) = (int)o_roundf();
  v16 = (__m128)HIDWORD(v69);
  HIDWORD(v54) = (int)o_roundf();
  v17 = 0;
  v68 = 0;
  if ( *(_BYTE *)(a1 + 388) )
  {
    v18 = *(__m128i *)(a1 + 372);
    v67 = v18;
    v17 = 1;
    v68 = 1;
  }
  else
  {
    v18 = v67;
  }
  if ( v17 )
  {
    v55 = v18;
  }
  else
  {
    sub_1800574A0(a1, v52);
    v55.m128i_i32[0] = (int)o_roundf();
    v55.m128i_i32[1] = (int)o_roundf();
    v55.m128i_i32[2] = (int)o_roundf();
    v55.m128i_i32[3] = (int)o_roundf();
  }
  v19 = *(__m128i *)sub_18005757C(v52, &v55, &v54);
  v55 = v19;
  v20 = 0;
  sub_1800574A0(a1, v52);
  v23 = v10[12];
  if ( (*(_DWORD *)(a1 + 440) & 0x1000000) != 0 )
  {
    *(_QWORD *)(v23 + 14544) = 0LL;
    *(_DWORD *)(v23 + 14552) = v15.m128_i32[0];
    *(_DWORD *)(v23 + 14556) = v16.m128_i32[0];
    v24 = (__m128)*(unsigned int *)&v52[8];
    *(_DWORD *)(v23 + 14560) = *(_DWORD *)&v52[8];
    v25 = (__m128)v53;
    *(_DWORD *)(v23 + 14564) = v53;
    if ( v15.m128_f32[0] == 0.0 || v16.m128_f32[0] == 0.0 )
      v20 = 1;
    v26 = 0LL;
    v26.m128_u64[0] = _mm_movelh_ps((__m128)*(unsigned __int64 *)v52, v24).m128_u64[0];
    v27 = 0LL;
    v27.m128_u64[0] = _mm_unpacklo_ps(v15, v16).m128_u64[0];
    v28 = *(double *)_mm_div_ps(v26, v27).m128_u64;
    v29 = 0LL;
    v29.m128_u64[0] = _mm_movelh_ps((__m128)*(unsigned __int64 *)&v52[12], v25).m128_u64[0];
    v30 = 0LL;
    v30.m128_u64[0] = _mm_div_ps(v29, v27).m128_u64[0];
    v31 = 0LL;
    *(double *)v31.m128_u64 = v28;
    v69 = _mm_sub_ps(v30, v31).m128_u64[0];
    v32 = 0LL;
    v32.m128_u64[0] = _mm_unpacklo_ps((__m128)0x3F800000u, (__m128)0x3F800000u).m128_u64[0];
    v70 = _mm_sub_ps(_mm_add_ps(v31, v30), v32).m128_u64[0];
    *(_QWORD *)&v56 = v69;
    DWORD2(v56) = v70;
    *((float *)&v56 + 3) = -*((float *)&v70 + 1);
    v33 = *(float *)v52;
    LODWORD(v54) = (int)o_roundf();
    v34 = *(float *)&v52[4];
    DWORD1(v54) = (int)o_roundf();
    v35 = *(float *)&v52[12];
    DWORD2(v54) = (int)o_roundf();
    v36 = *(float *)&v52[16];
    HIDWORD(v54) = (int)o_roundf();
    sub_18005757C(v52, &v55, &v54);
    *(_OWORD *)(v10[12] + 14632LL) = *(_OWORD *)v52;
    v37 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 12));
    v38 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 4));
    v39 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 8));
    v14 = v56;
  }
  else
  {
    v35 = *(float *)&v52[12];
    v33 = *(float *)v52;
    v40 = *(float *)&v52[12] - *(float *)v52;
    v36 = *(float *)&v52[16];
    v34 = *(float *)&v52[4];
    v41 = *(float *)&v52[16] - *(float *)&v52[4];
    *(_DWORD *)(v23 + 14544) = *(_DWORD *)v52;
    *(float *)(v23 + 14548) = v34;
    *(float *)(v23 + 14552) = v40;
    *(float *)(v23 + 14556) = v41;
    *(_DWORD *)(v23 + 14560) = *(_DWORD *)&v52[8];
    *(_DWORD *)(v23 + 14564) = v53;
    *(__m128i *)(v10[12] + 14632LL) = v19;
    v37 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 12));
    v38 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 4));
    v39 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 8));
  }
  v42 = (v39 - _mm_cvtsi128_si32(v19)) * (v37 - v38);
  if ( v33 == v35 || v34 == v36 )
    v20 = 1;
  if ( !v42 )
  {
    sub_1800137F8(a1 + 24);
    sub_18001C99C(&stru_1801B8388, 4);
  }
  if ( v20 )
  {
    sub_1800137F8(a1 + 24);
    sub_18001C99C(&stru_1801B8388, 4);
  }
  if ( (*(_BYTE *)(a1 + 465) & 1) != 0 && *(_QWORD *)(a1 + 136) )
  {
    v43 = *v10;
    *(_OWORD *)v52 = *(_OWORD *)(a1 + 296);
    (*(void (__fastcall **)(_QWORD *, __int64, _BYTE *))(v43 + 88))(v10, a1 + 136, v52);
  }
  LOBYTE(v21) = *(_BYTE *)(a1 + 465);
  if ( (v21 & 6) != 0 && *(_QWORD *)(a1 + 152) )
  {
    LOBYTE(v22) = (v21 & 4) != 0;
    LOBYTE(v21) = (v21 & 2) != 0;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, _DWORD, _BYTE))(*v10 + 104LL))(
      v10,
      a1 + 152,
      v21,
      v22,
      *(_DWORD *)(a1 + 312),
      *(_BYTE *)(a1 + 464));
  }
  v44 = *(_QWORD *)(sub_180078418(a1) + 512);
  v45 = sub_180040728(a1, v52);
  sub_180039F04(*v45, (__int64)&v56);
  if ( *(_QWORD *)&v52[8] )
    sub_18001050C(*(__int64 *)&v52[8]);
  v55.m128i_i64[0] = v56;
  v55.m128i_i64[1] = DWORD2(v56) | 0x3F80000000000000LL;
  if ( *(_DWORD *)(a1 + 316) == 3 )
  {
    v46 = sub_180040728(a1, v52);
    sub_18003A280(*v46, &v63);
    *((float *)&v56 + 2) = -*((float *)&v65 + 2);
    v47 = 0LL;
    v47.m128_u64[0] = _mm_unpacklo_ps(
                        _mm_xor_ps((__m128)(unsigned int)v65, (__m128)xmmword_18018C680),
                        _mm_xor_ps((__m128)DWORD1(v65), (__m128)xmmword_18018C680)).m128_u64[0];
    v48 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps(v47, (__m128)COERCE_UNSIGNED_INT(-*((float *)&v65 + 2))));
    *(_QWORD *)&v56 = v48.m128_u64[0];
    v49 = _mm_shuffle_ps(v48, v48, 170).m128_u32[0];
    if ( *(_QWORD *)&v52[8] )
      sub_18001050C(*(__int64 *)&v52[8]);
    v55.m128i_i64[0] = v56;
    v55.m128i_i64[1] = v49;
  }
  *(__m128i *)v52 = v55;
  sub_18004D1D8(v44, (__int64)&unk_1801C7968);
  *(_OWORD *)v52 = v14;
  sub_18004D1D8(v44, (__int64)&unk_1801C79A8);
  sub_18007C380(*(_QWORD *)(v44 + 18648), &unk_1801C79C8);
  v59 = xmmword_18018C370;
  v60 = xmmword_18018C380;
  v61 = xmmword_18018C3C0;
  v62 = xmmword_18018C5D0;
  v50 = (__int128 *)sub_1800573FC(a1, 0LL, 2LL);
  v63 = *v50;
  v64 = v50[1];
  v65 = v50[2];
  v66 = v50[3];
  sub_180058E38(&v63, &v59);
  v63 = v59;
  v64 = v60;
  v65 = v61;
  v66 = v62;
  sub_18004D14C(v44);
  sub_1800573B8(a1, &v69);
  *(_QWORD *)&v54 = v69;
  *((float *)&v54 + 2) = 1.0 / *(float *)&v69;
  *((float *)&v54 + 3) = 1.0 / *((float *)&v69 + 1);
  *(_OWORD *)v52 = v54;
  result = sub_18004D1D8(v44, (__int64)&unk_1801C7288);
  if ( v58 )
    return sub_18001050C(v58);
  return result;
}
