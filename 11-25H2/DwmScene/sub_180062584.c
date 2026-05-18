/*
 * XREFs of sub_180062584 @ 0x180062584
 * Callers:
 *     sub_180061D60 @ 0x180061D60 (sub_180061D60.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800321B0 @ 0x1800321B0 (sub_1800321B0.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_18003AE74 @ 0x18003AE74 (sub_18003AE74.c)
 *     sub_180041690 @ 0x180041690 (sub_180041690.c)
 *     sub_180041928 @ 0x180041928 (sub_180041928.c)
 *     sub_180041B44 @ 0x180041B44 (sub_180041B44.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 *     sub_180058EBC @ 0x180058EBC (sub_180058EBC.c)
 *     sub_18005D728 @ 0x18005D728 (sub_18005D728.c)
 *     sub_18006139C @ 0x18006139C (sub_18006139C.c)
 *     sub_180064C30 @ 0x180064C30 (sub_180064C30.c)
 *     sub_180064D64 @ 0x180064D64 (sub_180064D64.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_180076E8C @ 0x180076E8C (sub_180076E8C.c)
 *     sub_18007C1A8 @ 0x18007C1A8 (sub_18007C1A8.c)
 *     sub_18007C380 @ 0x18007C380 (sub_18007C380.c)
 *     sub_18007C7FC @ 0x18007C7FC (sub_18007C7FC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180062584(__int64 a1, __int64 *a2, char a3, float a4)
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

  v7 = (_QWORD *)sub_18005D728(*a2, (__int64)a2);
  v8 = v7[25];
  if ( v8 )
    sub_18003AE74(v8, 1, a3);
  v9 = v7[27];
  if ( v9 )
  {
    v106 = 0x3F8000003F800000LL;
    LODWORD(v107) = 1065353216;
    *((float *)&v107 + 1) = a4;
    sub_18007C1A8(*(_QWORD *)(v9 + 120), &unk_1801C6D08);
  }
  v10 = sub_1800323A0(a1, *(_DWORD *)(*a2 + 112));
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C6108, 0LL);
  if ( (_BYTE)result )
  {
    if ( v7[39] )
    {
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5E88);
      sub_18007C380(*(_QWORD *)(v7[39] + 120LL), &unk_1801C8608);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5F28);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5FC8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6068);
      v12 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5EA8);
      v13 = LODWORD(v12);
      v14 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5EC8);
      v15 = LODWORD(v14);
      v16 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5EE8);
      v17 = LODWORD(v16);
      v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5F08);
      v106 = __PAIR64__(v15, v13);
      v107 = __PAIR64__(LODWORD(v18), v17);
      v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5F48);
      v20 = LODWORD(v19);
      v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5F68);
      v22 = LODWORD(v21);
      v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5F88);
      v24 = LODWORD(v23);
      v25 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5FA8);
      v109.m128_u64[0] = __PAIR64__(v22, v20);
      v109.m128_u64[1] = __PAIR64__(LODWORD(v25), v24);
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C5FE8);
      v27 = LODWORD(v26);
      v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6008);
      v29 = LODWORD(v28);
      v30 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6028);
      v31 = LODWORD(v30);
      v32 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6048);
      v110.m128_u64[0] = __PAIR64__(v29, v27);
      v110.m128_u64[1] = __PAIR64__(LODWORD(v32), v31);
      v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6088);
      v34 = LODWORD(v33);
      v35 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C60A8);
      v36 = LODWORD(v35);
      v37 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C60C8);
      v38 = LODWORD(v37);
      *(float *)&v37 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C60E8);
      v108.m128_u64[0] = __PAIR64__(v36, v34);
      v108.m128_u64[1] = __PAIR64__(LODWORD(v37), v38);
      v111 = 0LL;
      v112 = 0LL;
      sub_180076E8C(v40, v39, v41, (unsigned int)&v111, (__int64)&v112);
      sub_18007C7FC(*(_QWORD *)(v7[39] + 120LL), &unk_1801C8628);
      sub_18007C7FC(*(_QWORD *)(v7[39] + 120LL), &unk_1801C8648);
      sub_18007C1A8(*(_QWORD *)(v7[39] + 120LL), &unk_1801C8668);
      sub_18007C1A8(*(_QWORD *)(v7[39] + 120LL), &unk_1801C8688);
      sub_18007C1A8(*(_QWORD *)(v7[39] + 120LL), &unk_1801C86A8);
      result = sub_18007C1A8(*(_QWORD *)(v7[39] + 120LL), &unk_1801C86C8);
    }
    v42 = v7[37];
    if ( v42 )
    {
      sub_180041B44(v42, (__int64)&unk_1801C8588, v7 + 33);
      v43 = *(_QWORD *)(a1 + 512);
      v44 = sub_180016F54((__int64)v115, (__int64)&unk_1801C8488);
      sub_18004CCE0(v43, &v112, v44);
      sub_180041690(v7[37], &v106);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C6168, 0LL);
      LOBYTE(v43) = v45;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6148);
      LOBYTE(v46) = v43;
      sub_180064D64(v48, v47, v46, (unsigned int)&v106, (__int64)&unk_1801C85A8);
      v49 = unknown_libname_81(&v111, &v112);
      v50 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, &unk_1801C62C8, 0LL);
      v51 = unknown_libname_81(&v108, a2);
      v53 = *sub_1800321B0(a1, &v114, v52, v51);
      sub_180058EBC(v53);
      v54 = *(_DWORD *)(v53 + 332);
      v55 = unknown_libname_81(&v110, a2);
      v57 = *(_DWORD *)(*sub_1800321B0(a1, &v113, v56, v55) + 328LL);
      v58 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6288);
      v59 = LODWORD(v58);
      v60 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6268);
      v61 = LODWORD(v60);
      v62 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6248);
      v63 = LODWORD(v62);
      v64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6228);
      v65 = LODWORD(v64);
      v66 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6208);
      v67 = LODWORD(v66);
      v68 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C61E8);
      v69 = LODWORD(v68);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C61C8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C4808);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C47E8);
      sub_180064DAC(
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
        (__int64)&unk_1801C86E8,
        (__int64)&unk_1801C8708,
        (__int64)&unk_1801C8728,
        (__int64)&unk_1801C8748);
      if ( v113.m128i_i64[1] )
        sub_18001050C(v113.m128i_i64[1]);
      if ( v114.m128i_i64[1] )
        sub_18001050C(v114.m128i_i64[1]);
      v74 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C64C8);
      v75 = *(float *)&v74;
      v76 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6468);
      v77 = *(float *)&v76;
      v78 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C63E8);
      v79 = *(float *)&v78;
      v80 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6368);
      v81 = _mm_loadu_si128((const __m128i *)sub_18006139C(&v110, *(float *)&v80, v79, v77, v75));
      v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C64E8);
      v83 = *(float *)&v82;
      v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6488);
      v85 = *(float *)&v84;
      v86 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6408);
      v87 = *(float *)&v86;
      v88 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6388);
      v89 = _mm_loadu_si128((const __m128i *)sub_18006139C(&v109, *(float *)&v88, v87, v85, v83));
      v90 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6508);
      v91 = *(float *)&v90;
      v92 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C64A8);
      v93 = *(float *)&v92;
      v94 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6428);
      v95 = *(float *)&v94;
      v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C63A8);
      v97 = _mm_loadu_si128((const __m128i *)sub_18006139C(v116, *(float *)&v96, v95, v93, v91));
      v98 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6448);
      v99 = *(float *)&v98;
      v100 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C63C8);
      v101 = *(float *)&v100;
      v102 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C6348);
      v114 = v81;
      v113 = v89;
      v111 = v97;
      v108 = *sub_18006139C(v115, *(float *)&v102, v101, v99, 0.0);
      sub_180064C30(
        v103,
        (unsigned int)&v108,
        (unsigned int)&v111,
        (unsigned int)&v113,
        (__int64)&v114,
        (__int64)&v106,
        (__int64)&unk_1801C87A8,
        (__int64)&unk_1801C87C8,
        (__int64)&unk_1801C87E8);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C6188, 0LL);
      sub_18007C380(v106, &unk_1801C85E8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C61A8);
      sub_18007C380(v106, &unk_1801C85C8);
      LOBYTE(v104) = 1;
      v105 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C6128, v104);
      sub_180041928(v7[37], (__int64)&unk_1801C84A8, v105);
      sub_180041928(v7[37], (__int64)&unk_1801C84C8, v105);
      sub_180041928(v7[37], (__int64)&unk_1801C84E8, v105);
      result = sub_180041928(v7[37], (__int64)&unk_1801C8508, v105);
      if ( v107 )
        result = sub_18001050C(v107);
      if ( *((_QWORD *)&v112 + 1) )
        return sub_18001050C(*((__int64 *)&v112 + 1));
    }
  }
  return result;
}
