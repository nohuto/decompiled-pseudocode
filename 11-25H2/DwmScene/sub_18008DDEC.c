/*
 * XREFs of sub_18008DDEC @ 0x18008DDEC
 * Callers:
 *     sub_180074540 @ 0x180074540 (sub_180074540.c)
 *     sub_180076C00 @ 0x180076C00 (sub_180076C00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180040908 @ 0x180040908 (sub_180040908.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_180059BF0 @ 0x180059BF0 (sub_180059BF0.c)
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 *     sub_18005E620 @ 0x18005E620 (sub_18005E620.c)
 *     sub_18007E20C @ 0x18007E20C (sub_18007E20C.c)
 *     sub_18007E24C @ 0x18007E24C (sub_18007E24C.c)
 *     sub_18007E770 @ 0x18007E770 (sub_18007E770.c)
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 */

// Hidden C++ exception states: #wind=57
__int64 __fastcall sub_18008DDEC(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r13d
  __int64 *v10; // r12
  __int64 v11; // r14
  __int64 *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rax
  __int64 *v43; // rax
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rax
  __m128i v50; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v51; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h]
  __int64 v61; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h]
  __int64 v63; // [rsp+B0h] [rbp-50h]
  __int64 v64; // [rsp+B8h] [rbp-48h]
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  __int64 *i; // [rsp+D0h] [rbp-30h]
  void *v68[2]; // [rsp+D8h] [rbp-28h] BYREF
  void *v69[2]; // [rsp+E8h] [rbp-18h] BYREF
  void *v70[2]; // [rsp+F8h] [rbp-8h] BYREF
  void *v71[2]; // [rsp+108h] [rbp+8h] BYREF
  void *v72[2]; // [rsp+118h] [rbp+18h] BYREF
  void *v73[2]; // [rsp+128h] [rbp+28h] BYREF
  void *v74[2]; // [rsp+138h] [rbp+38h] BYREF
  void *v75[2]; // [rsp+148h] [rbp+48h] BYREF
  void *v76[2]; // [rsp+158h] [rbp+58h] BYREF
  void *v77[2]; // [rsp+168h] [rbp+68h] BYREF
  void *v78[2]; // [rsp+178h] [rbp+78h] BYREF
  void *v79[2]; // [rsp+188h] [rbp+88h] BYREF
  void *v80[2]; // [rsp+198h] [rbp+98h] BYREF
  void *v81[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v82; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v83; // [rsp+1C0h] [rbp+C0h]
  __int64 v84; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v85; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v86; // [rsp+1E0h] [rbp+E0h]
  __int64 v87; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v88; // [rsp+1F0h] [rbp+F0h]
  __int64 v89; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v90; // [rsp+200h] [rbp+100h]
  __int64 v91; // [rsp+208h] [rbp+108h] BYREF
  __int64 v92; // [rsp+210h] [rbp+110h]
  __int64 v93; // [rsp+218h] [rbp+118h] BYREF
  __int64 v94; // [rsp+220h] [rbp+120h]
  __int64 v95; // [rsp+228h] [rbp+128h] BYREF
  __int64 v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h] BYREF
  __int64 v98; // [rsp+240h] [rbp+140h]
  __int64 v99; // [rsp+248h] [rbp+148h] BYREF
  __int64 v100; // [rsp+250h] [rbp+150h]
  __int64 v101; // [rsp+258h] [rbp+158h] BYREF
  __int64 v102; // [rsp+260h] [rbp+160h]
  __int64 v103; // [rsp+268h] [rbp+168h] BYREF
  __int64 v104; // [rsp+270h] [rbp+170h]
  __int64 v105; // [rsp+278h] [rbp+178h] BYREF
  __int64 v106; // [rsp+280h] [rbp+180h]
  __int64 v107; // [rsp+288h] [rbp+188h] BYREF
  __int64 v108; // [rsp+290h] [rbp+190h]
  int v109; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v110; // [rsp+2A8h] [rbp+1A8h]
  __int128 v111; // [rsp+2B0h] [rbp+1B0h]
  __int64 v112; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v113; // [rsp+2C8h] [rbp+1C8h]
  _BYTE v114[32]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v115; // [rsp+300h] [rbp+200h] BYREF
  __int64 v116; // [rsp+308h] [rbp+208h]
  _BYTE v117[32]; // [rsp+320h] [rbp+220h] BYREF
  int v118; // [rsp+340h] [rbp+240h] BYREF
  __int64 v119; // [rsp+344h] [rbp+244h]
  int v120; // [rsp+34Ch] [rbp+24Ch]
  int v121; // [rsp+350h] [rbp+250h]
  int v122; // [rsp+354h] [rbp+254h]
  char v123; // [rsp+358h] [rbp+258h]
  _OWORD v124[2]; // [rsp+35Ch] [rbp+25Ch] BYREF
  int v125; // [rsp+37Ch] [rbp+27Ch]
  _BYTE v126[4]; // [rsp+380h] [rbp+280h] BYREF
  int v127; // [rsp+384h] [rbp+284h]
  _BYTE v128[32]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v129; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v130; // [rsp+3C8h] [rbp+2C8h]
  __int64 v131; // [rsp+3E0h] [rbp+2E0h] BYREF

  sub_180016F54((__int64)&v115, (__int64)&unk_1801C7DC8);
  v50.m128i_i64[0] = (__int64)&v115;
  v50.m128i_i64[1] = (__int64)v117;
  sub_18005E620((__int64 *)v81, &v50);
  sub_18000B2D4((__int64)&v115, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v81);
  v53 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v129, (__int64)&unk_1801C7E88);
  v50.m128i_i64[0] = (__int64)&v129;
  v50.m128i_i64[1] = (__int64)&v131;
  sub_18005E620((__int64 *)v80, &v50);
  sub_18000B2D4((__int64)&v129, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v80);
  v66 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v109, (__int64)&unk_1801C7E88);
  sub_180016F54((__int64)&v112, (__int64)&unk_1801C7DC8);
  v50.m128i_i64[0] = (__int64)&v109;
  v50.m128i_i64[1] = (__int64)v114;
  sub_18005E620((__int64 *)v79, &v50);
  sub_18000B2D4((__int64)&v109, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v79);
  v59 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v115, (__int64)&unk_1801C7E88);
  sub_180016F54((__int64)v117, (__int64)&unk_1801C7D48);
  v50.m128i_i64[0] = (__int64)&v115;
  v50.m128i_i64[1] = (__int64)&v118;
  sub_18005E620((__int64 *)v78, &v50);
  sub_18000B2D4((__int64)&v115, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v78);
  v62 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v109, (__int64)&unk_1801C7E88);
  sub_180016F54((__int64)&v112, (__int64)&unk_1801C7D68);
  v50.m128i_i64[0] = (__int64)&v109;
  v50.m128i_i64[1] = (__int64)v114;
  sub_18005E620((__int64 *)v77, &v50);
  sub_18000B2D4((__int64)&v109, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v77);
  v63 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v115, (__int64)&unk_1801C7D48);
  v50.m128i_i64[0] = (__int64)&v115;
  v50.m128i_i64[1] = (__int64)v117;
  sub_18005E620((__int64 *)v76, &v50);
  sub_18000B2D4((__int64)&v115, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v76);
  v64 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v109, (__int64)&unk_1801C7D48);
  sub_180016F54((__int64)&v112, (__int64)&unk_1801C7DC8);
  v50.m128i_i64[0] = (__int64)&v109;
  v50.m128i_i64[1] = (__int64)v114;
  sub_18005E620((__int64 *)v75, &v50);
  sub_18000B2D4((__int64)&v109, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v75);
  v57 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v115, (__int64)&unk_1801C7D68);
  v50.m128i_i64[0] = (__int64)&v115;
  v50.m128i_i64[1] = (__int64)v117;
  sub_18005E620((__int64 *)v74, &v50);
  sub_18000B2D4((__int64)&v115, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v74);
  v65 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v109, (__int64)&unk_1801C7D68);
  sub_180016F54((__int64)&v112, (__int64)&unk_1801C7D48);
  v50.m128i_i64[0] = (__int64)&v109;
  v50.m128i_i64[1] = (__int64)v114;
  sub_18005E620((__int64 *)v73, &v50);
  sub_18000B2D4((__int64)&v109, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v73);
  v61 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v118, (__int64)&unk_1801C7D68);
  sub_180016F54((__int64)v124 + 4, (__int64)&unk_1801C7D48);
  sub_180016F54((__int64)v126, (__int64)&unk_1801C7DE8);
  v50.m128i_i64[0] = (__int64)&v118;
  v50.m128i_i64[1] = (__int64)v128;
  sub_18005E620((__int64 *)v72, &v50);
  sub_18000B2D4((__int64)&v118, 32LL, 3LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v72);
  v60 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v109, (__int64)&unk_1801C7DC8);
  sub_180016F54((__int64)&v112, (__int64)&unk_1801C7D68);
  sub_180016F54((__int64)v114, (__int64)&unk_1801C7D48);
  v50.m128i_i64[0] = (__int64)&v109;
  v50.m128i_i64[1] = (__int64)&v115;
  sub_18005E620((__int64 *)v71, &v50);
  sub_18000B2D4((__int64)&v109, 32LL, 3LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v71);
  v56 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v118, (__int64)&unk_1801C7DC8);
  sub_180016F54((__int64)v124 + 4, (__int64)&unk_1801C7D68);
  sub_180016F54((__int64)v126, (__int64)&unk_1801C7D48);
  sub_180016F54((__int64)v128, (__int64)&unk_1801C7DE8);
  v50.m128i_i64[0] = (__int64)&v118;
  v50.m128i_i64[1] = (__int64)&v129;
  sub_18005E620((__int64 *)v70, &v50);
  sub_18000B2D4((__int64)&v118, 32LL, 4LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v70);
  v55 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v109, (__int64)&unk_1801C7D68);
  sub_180016F54((__int64)&v112, (__int64)&unk_1801C7DC8);
  v50.m128i_i64[0] = (__int64)&v109;
  v50.m128i_i64[1] = (__int64)v114;
  sub_18005E620((__int64 *)v69, &v50);
  sub_18000B2D4((__int64)&v109, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v69);
  v58 = sub_18004C644(a2, (void **)&v50);
  sub_180016F54((__int64)&v115, (__int64)&unk_1801C7E48);
  v50.m128i_i64[0] = (__int64)&v115;
  v50.m128i_i64[1] = (__int64)v117;
  sub_18005E620((__int64 *)v68, &v50);
  sub_18000B2D4((__int64)&v115, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v50.m128i_i64, v68);
  v6 = sub_18004C644(a2, (void **)&v50);
  v52 = v6;
  v7 = *(_QWORD *)(a2 + 18688);
  v54 = v7;
  v8 = 23;
  if ( *(int *)(a1 + 104) < 40960 )
    v8 = 0;
  v9 = 0;
  if ( (*(_BYTE *)(v7 + 560) & 2) == 0 )
    v9 = v8;
  v51 = 0LL;
  v10 = *a3;
  for ( i = a3[1]; v10 != i; v6 = v52 )
  {
    v11 = *v10;
    v12 = sub_18005B398(*(_QWORD *)(a1 + 56), &v82, v6 | *v10, 0LL, 0);
    sub_180011010(&v51, v12);
    if ( v83 )
      sub_18001050C(v83);
    v13 = v53 | v11;
    v14 = v51;
    sub_18007E770((_QWORD *)v51, v53 | v11);
    v15 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v15;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v14, (__int64)&v109);
    v119 = 2LL;
    v120 = 0;
    v121 = 0;
    v122 = 0;
    v123 = 0;
    memset(v124, 0, sizeof(v124));
    v125 = 65793;
    v126[0] = 1;
    v127 = 3;
    v118 = 1;
    sub_180040908(v54, v50.m128i_i64);
    sub_18007EEC0(v50.m128i_i64[0], (__int64)&v118, 0LL);
    v16 = unknown_libname_81(&v84, &v50);
    sub_18007E20C(v14, v16);
    if ( v50.m128i_i64[1] )
      sub_18001050C(v50.m128i_i64[1]);
    v17 = sub_18005B398(*(_QWORD *)(a1 + 56), &v85, v55 | v11, 0LL, 0);
    sub_180011010(&v51, v17);
    if ( v86 )
      sub_18001050C(v86);
    v18 = v56 | v11;
    v19 = v51;
    sub_18007E770((_QWORD *)v51, v56 | v11);
    v20 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v20;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v19, (__int64)&v109);
    sub_18007E24C(v19, 1, 2, 1, 1);
    v21 = sub_18005B398(*(_QWORD *)(a1 + 56), &v87, v18, 0LL, 1);
    sub_180011010(&v51, v21);
    if ( v88 )
      sub_18001050C(v88);
    v22 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v22;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, 23, 2, 3, 1);
    v23 = sub_18005B398(*(_QWORD *)(a1 + 56), &v89, v57 | v11, 0LL, 1);
    sub_180011010(&v51, v23);
    if ( v90 )
      sub_18001050C(v90);
    v24 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v24;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, v9, 2, 3, 1);
    v25 = sub_18005B398(*(_QWORD *)(a1 + 56), &v91, v58 | v11, 0LL, 1);
    sub_180011010(&v51, v25);
    if ( v92 )
      sub_18001050C(v92);
    v26 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v26;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, 1, 2, 1, 1);
    v27 = sub_18005B398(*(_QWORD *)(a1 + 56), &v93, v59 | v11, 0LL, 1);
    sub_180011010(&v51, v27);
    if ( v94 )
      sub_18001050C(v94);
    v28 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v28;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, 0, 2, 3, 15);
    v29 = sub_18005B398(*(_QWORD *)(a1 + 56), &v95, v13, 0LL, 1);
    sub_180011010(&v51, v29);
    if ( v96 )
      sub_18001050C(v96);
    v30 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v30;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, 0, 2, 3, 1);
    v31 = sub_18005B398(*(_QWORD *)(a1 + 56), &v97, v60 | v11, 0LL, 0);
    sub_180011010(&v51, v31);
    if ( v98 )
      sub_18001050C(v98);
    v32 = v61 | v11;
    v33 = v51;
    sub_18007E770((_QWORD *)v51, v61 | v11);
    v34 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v34;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v33, (__int64)&v109);
    sub_18007E24C(v33, 1, 2, 1, 15);
    v35 = sub_18005B398(*(_QWORD *)(a1 + 56), &v99, v32, 0LL, 1);
    sub_180011010(&v51, v35);
    if ( v100 )
      sub_18001050C(v100);
    v36 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v36;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, 23, 2, 3, 15);
    v37 = sub_18005B398(*(_QWORD *)(a1 + 56), &v101, v62 | v11, 0LL, 1);
    sub_180011010(&v51, v37);
    if ( v102 )
      sub_18001050C(v102);
    v38 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v38;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, 23, 2, 3, 15);
    v39 = sub_18005B398(*(_QWORD *)(a1 + 56), &v103, v63 | v11, 0LL, 1);
    sub_180011010(&v51, v39);
    if ( v104 )
      sub_18001050C(v104);
    v40 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v40;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, 1, 2, 1, 15);
    v41 = sub_18005B398(*(_QWORD *)(a1 + 56), &v105, v64 | v11, 0LL, 1);
    sub_180011010(&v51, v41);
    if ( v106 )
      sub_18001050C(v106);
    v42 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v42;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, v9, 2, 3, 15);
    v43 = sub_18005B398(*(_QWORD *)(a1 + 56), &v107, v65 | v11, 0LL, 1);
    sub_180011010(&v51, v43);
    if ( v108 )
      sub_18001050C(v108);
    v44 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v44;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, 1, 2, 1, 15);
    v45 = sub_18005B398(*(_QWORD *)(a1 + 56), &v129, v66 | v11, 0LL, 1);
    sub_180011010(&v51, v45);
    if ( v130 )
      sub_18001050C(v130);
    v46 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v46;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, 0, 2, 3, 15);
    v47 = sub_18005B398(*(_QWORD *)(a1 + 56), &v115, v11, 0LL, 1);
    sub_180011010(&v51, v47);
    if ( v116 )
      sub_18001050C(v116);
    v48 = *(_QWORD *)(a1 + 112);
    v109 = 0;
    v110 = v48;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    sub_18007E7DC(v51, (__int64)&v109);
    sub_18007E24C(v51, 0, 2, 3, 15);
    ++v10;
  }
  if ( *((_QWORD *)&v51 + 1) )
    sub_18001050C(*((__int64 *)&v51 + 1));
  sub_18004A4F4(v68, (__int64)v68);
  sub_18004A4F4(v69, (__int64)v69);
  sub_18004A4F4(v70, (__int64)v70);
  sub_18004A4F4(v71, (__int64)v71);
  sub_18004A4F4(v72, (__int64)v72);
  sub_18004A4F4(v73, (__int64)v73);
  sub_18004A4F4(v74, (__int64)v74);
  sub_18004A4F4(v75, (__int64)v75);
  sub_18004A4F4(v76, (__int64)v76);
  sub_18004A4F4(v77, (__int64)v77);
  sub_18004A4F4(v78, (__int64)v78);
  sub_18004A4F4(v79, (__int64)v79);
  sub_18004A4F4(v80, (__int64)v80);
  return sub_18004A4F4(v81, (__int64)v81);
}
