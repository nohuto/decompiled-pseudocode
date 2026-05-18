/*
 * XREFs of sub_180066E54 @ 0x180066E54
 * Callers:
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memcmp @ 0x18000CE3D (memcmp.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001120C @ 0x18001120C (sub_18001120C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180017828 @ 0x180017828 (sub_180017828.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18002C0B4 @ 0x18002C0B4 (sub_18002C0B4.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_180039D38 @ 0x180039D38 (sub_180039D38.c)
 *     sub_18003A064 @ 0x18003A064 (sub_18003A064.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     GsDriverEntry @ 0x18003B030 (GsDriverEntry.c)
 *     sub_18003BA84 @ 0x18003BA84 (sub_18003BA84.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 *     sub_180058888 @ 0x180058888 (sub_180058888.c)
 *     sub_1800588F0 @ 0x1800588F0 (sub_1800588F0.c)
 *     sub_1800589FC @ 0x1800589FC (sub_1800589FC.c)
 *     sub_180058A2C @ 0x180058A2C (sub_180058A2C.c)
 *     sub_180058A5C @ 0x180058A5C (sub_180058A5C.c)
 *     sub_180058ACC @ 0x180058ACC (sub_180058ACC.c)
 *     sub_180058C08 @ 0x180058C08 (sub_180058C08.c)
 *     sub_18005901C @ 0x18005901C (sub_18005901C.c)
 *     sub_18005C5F8 @ 0x18005C5F8 (sub_18005C5F8.c)
 *     sub_18005D888 @ 0x18005D888 (sub_18005D888.c)
 *     sub_18005DA40 @ 0x18005DA40 (sub_18005DA40.c)
 *     sub_18005E588 @ 0x18005E588 (sub_18005E588.c)
 *     sub_180067EF8 @ 0x180067EF8 (sub_180067EF8.c)
 *     sub_18006B4EC @ 0x18006B4EC (sub_18006B4EC.c)
 *     sub_18006C680 @ 0x18006C680 (sub_18006C680.c)
 *     sub_18006C76C @ 0x18006C76C (sub_18006C76C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=16
char __fastcall sub_180066E54(__int64 a1, __int64 *a2, int a3, _QWORD *a4)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm3
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // di
  void (__fastcall *v11)(__int64, _BYTE *, void *, __int64); // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  void (__fastcall *v14)(__int64, __int64 *, _BYTE *, _QWORD *); // r10
  char v15; // r13
  float v16; // xmm9_4
  __m128 v17; // xmm11
  __m128 v18; // xmm12
  unsigned int v19; // xmm13_4
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, _BYTE *, void *, __int64); // rbx
  __int64 v25; // rax
  __m128 v26; // xmm10
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 *v30; // r15
  __int64 *v31; // rbx
  __int64 v32; // rdx
  const void *v33; // rax
  size_t v34; // r8
  const void *v35; // r9
  bool v36; // r14
  unsigned int *v37; // rax
  __m128 v38; // xmm3
  __m128 v39; // xmm4
  __m128 v40; // xmm2
  __m128 v41; // xmm0
  __m128 v42; // xmm2
  __int128 v43; // xmm0
  __m128 v44; // xmm1
  __m128 v45; // xmm0
  __m128 v46; // xmm1
  float v47; // xmm6_4
  _QWORD *v48; // rax
  __int64 v49; // r14
  __int128 *v50; // rax
  __int64 v51; // rbx
  char v52; // al
  __int64 v53; // rcx
  double v54; // xmm0_8
  _QWORD *v55; // rax
  _DWORD *v56; // rbx
  unsigned __int64 v57; // r15
  __int64 v58; // rcx
  char v59; // r15
  unsigned int v60; // ebx
  __int64 *v61; // rax
  __int64 *v62; // rax
  float v63; // xmm3_4
  float v64; // xmm0_4
  float v65; // xmm7_4
  float v66; // xmm6_4
  float v67; // xmm6_4
  float v68; // xmm0_4
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // r8
  __int64 v80; // rbx
  char result; // al
  __int128 v82; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v83; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v84; // [rsp+50h] [rbp-B8h]
  __m128 v85; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v86; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v87; // [rsp+70h] [rbp-98h] BYREF
  __int64 v88; // [rsp+78h] [rbp-90h]
  _QWORD *v89; // [rsp+80h] [rbp-88h]
  __int64 v90; // [rsp+88h] [rbp-80h] BYREF
  __int64 v91; // [rsp+90h] [rbp-78h]
  __int64 v92; // [rsp+98h] [rbp-70h] BYREF
  __int64 v93; // [rsp+A0h] [rbp-68h]
  __int64 v94; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-48h]
  __int128 v96; // [rsp+C8h] [rbp-40h] BYREF
  float v97[4]; // [rsp+D8h] [rbp-30h]
  __int64 v98; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v99; // [rsp+F0h] [rbp-18h]
  _BYTE v100[64]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v101[64]; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v102[4]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v103[64]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v104[64]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v105[32]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v106[16]; // [rsp+258h] [rbp+150h] BYREF
  __int64 v107; // [rsp+268h] [rbp+160h]
  _BYTE v108[32]; // [rsp+278h] [rbp+170h] BYREF
  _BYTE v109[32]; // [rsp+298h] [rbp+190h] BYREF
  unsigned __int64 v110; // [rsp+2B8h] [rbp+1B0h] BYREF
  unsigned int v111; // [rsp+2C0h] [rbp+1B8h]

  v89 = a4;
  LODWORD(v86) = a3;
  v8 = sub_18005D888(*a2, (__int64)a2);
  unknown_libname_81(&v98, (_QWORD *)(v8 + 184));
  v9 = sub_180032500(a1, *(_DWORD *)(*a2 + 112));
  v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801C6A58, 1LL);
  v11 = *(void (__fastcall **)(__int64, _BYTE *, void *, __int64))(*(_QWORD *)v9 + 96LL);
  v12 = std::wstring::wstring((__int64)v105, word_1800F88E8);
  v11(v9, v109, &unk_1801C6AF8, v12);
  sub_18002C0B4((__int64)v108, (__int64)v109);
  v13 = unknown_libname_81(&v92, a2);
  v14(a1, &v83, v108, v13);
  v15 = 0;
  if ( v83 )
    v15 = v10;
  v96 = 0LL;
  v16 = 0.0;
  v17.m128_i32[0] = 0;
  v18.m128_i32[0] = 0;
  v19 = 0;
  v20 = *a2;
  v21 = sub_180012444((__int64)v105, (__int64)&unk_1801C5038);
  v22 = *(_QWORD *)sub_18003EBDC(v20, (__int64)&v92, v21);
  sub_18003BE3C(v22);
  *(_QWORD *)v97 = *(_QWORD *)(v22 + 172);
  if ( v93 )
    sub_18001060C(v93);
  v23 = v98;
  if ( v15 )
  {
    v24 = *(void (__fastcall **)(__int64, _BYTE *, void *, __int64))(*(_QWORD *)v9 + 96LL);
    v25 = std::wstring::wstring((__int64)&v92, word_1800F88E8);
    v24(v9, v105, &unk_1801C6B18, v25);
    sub_18002C0B4((__int64)v106, (__int64)v105);
    sub_180011C04(v83 + 56, &v87);
    sub_18003A3E0(v87, v102);
    v26 = (__m128)xmmword_18018D370;
    v82 = xmmword_18018D370;
    v27 = *a2;
    v28 = sub_180012444((__int64)v101, (__int64)&unk_1801C4FF8);
    sub_18003EBDC(v27, (__int64)&v92, v28);
    v29 = v92;
    sub_18003BE3C(v92);
    v30 = *(__int64 **)(v29 + 40);
    v31 = *(__int64 **)(v29 + 32);
    if ( v31 != v30 )
    {
      do
      {
        sub_180039D38(*v31, (__int64)v104);
        sub_1800138F8((__int64)v106);
        v33 = (const void *)sub_1800138F8(v32);
        v36 = v34 == v107 && !memcmp(v33, v35, v34);
        sub_180011B5C((__int64)v104);
        if ( v36 )
        {
          sub_18001254C((__int64 *)&v96, v31);
          v37 = (unsigned int *)sub_18003A064(v96, (__int64)&v85);
          v17 = (__m128)*v37;
          v18 = (__m128)v37[1];
          v19 = v37[2];
          LODWORD(v95) = v19;
          v110 = 0x3F80000000000000LL;
          v111 = 0;
          sub_18003BA84(v96, (__int64)&v90, &v110);
          v38 = 0LL;
          v38.m128_u64[0] = _mm_unpacklo_ps(v17, v18).m128_u64[0];
          v5 = _mm_movelh_ps(v38, (__m128)(unsigned int)v95);
          v39 = _mm_movelh_ps((__m128)(unsigned __int64)v90, (__m128)(unsigned int)v91);
          v40 = _mm_mul_ps(v39, v5);
          v41 = _mm_shuffle_ps(v40, v40, 153);
          v40.m128_f32[0] = (float)(v40.m128_f32[0] + v41.m128_f32[0]) + _mm_shuffle_ps(v41, v41, 85).m128_f32[0];
          v42 = _mm_or_ps(
                  _mm_and_ps((__m128)xmmword_1800F8040, v39),
                  _mm_andnot_ps((__m128)xmmword_1800F8040, _mm_sub_ps((__m128)0LL, _mm_shuffle_ps(v40, v40, 0))));
          LODWORD(v82) = v42.m128_i32[0];
          DWORD1(v82) = _mm_shuffle_ps(v42, v42, 85).m128_u32[0];
          DWORD2(v82) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
          v4 = _mm_shuffle_ps(v42, v42, 255);
          HIDWORD(v82) = v4.m128_i32[0];
        }
        v31 += 2;
      }
      while ( v31 != v30 );
      v26 = (__m128)v82;
      v23 = v98;
    }
    *(_OWORD *)&v100[4] = 0LL;
    *(_OWORD *)&v100[24] = 0LL;
    *(_OWORD *)&v100[44] = 0LL;
    *((_QWORD *)&v43 + 1) = v26.m128_u64[1];
    *(double *)&v43 = sub_180067EF8();
    *(_OWORD *)v100 = v43;
    *(_OWORD *)&v100[16] = 0LL;
    *(__m128 *)&v100[32] = v4;
    *(__m128 *)&v100[48] = v5;
    sub_18003A064(v87, (__int64)&v110);
    *(_QWORD *)&v82 = v110;
    *((_QWORD *)&v82 + 1) = v111 | 0x3F80000000000000LL;
    v44 = _mm_mul_ps((__m128)v82, v26);
    v45 = _mm_add_ps(_mm_shuffle_ps((__m128)v82, v44, 64), v44);
    v46 = _mm_add_ps(_mm_shuffle_ps(v44, v45, 48), v45);
    v47 = 0.0;
    v48 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v89 + 152LL))(*v89);
    unknown_libname_81(&v90, v48);
    v49 = v90;
    if ( _mm_shuffle_ps(v46, v46, 170).m128_f32[0] >= 0.0 )
    {
      *(_OWORD *)&v104[4] = 0LL;
      *(_OWORD *)&v104[24] = 0LL;
      *(_OWORD *)&v104[44] = 0LL;
      *(_OWORD *)v104 = COERCE_UNSIGNED_INT64(sub_180067EF8());
      memset(&v104[16], 0, 32);
      *(__m128 *)&v104[48] = v5;
      v50 = sub_180017828((__int64)v103, (__int128 *)v104, v102);
      sub_180017828((__int64)v101, v50, v100);
      sub_180011C04(v23 + 56, &v82);
      GsDriverEntry(v82, (__int64)v101);
      if ( *((_QWORD *)&v82 + 1) )
        sub_18001060C(*((__int64 *)&v82 + 1));
      sub_180058A2C(v23, *(float *)(v83 + 328));
      v51 = v83;
      v52 = *(_BYTE *)(v83 + 336);
      if ( v52 != *(_BYTE *)(v23 + 336) )
      {
        *(_BYTE *)(v23 + 336) = v52;
        *(_BYTE *)(v23 + 1612) = v52;
        v51 = v83;
      }
      sub_18005901C(v51);
      sub_180058888(v23, *(float *)(v51 + 332));
      sub_180058ACC(v53, *(float *)(v83 + 320));
      sub_1800589FC(v23, *(float *)(v83 + 324));
      v54 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 88LL))(v9, &unk_1801C6A78);
      v47 = *(float *)&v54;
      sub_18005DA40(v49, &v85);
      if ( !v85.m128_u64[0] )
      {
        sub_180032634(a1, &v94, v86);
        v55 = sub_18005E588(&v82);
        v56 = (_DWORD *)*v55;
        v57 = v55[1];
        *v55 = 0LL;
        v55[1] = 0LL;
        v85.m128_u64[0] = (unsigned __int64)v56;
        v58 = v85.m128_i64[1];
        v85.m128_u64[1] = v57;
        if ( v58 )
          sub_18001060C(v58);
        if ( *((_QWORD *)&v82 + 1) )
          sub_18001060C(*((__int64 *)&v82 + 1));
        (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v56 + 40LL))(v56, v94, 1LL);
        v56[44] = 1;
        *(_QWORD *)&v82 = v56;
        *((_QWORD *)&v82 + 1) = v57;
        v85 = 0LL;
        sub_18006B4EC(v49, &v82);
        v86 = a1;
        *(_QWORD *)(v23 + 1696) = &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor';
        sub_18005C5F8(v23 + 1704, &v86);
        if ( v95 )
          sub_18001060C(v95);
      }
      if ( v85.m128_u64[1] )
        sub_18001060C(v85.m128_i64[1]);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801C6AD8, 0LL);
    v110 = 0x400000005LL;
    v111 = 2;
    v60 = *((_DWORD *)&v110
          + (*(int (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 72LL))(v9, &unk_1801C6A98, 2LL));
    v61 = (__int64 *)sub_18006C76C(v49, &v82, v60);
    sub_180058A5C(v23, v61);
    v62 = (__int64 *)sub_18006C680(v49, &v82, v60);
    sub_1800588F0(v23, v62);
    *(_BYTE *)(v23 + 465) |= 3u;
    v63 = v47 + v47;
    if ( v47 >= 0.5 )
    {
      v67 = 1.0 - (float)(v63 - 1.0);
      v65 = (float)(v67 * 0.050000001) + (float)(v63 - 1.0);
      v66 = (float)(v67 * 0.5) + (float)(v63 - 1.0);
    }
    else
    {
      v64 = (float)(1.0 - v63) * 0.0;
      v65 = (float)(v63 * 0.050000001) + v64;
      v66 = (float)(v63 * 0.5) + v64;
    }
    if ( v59 )
    {
      v65 = 1.0;
      v66 = 1.0;
    }
    v68 = sub_18001120C(v63, 0.0, 1.0);
    if ( !v59 )
      v16 = 1.0 / (float)(v97[0] * 3.5);
    *(_QWORD *)&v82 = __PAIR64__(LODWORD(v65), LODWORD(v68));
    *((_QWORD *)&v82 + 1) = __PAIR64__(LODWORD(v16), LODWORD(v66));
    v69 = v83;
    if ( v83 )
    {
      v70 = sub_180017054((__int64)v104, (__int64)&unk_1801C82F8);
      sub_180058C08(v69, v70, &v82, -1);
      v71 = v83;
      v72 = sub_180017054((__int64)v104, (__int64)&unk_1801C82D8);
      v82 = xmmword_1800F8670;
      sub_180058C08(v71, v72, &v82, -1);
      v73 = v83;
      v74 = sub_180017054((__int64)v104, (__int64)&unk_1801C8318);
      v82 = xmmword_1800F8670;
      sub_180058C08(v73, v74, &v82, -1);
    }
    v75 = sub_180017054((__int64)v104, (__int64)&unk_1801C82F8);
    v82 = xmmword_1800F8670;
    sub_180058C08(v23, v75, &v82, -1);
    LODWORD(v82) = 1053609165;
    DWORD1(v82) = v17.m128_i32[0];
    *((_QWORD *)&v82 + 1) = __PAIR64__(v19, v18.m128_u32[0]);
    v76 = sub_180017054((__int64)v104, (__int64)&unk_1801C82D8);
    v85 = (__m128)v82;
    sub_180058C08(v23, v76, &v85, -1);
    v77 = sub_180017054((__int64)v104, (__int64)&unk_1801C8318);
    v82 = (__int128)v26;
    sub_180058C08(v23, v77, &v82, -1);
    if ( v91 )
      sub_18001060C(v91);
    if ( v93 )
      sub_18001060C(v93);
    if ( v88 )
      sub_18001060C(v88);
    sub_180011B5C((__int64)v106);
    sub_180013228((__int64)v105);
  }
  *(_BYTE *)(v23 + 72) = v15;
  v78 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v89 + 152LL))(*v89);
  unknown_libname_81(&v87, v78);
  sub_18005DA40(v87, &v92);
  v80 = v92;
  if ( v92 )
  {
    LOBYTE(v79) = 1;
    *(_BYTE *)(v80 + 232) = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 64LL))(
                              v9,
                              &unk_1801C6AB8,
                              v79);
  }
  if ( v93 )
    sub_18001060C(v93);
  if ( v88 )
    sub_18001060C(v88);
  if ( *((_QWORD *)&v96 + 1) )
    sub_18001060C(*((__int64 *)&v96 + 1));
  if ( v84 )
    sub_18001060C(v84);
  sub_180011B5C((__int64)v108);
  result = sub_180013228((__int64)v109);
  if ( v99 )
    return sub_18001060C(v99);
  return result;
}
