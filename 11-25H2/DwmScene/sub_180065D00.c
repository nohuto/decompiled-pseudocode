/*
 * XREFs of sub_180065D00 @ 0x180065D00
 * Callers:
 *     sub_180061990 @ 0x180061990 (sub_180061990.c)
 *     sub_180061D60 @ 0x180061D60 (sub_180061D60.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800321B0 @ 0x1800321B0 (sub_1800321B0.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_180039960 @ 0x180039960 (sub_180039960.c)
 *     sub_18004C574 @ 0x18004C574 (sub_18004C574.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 *     sub_18004D168 @ 0x18004D168 (sub_18004D168.c)
 *     sub_18004D1A0 @ 0x18004D1A0 (sub_18004D1A0.c)
 *     sub_18004D1D8 @ 0x18004D1D8 (sub_18004D1D8.c)
 *     sub_180058EBC @ 0x180058EBC (sub_180058EBC.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 *     sub_18005D728 @ 0x18005D728 (sub_18005D728.c)
 *     sub_18005D9F4 @ 0x18005D9F4 (sub_18005D9F4.c)
 *     sub_18006139C @ 0x18006139C (sub_18006139C.c)
 *     sub_180062484 @ 0x180062484 (sub_180062484.c)
 *     sub_1800630DC @ 0x1800630DC (sub_1800630DC.c)
 *     sub_180064C30 @ 0x180064C30 (sub_180064C30.c)
 *     sub_180064D64 @ 0x180064D64 (sub_180064D64.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_18007C1A8 @ 0x18007C1A8 (sub_18007C1A8.c)
 *     sub_18007C380 @ 0x18007C380 (sub_18007C380.c)
 *     sub_18007C7FC @ 0x18007C7FC (sub_18007C7FC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180065D00(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __m128 v4; // xmm0
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  __m128 v9; // xmm13
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rbx
  bool v15; // cl
  __int64 **v16; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v19; // r13
  __int64 v20; // rdi
  __m128 *v21; // rcx
  char v22; // bl
  int v23; // xmm12_4
  _DWORD *v24; // rbx
  double v25; // xmm0_8
  unsigned int v26; // xmm9_4
  double v27; // xmm0_8
  __int32 v28; // xmm8_4
  double v29; // xmm0_8
  unsigned int v30; // xmm7_4
  double v31; // xmm0_8
  unsigned int v32; // xmm6_4
  double v33; // xmm0_8
  __int64 v34; // rcx
  double v35; // xmm0_8
  unsigned __int8 v36; // al
  int v37; // edi
  double v38; // xmm0_8
  double v39; // xmm0_8
  double v40; // xmm0_8
  double v41; // xmm0_8
  double v42; // xmm0_8
  double v43; // xmm0_8
  double v44; // xmm0_8
  double v45; // xmm0_8
  float v46; // xmm6_4
  char v47; // al
  char v48; // bl
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // ebx
  int v53; // eax
  __int64 v54; // rax
  _QWORD *v55; // rsi
  int v56; // edi
  _QWORD *v57; // rax
  __int64 v58; // r8
  __int64 v59; // rbx
  int v60; // xmm14_4
  _QWORD *v61; // rax
  __int64 v62; // r8
  int v63; // xmm13_4
  double v64; // xmm0_8
  int v65; // xmm12_4
  double v66; // xmm0_8
  int v67; // xmm11_4
  double v68; // xmm0_8
  int v69; // xmm10_4
  double v70; // xmm0_8
  int v71; // xmm9_4
  double v72; // xmm0_8
  int v73; // xmm8_4
  double v74; // xmm0_8
  int v75; // xmm7_4
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rbx
  unsigned __int64 v81; // rsi
  double v82; // xmm0_8
  float v83; // xmm8_4
  double v84; // xmm0_8
  float v85; // xmm7_4
  double v86; // xmm0_8
  float v87; // xmm6_4
  double v88; // xmm0_8
  __m128i v89; // xmm10
  double v90; // xmm0_8
  float v91; // xmm8_4
  double v92; // xmm0_8
  float v93; // xmm7_4
  double v94; // xmm0_8
  float v95; // xmm6_4
  double v96; // xmm0_8
  __m128i v97; // xmm9
  double v98; // xmm0_8
  float v99; // xmm8_4
  double v100; // xmm0_8
  float v101; // xmm7_4
  double v102; // xmm0_8
  float v103; // xmm6_4
  double v104; // xmm0_8
  __m128i v105; // xmm8
  double v106; // xmm0_8
  float v107; // xmm7_4
  double v108; // xmm0_8
  float v109; // xmm6_4
  double v110; // xmm0_8
  __int64 v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // rbx
  __int64 v114; // rdx
  __int64 v115; // rcx
  float v116; // xmm0_4
  __int64 v117; // rax
  __int64 v118; // rcx
  float v119; // xmm1_4
  __int64 v120; // rax
  float v121; // xmm1_4
  unsigned int v122; // xmm2_4
  __int32 v123; // xmm0_4
  int v124; // ebx
  int v125; // edi
  __int64 result; // rax
  __m128 v127; // [rsp+A8h] [rbp-80h] BYREF
  __m128 v128; // [rsp+B8h] [rbp-70h] BYREF
  __m128 v129; // [rsp+C8h] [rbp-60h] BYREF
  int v130; // [rsp+D8h] [rbp-50h]
  int v131; // [rsp+DCh] [rbp-4Ch]
  int v132; // [rsp+E0h] [rbp-48h]
  int v133; // [rsp+E4h] [rbp-44h]
  int v134; // [rsp+E8h] [rbp-40h]
  float v135; // [rsp+ECh] [rbp-3Ch]
  int v136; // [rsp+F0h] [rbp-38h]
  int v137; // [rsp+F4h] [rbp-34h]
  int v138; // [rsp+F8h] [rbp-30h]
  int v139; // [rsp+FCh] [rbp-2Ch]
  int v140; // [rsp+100h] [rbp-28h]
  int v141; // [rsp+104h] [rbp-24h]
  float v142; // [rsp+108h] [rbp-20h]
  __int64 v143; // [rsp+110h] [rbp-18h]
  __m128 v144; // [rsp+118h] [rbp-10h] BYREF
  __m128 v145; // [rsp+128h] [rbp+0h] BYREF
  __int64 v146; // [rsp+138h] [rbp+10h]
  __int64 v147[3]; // [rsp+140h] [rbp+18h] BYREF
  __m128 v148; // [rsp+158h] [rbp+30h] BYREF
  __m128 v149; // [rsp+168h] [rbp+40h] BYREF
  __m128 v150; // [rsp+178h] [rbp+50h] BYREF
  _QWORD v151[2]; // [rsp+188h] [rbp+60h] BYREF
  __m128 v152; // [rsp+198h] [rbp+70h] BYREF
  __m128 v153; // [rsp+1A8h] [rbp+80h] BYREF
  _BYTE v154[200]; // [rsp+1B8h] [rbp+90h] BYREF
  float v155; // [rsp+2C8h] [rbp+1A0h]

  v7 = 0LL;
  v8 = sub_1800323A0(a1, *(_DWORD *)(*a4 + 112));
  v9 = 0LL;
  v10 = 0;
  LOBYTE(v11) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C56E8, v11) )
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5708);
  LOBYTE(v12) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C5748, v12) )
  {
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5768);
    v9 = v4;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C5808, 0LL) )
    v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C5808, 0LL);
  *(_OWORD *)v147 = 0LL;
  v143 = sub_18005D728(*a4, v13);
  v14 = **(__int64 ***)(v143 + 104);
  while ( !*((_BYTE *)v14 + 25) )
  {
    v15 = *((_DWORD *)v14 + 8) == v10;
    *(_BYTE *)(v14[5] + 88) = v15;
    if ( v15 )
      sub_18001244C(v147, v14 + 5);
    v16 = (__int64 **)v14[2];
    if ( *((_BYTE *)v16 + 25) )
    {
      for ( i = (__int64 *)v14[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v14 = i;
      v14 = i;
    }
    else
    {
      v14 = (__int64 *)v14[2];
      for ( j = *v16; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v14 = j;
    }
  }
  v19 = *(_QWORD *)(a1 + 512);
  v20 = v147[0];
  if ( v147[0] )
  {
    unknown_libname_81(&v127, (_QWORD *)(v147[0] + 448));
    v21 = &v127;
    v22 = 1;
    v7 = v127.m128_u64[0];
  }
  else
  {
    v129.m128_u64[1] = 0LL;
    v21 = &v129;
    v22 = 2;
  }
  v151[0] = v7;
  v146 = v21->m128_i64[1];
  v151[1] = v146;
  v21->m128_u64[0] = 0LL;
  v21->m128_u64[1] = 0LL;
  if ( (v22 & 2) != 0 )
  {
    v22 &= ~2u;
    if ( v129.m128_u64[1] )
      sub_18001050C(v129.m128_i64[1]);
  }
  if ( (v22 & 1) != 0 && v127.m128_u64[1] )
    sub_18001050C(v127.m128_i64[1]);
  if ( v20 )
    v23 = *(_DWORD *)(v20 + 528);
  else
    v23 = 1065353216;
  LODWORD(v24) = 0;
  if ( v7 )
  {
    v24 = *(_DWORD **)(v7 + 128);
    if ( v24 )
      LODWORD(v24) = *v24;
  }
  sub_18004D168(v19, (__int64)&unk_1801C78E8, v151);
  sub_18004D1A0(v19, (__int64)&unk_1801C78E8, (_QWORD *)(v143 + 248));
  v25 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5868);
  v26 = LODWORD(v25);
  v27 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5888);
  v28 = LODWORD(v27);
  v29 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5788);
  v30 = LODWORD(v29);
  v31 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C57A8);
  v32 = LODWORD(v31);
  *(float *)&v31 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C57C8);
  v127.m128_u64[0] = __PAIR64__(v32, v30);
  v127.m128_u64[1] = LODWORD(v31) | 0x3F80000000000000LL;
  v129 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v127);
  sub_18007C1A8(*(_QWORD *)(v19 + 18648), &unk_1801C78C8);
  v127.m128_f32[0] = (float)(int)v24;
  *(unsigned __int64 *)((char *)v127.m128_u64 + 4) = __PAIR64__(v26, v23);
  v127.m128_i32[3] = v28;
  v129 = v127;
  sub_18004D1D8(v19, (__int64)&unk_1801C7888);
  v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5728);
  v131 = LODWORD(v33);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C57E8);
  sub_180039960((__int64)&v129, (unsigned __int64 *)&qword_1800F76B0);
  sub_180062484(v34, &v129, a4);
  v35 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C58A8);
  v134 = LODWORD(v35);
  v135 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C58C8);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C6668, 0LL);
  v37 = v36;
  v38 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6688);
  v130 = LODWORD(v38);
  v39 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6968);
  v133 = LODWORD(v39);
  v40 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C58E8);
  v136 = LODWORD(v40);
  v41 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5908);
  v137 = LODWORD(v41);
  v42 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5928);
  v138 = LODWORD(v42);
  v43 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5948);
  v139 = LODWORD(v43);
  v44 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5968);
  v140 = LODWORD(v44);
  v45 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5828);
  v46 = *(float *)&v45;
  v141 = LODWORD(v45);
  v142 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5848);
  if ( v46 > 0.0 )
    *(_BYTE *)(a1 + 1409) = 1;
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C5628, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C69A8, 0LL);
  sub_18004C574(*(_QWORD *)(a1 + 512), &v127);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C6648, 0LL);
  v48 = v47;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6628);
  LOBYTE(v49) = v48;
  sub_180064D64(v51, v50, v49, &v127, (__int64)&unk_1801C73E8);
  v52 = sub_18005D9F4(v8);
  if ( v52 )
    v130 = 1065353216;
  v53 = 0;
  if ( !v52 )
    v53 = v37;
  v132 = v53;
  v54 = sub_180016F54((__int64)v154, (__int64)&unk_1801C7F08);
  sub_18004CCE0(v19, &v129, v54);
  if ( v52 )
    v155 = 0.0;
  else
    v155 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5B28);
  v145.m128_u64[0] = (unsigned __int64)&v152;
  v55 = unknown_libname_81(&v152, &v129);
  v56 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C5C28, 0LL);
  v57 = unknown_libname_81(&v148, a4);
  v59 = *sub_1800321B0(a1, &v144, v58, v57);
  sub_180058EBC(v59);
  v60 = *(_DWORD *)(v59 + 332);
  v61 = unknown_libname_81(&v149, a4);
  v63 = *(_DWORD *)(*sub_1800321B0(a1, &v150, v62, v61) + 328LL);
  v64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5BE8);
  v65 = LODWORD(v64);
  v66 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5BC8);
  v67 = LODWORD(v66);
  v68 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5BA8);
  v69 = LODWORD(v68);
  v70 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5B88);
  v71 = LODWORD(v70);
  v72 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5B68);
  v73 = LODWORD(v72);
  v74 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5B48);
  v75 = LODWORD(v74);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C4808);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C47E8);
  sub_180064DAC(
    v77,
    v76,
    v78,
    v79,
    v75,
    v73,
    v71,
    v69,
    v67,
    v65,
    v63,
    v60,
    v56,
    (__int64)v55,
    &v127,
    (__int64)&unk_1801C8028,
    (__int64)&unk_1801C8048,
    (__int64)&unk_1801C8068,
    (__int64)&unk_1801C8088);
  if ( v150.m128_u64[1] )
    sub_18001050C(v150.m128_i64[1]);
  if ( v144.m128_u64[1] )
    sub_18001050C(v144.m128_i64[1]);
  v80 = v129.m128_u64[0];
  sub_18005BFD4(v129.m128_i64[0], (__int64)&unk_1801C82C8, v155 > 0.0);
  sub_18005BFD4(v80, (__int64)&unk_1801C8228, 1);
  sub_18005BFD4(v80, (__int64)&unk_1801C8248, 1);
  sub_18005BFD4(v80, (__int64)&unk_1801C8288, 1);
  sub_18005BFD4(v80, (__int64)&unk_1801C82A8, 1);
  v81 = v127.m128_u64[0];
  sub_18007C380(v127.m128_u64[0], &unk_1801C73A8);
  sub_18007C380(v81, &unk_1801C73C8);
  sub_18007C380(v81, &unk_1801C8008);
  sub_18007C380(v81, &unk_1801C7428);
  sub_18007C380(v81, &unk_1801C7448);
  sub_18007C380(v81, &unk_1801C7468);
  sub_18007C380(v81, &unk_1801C7488);
  sub_18007C380(v81, &unk_1801C7508);
  sub_18007C380(v81, &unk_1801C7528);
  sub_18007C380(v81, &unk_1801C7548);
  sub_18007C380(v81, &unk_1801C7568);
  sub_18007C380(v81, &unk_1801C7588);
  sub_18007C380(v81, &unk_1801C74A8);
  sub_18007C380(v81, &unk_1801C74C8);
  sub_18007C380(v81, &unk_1801C74E8);
  sub_18007C380(v81, &unk_1801C7388);
  v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5E28);
  v83 = *(float *)&v82;
  v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5DC8);
  v85 = *(float *)&v84;
  v86 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5D48);
  v87 = *(float *)&v86;
  v88 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5CC8);
  v89 = _mm_loadu_si128((const __m128i *)sub_18006139C(&v152, *(float *)&v88, v87, v85, v83));
  v90 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5E48);
  v91 = *(float *)&v90;
  v92 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5DE8);
  v93 = *(float *)&v92;
  v94 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5D68);
  v95 = *(float *)&v94;
  v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5CE8);
  v97 = _mm_loadu_si128((const __m128i *)sub_18006139C(&v128, *(float *)&v96, v95, v93, v91));
  v98 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5E68);
  v99 = *(float *)&v98;
  v100 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5E08);
  v101 = *(float *)&v100;
  v102 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5D88);
  v103 = *(float *)&v102;
  v104 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5D08);
  v105 = _mm_loadu_si128((const __m128i *)sub_18006139C(&v145, *(float *)&v104, v103, v101, v99));
  v106 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5DA8);
  v107 = *(float *)&v106;
  v108 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5D28);
  v109 = *(float *)&v108;
  v110 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5CA8);
  v144 = (__m128)v89;
  v150 = (__m128)v97;
  v149 = (__m128)v105;
  v148 = *sub_18006139C(&v153, *(float *)&v110, v109, v107, 0.0);
  sub_180064C30(
    v111,
    &v148,
    &v149,
    &v150,
    &v144,
    &v127,
    (__int64)&unk_1801C80E8,
    (__int64)&unk_1801C8108,
    (__int64)&unk_1801C8128);
  *(float *)&v110 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5C88);
  v112 = v143;
  v113 = *(_QWORD *)(v143 + 120);
  *(float *)(v113 + 160) = sub_18001110C(*(float *)&v110, 0.0, 1.0);
  unknown_libname_81(&v145, (_QWORD *)(*(_QWORD *)(v112 + 120) + 96LL));
  v114 = *(_QWORD *)(v112 + 120);
  v115 = *(_QWORD *)(v114 + 144);
  if ( v115 < 0 )
  {
    v117 = *(_QWORD *)(v114 + 144) & 1LL | ((unsigned __int64)v115 >> 1);
    v116 = (float)(int)v117 + (float)(int)v117;
  }
  else
  {
    v116 = (float)(int)v115;
  }
  v118 = *(_QWORD *)(v114 + 136);
  if ( v118 < 0 )
  {
    v120 = *(_QWORD *)(v114 + 136) & 1LL | ((unsigned __int64)v118 >> 1);
    v119 = (float)(int)v120 + (float)(int)v120;
  }
  else
  {
    v119 = (float)(int)v118;
  }
  v121 = (float)(v119 - 1.0) / v116;
  *(float *)&v122 = 0.5 / v116;
  v123 = *(_DWORD *)(v114 + 160);
  v128.m128_f32[0] = v121;
  *(unsigned __int64 *)((char *)v128.m128_u64 + 4) = v122;
  v128.m128_i32[3] = v123;
  sub_18004D168(v19, (__int64)&unk_1801C80A8, &v145);
  sub_18004D1A0(v19, (__int64)&unk_1801C80A8, (_QWORD *)(v112 + 232));
  v144 = v128;
  sub_18004D1D8(v19, (__int64)&unk_1801C80C8);
  v124 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C4928, 0LL);
  v125 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C4948, 0LL);
  dword_1801C2BB8 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C4848, 0LL);
  dword_1801C2BBC = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(
                      v8,
                      &unk_1801C4868,
                      1LL);
  dword_1801C2BC0 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(
                      v8,
                      &unk_1801C48A8,
                      2LL);
  dword_1801C2BC4 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(
                      v8,
                      &unk_1801C4888,
                      3LL);
  v128.m128_f32[0] = (float)v124;
  *(unsigned __int64 *)((char *)v128.m128_u64 + 4) = COERCE_UNSIGNED_INT((float)v125);
  v128.m128_i32[3] = 0;
  sub_18007C7FC(v81, &unk_1801C75A8);
  if ( v124 || v125 )
    *(_BYTE *)(a1 + 1409) = 1;
  result = sub_1800630DC(a1, (__int64)a4);
  if ( v145.m128_u64[1] )
    result = sub_18001050C(v145.m128_i64[1]);
  if ( v129.m128_u64[1] )
    result = sub_18001050C(v129.m128_i64[1]);
  if ( v127.m128_u64[1] )
    result = sub_18001050C(v127.m128_i64[1]);
  if ( v146 )
    result = sub_18001050C(v146);
  if ( v147[1] )
    return sub_18001050C(v147[1]);
  return result;
}
