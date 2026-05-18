/*
 * XREFs of sub_180091DB0 @ 0x180091DB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_180026E80 @ 0x180026E80 (sub_180026E80.c)
 *     sub_180026ED0 @ 0x180026ED0 (sub_180026ED0.c)
 *     sub_18002797C @ 0x18002797C (sub_18002797C.c)
 *     sub_18004D1D8 @ 0x18004D1D8 (sub_18004D1D8.c)
 *     sub_180079E74 @ 0x180079E74 (sub_180079E74.c)
 *     sub_18007BE64 @ 0x18007BE64 (sub_18007BE64.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 *     sub_1800917DC @ 0x1800917DC (sub_1800917DC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall sub_180091DB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v6; // r13
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, __int64); // rbx
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // r12
  __int64 *v13; // r13
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  __m128 v16; // xmm3
  __m128 v17; // xmm5
  double v18; // xmm1_8
  __m128 v19; // xmm2
  double v20; // xmm4_8
  __m128 v21; // xmm3
  __int64 v22; // r9
  void (__fastcall *v23)(_QWORD *, unsigned __int64 *, __int64, __int64, _QWORD *, _QWORD *); // rsi
  _QWORD *v24; // rdi
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdi
  float v28; // xmm0_4
  int *v29; // rax
  int v30; // ecx
  __int64 v31; // rbx
  unsigned __int16 v32; // r12
  __int64 v33; // rsi
  _OWORD *v34; // rbx
  __int64 v35; // r15
  _OWORD *v36; // rax
  __int64 v37; // rcx
  __m128 v38; // xmm2
  __m128 v39; // xmm0
  __m128 v40; // xmm3
  double v41; // xmm1_8
  __m128 v42; // xmm2
  double v43; // xmm4_8
  __m128 v44; // xmm3
  void (__fastcall *v45)(_QWORD *, __int64, __int64, _QWORD *, _QWORD *); // rsi
  _QWORD *v46; // rdi
  _QWORD *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdi
  _OWORD *v50; // rbx
  _OWORD *v51; // rax
  __m128 v52; // xmm2
  __m128 v53; // xmm1
  __m128 v54; // xmm2
  __m128 v55; // xmm0
  __m128 v56; // xmm3
  __m128 v57; // xmm5
  __m128 v58; // xmm2
  __m128 v59; // xmm4
  __m128 v60; // xmm3
  __m128 v61; // xmm2
  void (__fastcall *v62)(_QWORD *, __int64, __int64, __int64, _QWORD *); // rsi
  _QWORD *v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // rax
  unsigned int v67; // [rsp+48h] [rbp-C0h]
  unsigned __int32 v68; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+78h] [rbp-90h] BYREF
  __int64 v71; // [rsp+80h] [rbp-88h]
  __int64 v72; // [rsp+88h] [rbp-80h]
  __int64 v73; // [rsp+90h] [rbp-78h]
  __int64 v74; // [rsp+98h] [rbp-70h]
  __int64 v75; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-60h]
  __int64 v77; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-50h]
  __int64 *v79; // [rsp+C0h] [rbp-48h]
  __int64 v80; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v81; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v82; // [rsp+E8h] [rbp-20h]
  __int64 v83; // [rsp+F0h] [rbp-18h]
  _QWORD v84[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE Buf2[256]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v86[256]; // [rsp+218h] [rbp+110h] BYREF

  v74 = a4;
  v6 = (_QWORD *)a2;
  v72 = a2;
  sub_18002797C((__int64)Buf2, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_7);
  sub_18002797C((__int64)v86, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_7);
  v8 = a1[3];
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 88LL);
  v72 = a3 + 8;
  v10 = sub_180011C64(a3 + 8, &v70);
  v9(v8, v10);
  unknown_libname_81(&v77, a5);
  v73 = *(_QWORD *)(a3 + 3648);
  v11 = (__int64 *)a1[27];
  if ( v11 != (__int64 *)a1[28] )
  {
    v12 = 0LL;
    v13 = (__int64 *)a1[28];
    do
    {
      v14 = 0LL;
      v14.m128_f32[0] = (float)(int)sub_180026E80(*v11);
      v15 = 0LL;
      v15.m128_f32[0] = (float)(int)sub_180026ED0(*v11);
      v16 = 0LL;
      v16.m128_u64[0] = _mm_unpacklo_ps(v15, v14).m128_u64[0];
      v18 = *(double *)_mm_div_ps(v16, v17).m128_u64;
      v19 = 0LL;
      *(double *)v19.m128_u64 = v20;
      v21 = 0LL;
      *(double *)v21.m128_u64 = v18;
      v82 = _mm_mul_ps(v21, v19).m128_u64[0];
      v83 = 0LL;
      sub_18004D1D8(*(_QWORD *)(v22 + 512), (__int64)&unk_1801C7FA8);
      v23 = *(void (__fastcall **)(_QWORD *, unsigned __int64 *, __int64, __int64, _QWORD *, _QWORD *))(*a1 + 56LL);
      v24 = unknown_libname_81(&v80, v11);
      v79 = v84;
      v25 = unknown_libname_81(v84, &v77);
      v26 = sub_180011C64(v72, &v75);
      v23(a1, &v70, v26, v74, v25, v24);
      if ( v76 )
        sub_18001050C(v76);
      sub_18001244C(&v77, &v70);
      v12 += 8LL;
      if ( v71 )
        sub_18001050C(v71);
      v11 += 2;
    }
    while ( v11 != v13 );
    v6 = (_QWORD *)a2;
  }
  v27 = v77;
  if ( v77 )
  {
    v28 = (float)(int)sub_180026E80(a1[23]);
    v29 = *(int **)(v27 + 128);
    if ( v29 )
      v30 = *v29;
    else
      v30 = 0;
    sub_1800917DC((__int64)a1, (__int64)Buf2, (__int64)v86, (float)v30, v28);
    v31 = *(_QWORD *)sub_18007BE64(a1[36], &v75);
    std::string::string(v84, "BlurSampleArray");
    v32 = sub_180079E74(v31, (__int64)v84);
    sub_180011A5C((__int64)v84);
    if ( v76 )
      sub_18001050C(v76);
    v33 = a1[36];
    v34 = (_OWORD *)sub_18007BFC4(v33, v32, 5);
    v35 = 2LL;
    if ( memcmp(v34, Buf2, 0x100uLL) )
    {
      v36 = Buf2;
      v37 = 2LL;
      do
      {
        *v34 = *v36;
        v34[1] = v36[1];
        v34[2] = v36[2];
        v34[3] = v36[3];
        v34[4] = v36[4];
        v34[5] = v36[5];
        v34[6] = v36[6];
        v34 += 8;
        *(v34 - 1) = v36[7];
        v36 += 8;
        --v37;
      }
      while ( v37 );
      ++*(_DWORD *)(v33 + 80);
    }
    v38 = 0LL;
    v38.m128_f32[0] = (float)(int)sub_180026E80(a1[23]);
    v39 = 0LL;
    v39.m128_f32[0] = (float)(int)sub_180026ED0(a1[23]);
    v40 = 0LL;
    v40.m128_u64[0] = _mm_unpacklo_ps(v39, v38).m128_u64[0];
    v41 = *(double *)_mm_div_ps(v40, (__m128)(unsigned __int64)a1[33]).m128_u64;
    v42 = 0LL;
    *(double *)v42.m128_u64 = v43;
    v44 = 0LL;
    *(double *)v44.m128_u64 = v41;
    v70 = _mm_mul_ps(v44, v42).m128_u64[0];
    v71 = 0LL;
    sub_18004D1D8(*(_QWORD *)(v73 + 512), (__int64)&unk_1801C7FA8);
    v45 = *(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD *, _QWORD *))(*a1 + 48LL);
    v79 = &v75;
    v46 = unknown_libname_81(&v75, a1 + 23);
    v47 = unknown_libname_81(v84, &v77);
    v48 = sub_180011C64(v72, &v80);
    v45(a1, v48, v74, v47, v46);
    if ( v81 )
      sub_18001050C(v81);
    v49 = a1[36];
    v50 = (_OWORD *)sub_18007BFC4(v49, v32, 5);
    if ( memcmp(v50, v86, 0x100uLL) )
    {
      v51 = v86;
      do
      {
        *v50 = *v51;
        v50[1] = v51[1];
        v50[2] = v51[2];
        v50[3] = v51[3];
        v50[4] = v51[4];
        v50[5] = v51[5];
        v50[6] = v51[6];
        v50 += 8;
        *(v50 - 1) = v51[7];
        v51 += 8;
        --v35;
      }
      while ( v35 );
      ++*(_DWORD *)(v49 + 80);
    }
    v52 = 0LL;
    v52.m128_f32[0] = (float)(int)sub_180026E80(a1[23]);
    v53 = 0LL;
    v53.m128_f32[0] = (float)(int)sub_180026ED0(a1[23]);
    v52.m128_u64[0] = _mm_unpacklo_ps(v53, v52).m128_u64[0];
    *(float *)&v67 = COERCE_FLOAT(a1[33]) / v52.m128_f32[0];
    v54 = 0LL;
    v54.m128_f32[0] = (float)(int)sub_180026E80(a1[25]);
    v55 = 0LL;
    v55.m128_f32[0] = (float)(int)sub_180026ED0(a1[25]);
    v56 = 0LL;
    v56.m128_u64[0] = _mm_unpacklo_ps(v55, v54).m128_u64[0];
    v56.m128_u64[0] = _mm_div_ps(v56, v57).m128_u64[0];
    v68 = v56.m128_i32[0];
    v58 = (__m128)v56.m128_u32[1];
    v60 = 0LL;
    v60.m128_u64[0] = _mm_unpacklo_ps((__m128)v67, v59).m128_u64[0];
    v55.m128_u64[0] = _mm_unpacklo_ps((__m128)v68, v58).m128_u64[0];
    v61 = 0LL;
    v61.m128_u64[0] = v55.m128_u64[0];
    v70 = _mm_mul_ps(v61, v60).m128_u64[0];
    v71 = 0LL;
    sub_18004D1D8(*(_QWORD *)(v73 + 512), (__int64)&unk_1801C7FA8);
    v62 = *(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, _QWORD *))(*a1 + 48LL);
    v79 = &v75;
    v63 = unknown_libname_81(&v75, a1 + 25);
    v64 = sub_1800254DC(a1[23], v84);
    v65 = sub_180011C64(v72, &v80);
    v62(a1, v65, v74, v64, v63);
    if ( v81 )
      sub_18001050C(v81);
  }
  v70 = 0x3F8000003F800000LL;
  v71 = _mm_srli_si128((__m128i)xmmword_18018C390, 8).m128i_u64[0];
  sub_18004D1D8(*(_QWORD *)(v73 + 512), (__int64)&unk_1801C7FA8);
  sub_1800254DC(a1[25], v6);
  if ( v78 )
    sub_18001050C(v78);
  return v6;
}
