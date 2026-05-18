/*
 * XREFs of sub_1800626E4 @ 0x1800626E4
 * Callers:
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180032310 @ 0x180032310 (sub_180032310.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_18003AFD4 @ 0x18003AFD4 (sub_18003AFD4.c)
 *     sub_1800417F0 @ 0x1800417F0 (sub_1800417F0.c)
 *     sub_180041A88 @ 0x180041A88 (sub_180041A88.c)
 *     sub_180041CA4 @ 0x180041CA4 (sub_180041CA4.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_18005901C @ 0x18005901C (sub_18005901C.c)
 *     sub_18005D888 @ 0x18005D888 (sub_18005D888.c)
 *     sub_1800614FC @ 0x1800614FC (sub_1800614FC.c)
 *     sub_180064D90 @ 0x180064D90 (sub_180064D90.c)
 *     sub_180064EC4 @ 0x180064EC4 (sub_180064EC4.c)
 *     sub_180064F0C @ 0x180064F0C (sub_180064F0C.c)
 *     sub_180076FEC @ 0x180076FEC (sub_180076FEC.c)
 *     sub_18007C308 @ 0x18007C308 (sub_18007C308.c)
 *     sub_18007C4E0 @ 0x18007C4E0 (sub_18007C4E0.c)
 *     sub_18007C95C @ 0x18007C95C (sub_18007C95C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800626E4(__int64 a1, __int64 *a2, char a3, float a4)
{
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 result; // rax
  double v12; // xmm0_8
  unsigned int v13; // xmm8_4
  double v14; // xmm0_8
  unsigned int v15; // xmm7_4
  double v16; // xmm0_8
  unsigned int v17; // xmm6_4
  double v18; // xmm0_8
  double v19; // xmm0_8
  unsigned int v20; // xmm8_4
  double v21; // xmm0_8
  unsigned int v22; // xmm7_4
  double v23; // xmm0_8
  unsigned int v24; // xmm6_4
  double v25; // xmm0_8
  double v26; // xmm0_8
  unsigned int v27; // xmm8_4
  double v28; // xmm0_8
  unsigned int v29; // xmm7_4
  double v30; // xmm0_8
  unsigned int v31; // xmm6_4
  double v32; // xmm0_8
  double v33; // xmm0_8
  unsigned int v34; // xmm8_4
  double v35; // xmm0_8
  unsigned int v36; // xmm7_4
  double v37; // xmm0_8
  unsigned int v38; // xmm6_4
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  char v45; // al
  int v46; // r8d
  int v47; // edx
  int v48; // ecx
  _QWORD *v49; // rsi
  int v50; // edi
  _QWORD *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rbx
  int v54; // xmm15_4
  _QWORD *v55; // rax
  __int64 v56; // r8
  int v57; // xmm14_4
  double v58; // xmm0_8
  int v59; // xmm13_4
  double v60; // xmm0_8
  int v61; // xmm12_4
  double v62; // xmm0_8
  int v63; // xmm11_4
  double v64; // xmm0_8
  int v65; // xmm10_4
  double v66; // xmm0_8
  int v67; // xmm9_4
  double v68; // xmm0_8
  int v69; // xmm8_4
  int v70; // edx
  int v71; // ecx
  int v72; // r8d
  int v73; // r9d
  double v74; // xmm0_8
  float v75; // xmm8_4
  double v76; // xmm0_8
  float v77; // xmm7_4
  double v78; // xmm0_8
  float v79; // xmm6_4
  double v80; // xmm0_8
  __m128i v81; // xmm10
  double v82; // xmm0_8
  float v83; // xmm8_4
  double v84; // xmm0_8
  float v85; // xmm7_4
  double v86; // xmm0_8
  float v87; // xmm6_4
  double v88; // xmm0_8
  __m128i v89; // xmm9
  double v90; // xmm0_8
  float v91; // xmm8_4
  double v92; // xmm0_8
  float v93; // xmm7_4
  double v94; // xmm0_8
  float v95; // xmm6_4
  double v96; // xmm0_8
  __m128i v97; // xmm8
  double v98; // xmm0_8
  float v99; // xmm7_4
  double v100; // xmm0_8
  float v101; // xmm6_4
  double v102; // xmm0_8
  int v103; // ecx
  __int64 v104; // r8
  char v105; // bl
  unsigned __int64 v106; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-78h]
  __m128 v108; // [rsp+B8h] [rbp-70h] BYREF
  __m128 v109; // [rsp+C8h] [rbp-60h] BYREF
  __m128 v110; // [rsp+D8h] [rbp-50h] BYREF
  __m128i v111; // [rsp+E8h] [rbp-40h] BYREF
  __int128 v112; // [rsp+F8h] [rbp-30h] BYREF
  __m128i v113; // [rsp+108h] [rbp-20h] BYREF
  __m128i v114; // [rsp+118h] [rbp-10h] BYREF
  __m128 v115[2]; // [rsp+128h] [rbp+0h] BYREF
  __m128 v116[11]; // [rsp+148h] [rbp+20h] BYREF

  v7 = (_QWORD *)sub_18005D888(*a2, (__int64)a2);
  v8 = v7[25];
  if ( v8 )
    sub_18003AFD4(v8, 1, a3);
  v9 = v7[27];
  if ( v9 )
  {
    v106 = 0x3F8000003F800000LL;
    LODWORD(v107) = 1065353216;
    *((float *)&v107 + 1) = a4;
    sub_18007C308(*(_QWORD *)(v9 + 120), &unk_1801C7D18);
  }
  v10 = sub_180032500(a1, *(_DWORD *)(*a2 + 112));
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C7118, 0LL);
  if ( (_BYTE)result )
  {
    if ( v7[39] )
    {
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6E98);
      sub_18007C4E0(*(_QWORD *)(v7[39] + 120LL), &unk_1801C9618);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6F38);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6FD8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7078);
      v12 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6EB8);
      v13 = LODWORD(v12);
      v14 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6ED8);
      v15 = LODWORD(v14);
      v16 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6EF8);
      v17 = LODWORD(v16);
      v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6F18);
      v106 = __PAIR64__(v15, v13);
      v107 = __PAIR64__(LODWORD(v18), v17);
      v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6F58);
      v20 = LODWORD(v19);
      v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6F78);
      v22 = LODWORD(v21);
      v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6F98);
      v24 = LODWORD(v23);
      v25 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6FB8);
      v109.m128_u64[0] = __PAIR64__(v22, v20);
      v109.m128_u64[1] = __PAIR64__(LODWORD(v25), v24);
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6FF8);
      v27 = LODWORD(v26);
      v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7018);
      v29 = LODWORD(v28);
      v30 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7038);
      v31 = LODWORD(v30);
      v32 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7058);
      v110.m128_u64[0] = __PAIR64__(v29, v27);
      v110.m128_u64[1] = __PAIR64__(LODWORD(v32), v31);
      v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7098);
      v34 = LODWORD(v33);
      v35 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C70B8);
      v36 = LODWORD(v35);
      v37 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C70D8);
      v38 = LODWORD(v37);
      *(float *)&v37 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C70F8);
      v108.m128_u64[0] = __PAIR64__(v36, v34);
      v108.m128_u64[1] = __PAIR64__(LODWORD(v37), v38);
      v111 = 0LL;
      v112 = 0LL;
      sub_180076FEC(v40, v39, v41, (unsigned int)&v111, (__int64)&v112);
      sub_18007C95C(*(_QWORD *)(v7[39] + 120LL), &unk_1801C9638);
      sub_18007C95C(*(_QWORD *)(v7[39] + 120LL), &unk_1801C9658);
      sub_18007C308(*(_QWORD *)(v7[39] + 120LL), &unk_1801C9678);
      sub_18007C308(*(_QWORD *)(v7[39] + 120LL), &unk_1801C9698);
      sub_18007C308(*(_QWORD *)(v7[39] + 120LL), &unk_1801C96B8);
      result = sub_18007C308(*(_QWORD *)(v7[39] + 120LL), &unk_1801C96D8);
    }
    v42 = v7[37];
    if ( v42 )
    {
      sub_180041CA4(v42, (__int64)&unk_1801C9598, v7 + 33);
      v43 = *(_QWORD *)(a1 + 512);
      v44 = sub_180017054((__int64)v115, (__int64)&unk_1801C9498);
      sub_18004CE40(v43, &v112, v44);
      sub_1800417F0(v7[37], &v106);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C7178, 0LL);
      LOBYTE(v43) = v45;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7158);
      LOBYTE(v46) = v43;
      sub_180064EC4(v48, v47, v46, (unsigned int)&v106, (__int64)&unk_1801C95B8);
      v49 = unknown_libname_81(&v111, &v112);
      v50 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, &unk_1801C72D8, 0LL);
      v51 = unknown_libname_81(&v108, a2);
      v53 = *sub_180032310(a1, &v114, v52, v51);
      sub_18005901C(v53);
      v54 = *(_DWORD *)(v53 + 332);
      v55 = unknown_libname_81(&v110, a2);
      v57 = *(_DWORD *)(*sub_180032310(a1, &v113, v56, v55) + 328LL);
      v58 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7298);
      v59 = LODWORD(v58);
      v60 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7278);
      v61 = LODWORD(v60);
      v62 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7258);
      v63 = LODWORD(v62);
      v64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7238);
      v65 = LODWORD(v64);
      v66 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7218);
      v67 = LODWORD(v66);
      v68 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C71F8);
      v69 = LODWORD(v68);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C71D8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5818);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C57F8);
      sub_180064F0C(
        v71,
        v70,
        v72,
        v73,
        v69,
        v67,
        v65,
        v63,
        v61,
        v59,
        v57,
        v54,
        v50,
        (__int64)v49,
        (__int64)&v106,
        (__int64)&unk_1801C96F8,
        (__int64)&unk_1801C9718,
        (__int64)&unk_1801C9738,
        (__int64)&unk_1801C9758);
      if ( v113.m128i_i64[1] )
        sub_18001060C(v113.m128i_i64[1]);
      if ( v114.m128i_i64[1] )
        sub_18001060C(v114.m128i_i64[1]);
      v74 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C74D8);
      v75 = *(float *)&v74;
      v76 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7478);
      v77 = *(float *)&v76;
      v78 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C73F8);
      v79 = *(float *)&v78;
      v80 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7378);
      v81 = _mm_loadu_si128((const __m128i *)sub_1800614FC(&v110, *(float *)&v80, v79, v77, v75));
      v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C74F8);
      v83 = *(float *)&v82;
      v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7498);
      v85 = *(float *)&v84;
      v86 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7418);
      v87 = *(float *)&v86;
      v88 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7398);
      v89 = _mm_loadu_si128((const __m128i *)sub_1800614FC(&v109, *(float *)&v88, v87, v85, v83));
      v90 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7518);
      v91 = *(float *)&v90;
      v92 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C74B8);
      v93 = *(float *)&v92;
      v94 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7438);
      v95 = *(float *)&v94;
      v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C73B8);
      v97 = _mm_loadu_si128((const __m128i *)sub_1800614FC(v116, *(float *)&v96, v95, v93, v91));
      v98 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7458);
      v99 = *(float *)&v98;
      v100 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C73D8);
      v101 = *(float *)&v100;
      v102 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C7358);
      v114 = v81;
      v113 = v89;
      v111 = v97;
      v108 = *sub_1800614FC(v115, *(float *)&v102, v101, v99, 0.0);
      sub_180064D90(
        v103,
        (unsigned int)&v108,
        (unsigned int)&v111,
        (unsigned int)&v113,
        (__int64)&v114,
        (__int64)&v106,
        (__int64)&unk_1801C97B8,
        (__int64)&unk_1801C97D8,
        (__int64)&unk_1801C97F8);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C7198, 0LL);
      sub_18007C4E0(v106, &unk_1801C95F8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C71B8);
      sub_18007C4E0(v106, &unk_1801C95D8);
      LOBYTE(v104) = 1;
      v105 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C7138, v104);
      sub_180041A88(v7[37], (__int64)&unk_1801C94B8, v105);
      sub_180041A88(v7[37], (__int64)&unk_1801C94D8, v105);
      sub_180041A88(v7[37], (__int64)&unk_1801C94F8, v105);
      result = sub_180041A88(v7[37], (__int64)&unk_1801C9518, v105);
      if ( v107 )
        result = sub_18001060C(v107);
      if ( *((_QWORD *)&v112 + 1) )
        return sub_18001060C(*((__int64 *)&v112 + 1));
    }
  }
  return result;
}
