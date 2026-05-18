/*
 * XREFs of sub_1800604D0 @ 0x1800604D0
 * Callers:
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180011CE0 @ 0x180011CE0 (sub_180011CE0.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180012D60 @ 0x180012D60 (sub_180012D60.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_180039B28 @ 0x180039B28 (sub_180039B28.c)
 *     sub_18003A4E8 @ 0x18003A4E8 (sub_18003A4E8.c)
 *     sub_18003DD54 @ 0x18003DD54 (sub_18003DD54.c)
 *     sub_18004E374 @ 0x18004E374 (sub_18004E374.c)
 *     sub_1800556E0 @ 0x1800556E0 (sub_1800556E0.c)
 *     sub_18005C584 @ 0x18005C584 (sub_18005C584.c)
 *     sub_18005C6A4 @ 0x18005C6A4 (sub_18005C6A4.c)
 *     sub_18005C7C4 @ 0x18005C7C4 (sub_18005C7C4.c)
 *     sub_18005C8E4 @ 0x18005C8E4 (sub_18005C8E4.c)
 *     sub_18005D728 @ 0x18005D728 (sub_18005D728.c)
 *     sub_18005EBD8 @ 0x18005EBD8 (sub_18005EBD8.c)
 *     sub_180084928 @ 0x180084928 (sub_180084928.c)
 *     sub_180084964 @ 0x180084964 (sub_180084964.c)
 *     sub_180086A54 @ 0x180086A54 (sub_180086A54.c)
 */

// Hidden C++ exception states: #wind=51
char __fastcall sub_1800604D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  signed int v13; // r15d
  char *v14; // r13
  __int64 v15; // rbx
  int v16; // r12d
  __int64 *v17; // rdi
  char *v18; // rsi
  _BYTE *v19; // r14
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rbx
  __m128 v29; // xmm3
  __m128 v30; // xmm0
  __int64 v31; // rbx
  __m128 v32; // xmm3
  __m128 v33; // xmm0
  __int64 v34; // rbx
  __m128 v35; // xmm3
  __m128 v36; // xmm0
  __int64 *v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 *v48; // rbx
  __int64 *v49; // rax
  __int64 *v50; // rax
  __int64 *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 *v55; // rax
  __int128 v57; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+40h] [rbp-C8h]
  __int64 *v60; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A8h]
  __int64 v62; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+70h] [rbp-98h]
  __int64 v64; // [rsp+78h] [rbp-90h] BYREF
  __int64 v65; // [rsp+80h] [rbp-88h]
  _BYTE v66[32]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-48h]
  __int64 v69; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v70; // [rsp+E0h] [rbp-28h]
  _QWORD v71[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v72; // [rsp+118h] [rbp+10h] BYREF
  __int64 v73; // [rsp+120h] [rbp+18h]
  __int64 v74; // [rsp+138h] [rbp+30h] BYREF
  __int64 v75; // [rsp+140h] [rbp+38h]
  __int64 v76; // [rsp+158h] [rbp+50h] BYREF
  __int64 v77; // [rsp+160h] [rbp+58h]
  __int64 v78; // [rsp+178h] [rbp+70h] BYREF
  __int64 v79; // [rsp+180h] [rbp+78h]
  _BYTE v80[32]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v81[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v82[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v83[16]; // [rsp+1D8h] [rbp+D0h] BYREF

  v60 = a2;
  sub_180012344((__int64)v80, (__int64)&unk_1801C4028);
  v3 = *a2;
  v62 = (__int64)v71;
  v4 = sub_180012344((__int64)v71, (__int64)v80);
  std::string::string(&v72, "Key");
  v5 = sub_180039B28((__int64)&v72);
  sub_18003DD54(v3, (__int64)v81, v5, v4);
  sub_180011A5C((__int64)&v72);
  v6 = *a2;
  v62 = (__int64)&v64;
  v7 = sub_180012344((__int64)&v64, (__int64)v80);
  std::string::string(&v78, "Fill");
  v8 = sub_180039B28((__int64)&v78);
  sub_18003DD54(v6, (__int64)v82, v8, v7);
  sub_180011A5C((__int64)&v78);
  v9 = *a2;
  v62 = (__int64)v71;
  v10 = sub_180012344((__int64)v71, (__int64)v80);
  std::string::string(&v72, "Back");
  v11 = sub_180039B28((__int64)&v72);
  sub_18003DD54(v9, (__int64)v83, v11, v10);
  sub_180011A5C((__int64)&v72);
  v62 = sub_18005D728(*a2, v12);
  v13 = 0;
  v14 = (char *)(v62 + 8);
  v15 = v62 + 56;
  *(_QWORD *)&v57 = v62 + 56;
  v16 = 3;
  v17 = (__int64 *)(v62 + 136);
  v18 = (char *)(v62 + 8);
  v19 = &v81[-v62];
  do
  {
    v20 = sub_180011CE0(*(__int64 *)((char *)v17 + (_QWORD)v19 - 136), &v72);
    sub_180011010(v18, v20);
    if ( v73 )
      sub_18001050C(v73);
    v21 = sub_18005C584(*(__int64 *)((char *)v17 + (_QWORD)v19 - 136), &v78);
    sub_180011010((_QWORD *)(v15 + v18 - v14), v21);
    if ( v79 )
      sub_18001050C(v79);
    v22 = sub_18005C8E4(*(__int64 *)((char *)v17 + (_QWORD)v19 - 136), &v64);
    sub_180011010((_QWORD *)v18 + 16, v22);
    if ( v65 )
      sub_18001050C(v65);
    sub_180084964(*v17, 1LL);
    v23 = *v17;
    v24 = sub_180027470(&v74, v13);
    v25 = sub_18001B518((__int64)v71, (__int64)"ShadowMap", v24);
    sub_1800132F4(v23 + 24, v25);
    sub_180011A5C((__int64)v71);
    sub_180011A5C((__int64)&v74);
    sub_1800556E0(*v17, (__int64)&unk_1801C3FA8);
    *(_DWORD *)(*v17 + 292) = v16;
    v26 = sub_180027470(v71, v13);
    sub_18001B518((__int64)&v76, (__int64)"Global/ShadowBuffer", v26);
    sub_180011A5C((__int64)v71);
    v27 = sub_180027470(&v74, v13);
    sub_18001B518((__int64)&v69, (__int64)"Global/ColoredShadowBuffer", v27);
    sub_180011A5C((__int64)&v74);
    sub_180084928(*v17, &v76, &v69);
    sub_180011A5C((__int64)&v69);
    sub_180011A5C((__int64)&v76);
    ++v13;
    v18 += 16;
    --v16;
    v17 += 2;
    v15 = v57;
  }
  while ( v16 > 0 );
  unknown_libname_81(&v72, v14);
  unknown_libname_81(&v78, (_QWORD *)v14 + 2);
  unknown_libname_81(&v64, (_QWORD *)v14 + 4);
  std::string::string(&v69, "Key");
  v28 = v72;
  sub_1800132F4(v72 + 24, (__int64)&v69);
  sub_180011A5C((__int64)&v69);
  *(_BYTE *)(v28 + 72) = 1;
  *(_BYTE *)(v28 + 124) = 1;
  sub_180011B04(v28 + 56, &v58);
  LODWORD(v68) = -1074818325;
  v29 = 0LL;
  v29.m128_u64[0] = _mm_unpacklo_ps((__m128)0xBFDE17FA, (__m128)0x40153B12u).m128_u64[0];
  v67 = 0LL;
  v30 = _mm_mul_ps(_mm_movelh_ps(v29, (__m128)0xBFEF92EB), (__m128)xmmword_18018C570);
  *(_QWORD *)&v57 = v30.m128_u64[0];
  DWORD2(v57) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
  sub_180012D60(v58, &v57);
  if ( v59 )
    sub_18001050C(v59);
  sub_180011B04(v28 + 56, &v58);
  *(_QWORD *)&v57 = 0x3F80000000000000LL;
  DWORD2(v57) = 0;
  v67 = 0LL;
  LODWORD(v68) = 0;
  sub_18003A4E8(v58, (unsigned __int64 *)&v67, (__int64)&v57);
  if ( v59 )
    sub_18001050C(v59);
  *(_DWORD *)(v28 + 104) = 1092370432;
  *(_DWORD *)(v28 + 116) = 1028443341;
  std::string::string(&v69, "Fill");
  v31 = v78;
  sub_1800132F4(v78 + 24, (__int64)&v69);
  sub_180011A5C((__int64)&v69);
  *(_BYTE *)(v31 + 72) = 1;
  *(_BYTE *)(v31 + 124) = 1;
  *(_DWORD *)(v31 + 88) = 1060487823;
  *(_DWORD *)(v31 + 92) = 1061997773;
  *(_DWORD *)(v31 + 96) = 1065151889;
  *(_DWORD *)(v31 + 100) = 1065353216;
  sub_180011B04(v31 + 56, &v58);
  v32 = 0LL;
  v32.m128_u64[0] = _mm_unpacklo_ps((__m128)0x3FE02A60u, (__m128)0x4011700Cu).m128_u64[0];
  v33 = _mm_mul_ps(_mm_movelh_ps(v32, (__m128)0xC023EE53), (__m128)xmmword_18018C570);
  v67 = v33.m128_u64[0];
  LODWORD(v68) = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
  sub_180012D60(v58, &v67);
  if ( v59 )
    sub_18001050C(v59);
  sub_180011B04(v31 + 56, &v58);
  v67 = 0x3F80000000000000LL;
  LODWORD(v68) = 0;
  *(_QWORD *)&v57 = 0LL;
  DWORD2(v57) = 0;
  sub_18003A4E8(v58, (unsigned __int64 *)&v57, (__int64)&v67);
  if ( v59 )
    sub_18001050C(v59);
  *(_DWORD *)(v31 + 104) = 1086849024;
  *(_DWORD *)(v31 + 116) = 1036831949;
  std::string::string(&v69, "Back");
  v34 = v64;
  sub_1800132F4(v64 + 24, (__int64)&v69);
  sub_180011A5C((__int64)&v69);
  *(_BYTE *)(v34 + 72) = 1;
  *(_BYTE *)(v34 + 124) = 1;
  *(_DWORD *)(v34 + 88) = 1063144775;
  *(_DWORD *)(v34 + 92) = 1060773036;
  *(_DWORD *)(v34 + 96) = 1065353216;
  *(_DWORD *)(v34 + 100) = 1065353216;
  sub_180011B04(v34 + 56, &v58);
  v35 = 0LL;
  v35.m128_u64[0] = _mm_unpacklo_ps((__m128)0x3FD6B197u, (__m128)0x4025238Bu).m128_u64[0];
  v36 = _mm_mul_ps(_mm_movelh_ps(v35, (__m128)0x3FC5CCF6u), (__m128)xmmword_18018C570);
  v67 = v36.m128_u64[0];
  LODWORD(v68) = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
  sub_180012D60(v58, &v67);
  if ( v59 )
    sub_18001050C(v59);
  sub_180011B04(v34 + 56, &v58);
  v67 = 0x3F80000000000000LL;
  LODWORD(v68) = 0;
  *(_QWORD *)&v57 = 0LL;
  DWORD2(v57) = 0;
  sub_18003A4E8(v58, (unsigned __int64 *)&v57, (__int64)&v67);
  if ( v59 )
    sub_18001050C(v59);
  *(_DWORD *)(v34 + 104) = 1078460416;
  *(_DWORD *)(v34 + 116) = 1045220557;
  v37 = v60;
  v38 = *v60;
  v60 = v71;
  v39 = sub_180012344((__int64)v71, (__int64)&unk_1801C4028);
  std::string::string(&v76, "LightProbe0");
  v40 = sub_180039B28((__int64)&v76);
  sub_18003DD54(v38, (__int64)&v69, v40, v39);
  sub_180011A5C((__int64)&v76);
  v41 = *v37;
  v60 = &v58;
  v42 = sub_180012344((__int64)&v58, (__int64)&unk_1801C4028);
  std::string::string(&v74, "LightProbe1");
  v43 = sub_180039B28((__int64)&v74);
  sub_18003DD54(v41, (__int64)&v76, v43, v42);
  sub_180011A5C((__int64)&v74);
  v44 = *v37;
  v60 = v71;
  v45 = sub_180012344((__int64)v71, (__int64)&unk_1801C4028);
  std::string::string(&v67, "LightProbe2");
  v46 = sub_180039B28((__int64)&v67);
  sub_18003DD54(v44, (__int64)&v74, v46, v45);
  sub_180011A5C((__int64)&v67);
  sub_18005C7C4(v69, &v58);
  sub_18005C7C4(v76, &v60);
  sub_18005C7C4(v74, &v67);
  v57 = xmmword_18018C590;
  sub_18004E374(v58, (__int64)&v57);
  v57 = xmmword_18018C590;
  sub_18004E374((__int64)v60, (__int64)&v57);
  v57 = xmmword_18018C590;
  sub_18004E374(v67, (__int64)&v57);
  v47 = v62;
  v48 = (__int64 *)(v62 + 104);
  LODWORD(v57) = 0;
  v49 = (__int64 *)sub_18005EBD8((__int64 *)(v62 + 104), &v57);
  sub_18001244C(v49, &v58);
  LODWORD(v57) = 1;
  v50 = (__int64 *)sub_18005EBD8(v48, &v57);
  sub_18001244C(v50, &v60);
  LODWORD(v57) = 2;
  v51 = (__int64 *)sub_18005EBD8(v48, &v57);
  sub_18001244C(v51, &v67);
  v52 = *v37;
  v62 = (__int64)v66;
  v53 = sub_180012344((__int64)v66, (__int64)&unk_1801C4028);
  std::string::string(v71, "ColorTransform");
  v54 = sub_180039B28((__int64)v71);
  sub_18003DD54(v52, (__int64)&v62, v54, v53);
  sub_180011A5C((__int64)v71);
  v55 = sub_18005C6A4(v62, &v57);
  sub_180011010((_QWORD *)(v47 + 120), v55);
  if ( *((_QWORD *)&v57 + 1) )
    sub_18001050C(*((__int64 *)&v57 + 1));
  sub_180086A54(*(_QWORD *)(v47 + 120));
  if ( v63 )
    sub_18001050C(v63);
  if ( v68 )
    sub_18001050C(v68);
  if ( v61 )
    sub_18001050C(v61);
  if ( v59 )
    sub_18001050C(v59);
  if ( v75 )
    sub_18001050C(v75);
  if ( v77 )
    sub_18001050C(v77);
  if ( v70 )
    sub_18001050C(v70);
  if ( v65 )
    sub_18001050C(v65);
  if ( v79 )
    sub_18001050C(v79);
  if ( v73 )
    sub_18001050C(v73);
  sub_18000B2D4((__int64)v81, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_180013128((__int64)v80);
}
