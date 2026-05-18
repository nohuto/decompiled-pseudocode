/*
 * XREFs of sub_180065E60 @ 0x180065E60
 * Callers:
 *     sub_180061AF0 @ 0x180061AF0 (sub_180061AF0.c)
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001120C @ 0x18001120C (sub_18001120C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180032310 @ 0x180032310 (sub_180032310.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180039AC0 @ 0x180039AC0 (sub_180039AC0.c)
 *     sub_18004C6D4 @ 0x18004C6D4 (sub_18004C6D4.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_18004D2C8 @ 0x18004D2C8 (sub_18004D2C8.c)
 *     sub_18004D300 @ 0x18004D300 (sub_18004D300.c)
 *     sub_18004D338 @ 0x18004D338 (sub_18004D338.c)
 *     sub_18005901C @ 0x18005901C (sub_18005901C.c)
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 *     sub_18005D888 @ 0x18005D888 (sub_18005D888.c)
 *     sub_18005DB54 @ 0x18005DB54 (sub_18005DB54.c)
 *     sub_1800614FC @ 0x1800614FC (sub_1800614FC.c)
 *     sub_1800625E4 @ 0x1800625E4 (sub_1800625E4.c)
 *     sub_18006323C @ 0x18006323C (sub_18006323C.c)
 *     sub_180064D90 @ 0x180064D90 (sub_180064D90.c)
 *     sub_180064EC4 @ 0x180064EC4 (sub_180064EC4.c)
 *     sub_180064F0C @ 0x180064F0C (sub_180064F0C.c)
 *     sub_18007C308 @ 0x18007C308 (sub_18007C308.c)
 *     sub_18007C4E0 @ 0x18007C4E0 (sub_18007C4E0.c)
 *     sub_18007C95C @ 0x18007C95C (sub_18007C95C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180065E60(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
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
  v8 = sub_180032500(a1, *(_DWORD *)(*a4 + 112));
  v9 = 0LL;
  v10 = 0;
  LOBYTE(v11) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C66F8, v11) )
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6718);
  LOBYTE(v12) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C6758, v12) )
  {
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6778);
    v9 = v4;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C6818, 0LL) )
    v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C6818, 0LL);
  *(_OWORD *)v147 = 0LL;
  v143 = sub_18005D888(*a4, v13);
  v14 = **(__int64 ***)(v143 + 104);
  while ( !*((_BYTE *)v14 + 25) )
  {
    v15 = *((_DWORD *)v14 + 8) == v10;
    *(_BYTE *)(v14[5] + 88) = v15;
    if ( v15 )
      sub_18001254C(v147, v14 + 5);
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
      sub_18001060C(v129.m128_i64[1]);
  }
  if ( (v22 & 1) != 0 && v127.m128_u64[1] )
    sub_18001060C(v127.m128_i64[1]);
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
  sub_18004D2C8(v19, (__int64)&unk_1801C88F8, v151);
  sub_18004D300(v19, (__int64)&unk_1801C88F8, (_QWORD *)(v143 + 248));
  v25 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6878);
  v26 = LODWORD(v25);
  v27 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6898);
  v28 = LODWORD(v27);
  v29 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6798);
  v30 = LODWORD(v29);
  v31 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C67B8);
  v32 = LODWORD(v31);
  *(float *)&v31 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C67D8);
  v127.m128_u64[0] = __PAIR64__(v32, v30);
  v127.m128_u64[1] = LODWORD(v31) | 0x3F80000000000000LL;
  v129 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v127);
  sub_18007C308(*(_QWORD *)(v19 + 18648), &unk_1801C88D8);
  v127.m128_f32[0] = (float)(int)v24;
  *(unsigned __int64 *)((char *)v127.m128_u64 + 4) = __PAIR64__(v26, v23);
  v127.m128_i32[3] = v28;
  v129 = v127;
  sub_18004D338(v19, (__int64)&unk_1801C8898);
  v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6738);
  v131 = LODWORD(v33);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C67F8);
  sub_180039AC0((__int64)&v129, (unsigned __int64 *)&qword_1800F86B0);
  sub_1800625E4(v34, &v129, a4);
  v35 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C68B8);
  v134 = LODWORD(v35);
  v135 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C68D8);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C7678, 0LL);
  v37 = v36;
  v38 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C7698);
  v130 = LODWORD(v38);
  v39 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C7978);
  v133 = LODWORD(v39);
  v40 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C68F8);
  v136 = LODWORD(v40);
  v41 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6918);
  v137 = LODWORD(v41);
  v42 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6938);
  v138 = LODWORD(v42);
  v43 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6958);
  v139 = LODWORD(v43);
  v44 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6978);
  v140 = LODWORD(v44);
  v45 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6838);
  v46 = *(float *)&v45;
  v141 = LODWORD(v45);
  v142 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6858);
  if ( v46 > 0.0 )
    *(_BYTE *)(a1 + 1409) = 1;
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C6638, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C79B8, 0LL);
  sub_18004C6D4(*(_QWORD *)(a1 + 512), &v127);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C7658, 0LL);
  v48 = v47;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C7638);
  LOBYTE(v49) = v48;
  sub_180064EC4(v51, v50, v49, &v127, (__int64)&unk_1801C83F8);
  v52 = sub_18005DB54(v8);
  if ( v52 )
    v130 = 1065353216;
  v53 = 0;
  if ( !v52 )
    v53 = v37;
  v132 = v53;
  v54 = sub_180017054((__int64)v154, (__int64)&unk_1801C8F18);
  sub_18004CE40(v19, &v129, v54);
  if ( v52 )
    v155 = 0.0;
  else
    v155 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6B38);
  v145.m128_u64[0] = (unsigned __int64)&v152;
  v55 = unknown_libname_81(&v152, &v129);
  v56 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C6C38, 0LL);
  v57 = unknown_libname_81(&v148, a4);
  v59 = *sub_180032310(a1, &v144, v58, v57);
  sub_18005901C(v59);
  v60 = *(_DWORD *)(v59 + 332);
  v61 = unknown_libname_81(&v149, a4);
  v63 = *(_DWORD *)(*sub_180032310(a1, &v150, v62, v61) + 328LL);
  v64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6BF8);
  v65 = LODWORD(v64);
  v66 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6BD8);
  v67 = LODWORD(v66);
  v68 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6BB8);
  v69 = LODWORD(v68);
  v70 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6B98);
  v71 = LODWORD(v70);
  v72 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6B78);
  v73 = LODWORD(v72);
  v74 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6B58);
  v75 = LODWORD(v74);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C5818);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C57F8);
  sub_180064F0C(
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
    (__int64)&unk_1801C9038,
    (__int64)&unk_1801C9058,
    (__int64)&unk_1801C9078,
    (__int64)&unk_1801C9098);
  if ( v150.m128_u64[1] )
    sub_18001060C(v150.m128_i64[1]);
  if ( v144.m128_u64[1] )
    sub_18001060C(v144.m128_i64[1]);
  v80 = v129.m128_u64[0];
  sub_18005C134(v129.m128_i64[0], (__int64)&unk_1801C92D8, v155 > 0.0);
  sub_18005C134(v80, (__int64)&unk_1801C9238, 1);
  sub_18005C134(v80, (__int64)&unk_1801C9258, 1);
  sub_18005C134(v80, (__int64)&unk_1801C9298, 1);
  sub_18005C134(v80, (__int64)&unk_1801C92B8, 1);
  v81 = v127.m128_u64[0];
  sub_18007C4E0(v127.m128_u64[0], &unk_1801C83B8);
  sub_18007C4E0(v81, &unk_1801C83D8);
  sub_18007C4E0(v81, &unk_1801C9018);
  sub_18007C4E0(v81, &unk_1801C8438);
  sub_18007C4E0(v81, &unk_1801C8458);
  sub_18007C4E0(v81, &unk_1801C8478);
  sub_18007C4E0(v81, &unk_1801C8498);
  sub_18007C4E0(v81, &unk_1801C8518);
  sub_18007C4E0(v81, &unk_1801C8538);
  sub_18007C4E0(v81, &unk_1801C8558);
  sub_18007C4E0(v81, &unk_1801C8578);
  sub_18007C4E0(v81, &unk_1801C8598);
  sub_18007C4E0(v81, &unk_1801C84B8);
  sub_18007C4E0(v81, &unk_1801C84D8);
  sub_18007C4E0(v81, &unk_1801C84F8);
  sub_18007C4E0(v81, &unk_1801C8398);
  v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6E38);
  v83 = *(float *)&v82;
  v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6DD8);
  v85 = *(float *)&v84;
  v86 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6D58);
  v87 = *(float *)&v86;
  v88 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6CD8);
  v89 = _mm_loadu_si128((const __m128i *)sub_1800614FC(&v152, *(float *)&v88, v87, v85, v83));
  v90 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6E58);
  v91 = *(float *)&v90;
  v92 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6DF8);
  v93 = *(float *)&v92;
  v94 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6D78);
  v95 = *(float *)&v94;
  v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6CF8);
  v97 = _mm_loadu_si128((const __m128i *)sub_1800614FC(&v128, *(float *)&v96, v95, v93, v91));
  v98 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6E78);
  v99 = *(float *)&v98;
  v100 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6E18);
  v101 = *(float *)&v100;
  v102 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6D98);
  v103 = *(float *)&v102;
  v104 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6D18);
  v105 = _mm_loadu_si128((const __m128i *)sub_1800614FC(&v145, *(float *)&v104, v103, v101, v99));
  v106 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6DB8);
  v107 = *(float *)&v106;
  v108 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6D38);
  v109 = *(float *)&v108;
  v110 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6CB8);
  v144 = (__m128)v89;
  v150 = (__m128)v97;
  v149 = (__m128)v105;
  v148 = *sub_1800614FC(&v153, *(float *)&v110, v109, v107, 0.0);
  sub_180064D90(
    v111,
    &v148,
    &v149,
    &v150,
    &v144,
    &v127,
    (__int64)&unk_1801C90F8,
    (__int64)&unk_1801C9118,
    (__int64)&unk_1801C9138);
  *(float *)&v110 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C6C98);
  v112 = v143;
  v113 = *(_QWORD *)(v143 + 120);
  *(float *)(v113 + 160) = sub_18001120C(*(float *)&v110, 0.0, 1.0);
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
  sub_18004D2C8(v19, (__int64)&unk_1801C90B8, &v145);
  sub_18004D300(v19, (__int64)&unk_1801C90B8, (_QWORD *)(v112 + 232));
  v144 = v128;
  sub_18004D338(v19, (__int64)&unk_1801C90D8);
  v124 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C5938, 0LL);
  v125 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C5958, 0LL);
  dword_1801C3BE8 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C5858, 0LL);
  dword_1801C3BEC = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(
                      v8,
                      &unk_1801C5878,
                      1LL);
  dword_1801C3BF0 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(
                      v8,
                      &unk_1801C58B8,
                      2LL);
  dword_1801C3BF4 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(
                      v8,
                      &unk_1801C5898,
                      3LL);
  v128.m128_f32[0] = (float)v124;
  *(unsigned __int64 *)((char *)v128.m128_u64 + 4) = COERCE_UNSIGNED_INT((float)v125);
  v128.m128_i32[3] = 0;
  sub_18007C95C(v81, &unk_1801C85B8);
  if ( v124 || v125 )
    *(_BYTE *)(a1 + 1409) = 1;
  result = sub_18006323C(a1, (__int64)a4);
  if ( v145.m128_u64[1] )
    result = sub_18001060C(v145.m128_i64[1]);
  if ( v129.m128_u64[1] )
    result = sub_18001060C(v129.m128_i64[1]);
  if ( v127.m128_u64[1] )
    result = sub_18001060C(v127.m128_i64[1]);
  if ( v146 )
    result = sub_18001060C(v146);
  if ( v147[1] )
    return sub_18001060C(v147[1]);
  return result;
}
