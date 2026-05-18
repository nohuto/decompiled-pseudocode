/*
 * XREFs of sub_180074660 @ 0x180074660
 * Callers:
 *     sub_180074540 @ 0x180074540 (sub_180074540.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_180059BF0 @ 0x180059BF0 (sub_180059BF0.c)
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 *     sub_18005E620 @ 0x18005E620 (sub_18005E620.c)
 *     sub_18007E24C @ 0x18007E24C (sub_18007E24C.c)
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 */

// Hidden C++ exception states: #wind=38
__int64 __fastcall sub_180074660(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  void **v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rax
  __m128i v27; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  _QWORD v33[2]; // [rsp+70h] [rbp-90h] BYREF
  void *v34[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v35[2]; // [rsp+90h] [rbp-70h] BYREF
  void *v36[2]; // [rsp+A0h] [rbp-60h] BYREF
  void *v37[2]; // [rsp+B0h] [rbp-50h] BYREF
  void *v38[2]; // [rsp+C0h] [rbp-40h] BYREF
  void *v39[2]; // [rsp+D0h] [rbp-30h] BYREF
  void *v40[2]; // [rsp+E0h] [rbp-20h] BYREF
  void *v41[2]; // [rsp+F0h] [rbp-10h] BYREF
  void *v42[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v43; // [rsp+110h] [rbp+10h] BYREF
  __int64 v44; // [rsp+118h] [rbp+18h]
  __int64 v45; // [rsp+120h] [rbp+20h] BYREF
  __int64 v46; // [rsp+128h] [rbp+28h]
  __int64 v47; // [rsp+130h] [rbp+30h] BYREF
  __int64 v48; // [rsp+138h] [rbp+38h]
  __int64 v49; // [rsp+140h] [rbp+40h] BYREF
  __int64 v50; // [rsp+148h] [rbp+48h]
  __int64 v51; // [rsp+150h] [rbp+50h] BYREF
  __int64 v52; // [rsp+158h] [rbp+58h]
  __int64 v53; // [rsp+160h] [rbp+60h] BYREF
  __int64 v54; // [rsp+168h] [rbp+68h]
  __int64 v55; // [rsp+170h] [rbp+70h] BYREF
  __int64 v56; // [rsp+178h] [rbp+78h]
  int v57; // [rsp+180h] [rbp+80h] BYREF
  __int64 v58; // [rsp+188h] [rbp+88h]
  __int128 v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  _BYTE v62[32]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v63; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  _BYTE v65[32]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v66[32]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v67[32]; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v68[32]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v69; // [rsp+280h] [rbp+180h] BYREF

  sub_180016F54((__int64)&v63, (__int64)&unk_1801C7E28);
  v27.m128i_i64[0] = (__int64)&v63;
  v27.m128i_i64[1] = (__int64)v65;
  sub_18005E620((__int64 *)v42, &v27);
  sub_18000B2D4((__int64)&v63, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180016F54((__int64)&v57, (__int64)&unk_1801C7E28);
  sub_180016F54((__int64)&v60, (__int64)&unk_1801C7E88);
  v27.m128i_i64[0] = (__int64)&v57;
  v27.m128i_i64[1] = (__int64)v62;
  sub_18005E620((__int64 *)v41, &v27);
  sub_18000B2D4((__int64)&v57, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180016F54((__int64)&v63, (__int64)&unk_1801C7E08);
  v27.m128i_i64[0] = (__int64)&v63;
  v27.m128i_i64[1] = (__int64)v65;
  sub_18005E620((__int64 *)v40, &v27);
  sub_18000B2D4((__int64)&v63, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180016F54((__int64)&v57, (__int64)&unk_1801C7E28);
  sub_180016F54((__int64)&v60, (__int64)&unk_1801C7E08);
  v27.m128i_i64[0] = (__int64)&v57;
  v27.m128i_i64[1] = (__int64)v62;
  sub_18005E620((__int64 *)v39, &v27);
  sub_18000B2D4((__int64)&v57, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180016F54((__int64)v65, (__int64)&unk_1801C7E28);
  sub_180016F54((__int64)v66, (__int64)&unk_1801C7D48);
  v27.m128i_i64[0] = (__int64)v65;
  v27.m128i_i64[1] = (__int64)v67;
  sub_18005E620((__int64 *)v38, &v27);
  sub_18000B2D4((__int64)v65, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180016F54((__int64)&v57, (__int64)&unk_1801C7E28);
  sub_180016F54((__int64)&v60, (__int64)&unk_1801C7E08);
  sub_180016F54((__int64)v62, (__int64)&unk_1801C7D68);
  v27.m128i_i64[0] = (__int64)&v57;
  v27.m128i_i64[1] = (__int64)&v63;
  sub_18005E620((__int64 *)v37, &v27);
  sub_18000B2D4((__int64)&v57, 32LL, 3LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180016F54((__int64)v65, (__int64)&unk_1801C7E28);
  sub_180016F54((__int64)v66, (__int64)&unk_1801C7E08);
  sub_180016F54((__int64)v67, (__int64)&unk_1801C7D48);
  sub_180016F54((__int64)v68, (__int64)&unk_1801C7D68);
  v27.m128i_i64[0] = (__int64)v65;
  v27.m128i_i64[1] = (__int64)&v69;
  sub_18005E620((__int64 *)v36, &v27);
  sub_18000B2D4((__int64)v65, 32LL, 4LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180016F54((__int64)&v57, (__int64)&unk_1801C7E28);
  sub_180016F54((__int64)&v60, (__int64)&unk_1801C7E08);
  sub_180016F54((__int64)v62, (__int64)&unk_1801C7D48);
  v27.m128i_i64[0] = (__int64)&v57;
  v27.m128i_i64[1] = (__int64)&v63;
  sub_18005E620((__int64 *)v35, &v27);
  sub_18000B2D4((__int64)&v57, 32LL, 3LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v27.m128i_i64, v42);
  v4 = sub_18004C644(a2, (void **)&v27);
  sub_180059BF0(v27.m128i_i64, v41);
  v5 = sub_18004C644(a2, (void **)&v27);
  sub_180059BF0(v27.m128i_i64, v40);
  v6 = sub_18004C644(a2, (void **)&v27);
  sub_180059BF0(v27.m128i_i64, v39);
  v32 = sub_18004C644(a2, (void **)&v27);
  sub_180059BF0(v27.m128i_i64, v38);
  v29 = sub_18004C644(a2, (void **)&v27);
  sub_180059BF0(v27.m128i_i64, v37);
  v31 = sub_18004C644(a2, (void **)&v27);
  sub_180059BF0(v27.m128i_i64, v36);
  v7 = sub_18004C644(a2, (void **)&v27);
  sub_180059BF0(v27.m128i_i64, v35);
  v30 = sub_18004C644(a2, (void **)&v27);
  v27 = 0LL;
  sub_180016F54((__int64)v65, (__int64)&unk_1801C7EA8);
  v28.m128i_i64[0] = (__int64)v65;
  v28.m128i_i64[1] = (__int64)v66;
  sub_18005E620((__int64 *)v34, &v28);
  sub_18000B2D4((__int64)v65, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v28.m128i_i64, v34);
  v33[0] = sub_18004C644(a2, (void **)&v28);
  v33[1] = 0LL;
  v8 = (void **)v33;
  do
  {
    v9 = (unsigned __int64)*v8;
    v10 = sub_18005B398(*(_QWORD *)(a1 + 56), &v43, v7 | (unsigned __int64)*v8, 0LL, 1);
    sub_180011010(&v27, v10);
    if ( v44 )
      sub_18001050C(v44);
    v11 = *(_QWORD *)(a1 + 112);
    v57 = 0;
    v58 = v11;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    sub_18007E7DC(v27.m128i_i64[0], &v57);
    sub_18007E24C(v27.m128i_i32[0], 15, 2, 1, 1);
    v12 = sub_18005B398(*(_QWORD *)(a1 + 56), &v45, v30 | v9, 0LL, 1);
    sub_180011010(&v27, v12);
    if ( v46 )
      sub_18001050C(v46);
    v13 = *(_QWORD *)(a1 + 112);
    v57 = 0;
    v58 = v13;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    sub_18007E7DC(v27.m128i_i64[0], &v57);
    sub_18007E24C(v27.m128i_i32[0], 15, 2, 1, 1);
    v14 = sub_18005B398(*(_QWORD *)(a1 + 56), &v47, v31 | v9, 0LL, 1);
    sub_180011010(&v27, v14);
    if ( v48 )
      sub_18001050C(v48);
    v15 = *(_QWORD *)(a1 + 112);
    v57 = 0;
    v58 = v15;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    sub_18007E7DC(v27.m128i_i64[0], &v57);
    sub_18007E24C(v27.m128i_i32[0], 15, 2, 1, 1);
    v16 = sub_18005B398(*(_QWORD *)(a1 + 56), &v49, v32 | v9, 0LL, 1);
    sub_180011010(&v27, v16);
    if ( v50 )
      sub_18001050C(v50);
    v17 = *(_QWORD *)(a1 + 112);
    v57 = 0;
    v58 = v17;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    sub_18007E7DC(v27.m128i_i64[0], &v57);
    sub_18007E24C(v27.m128i_i32[0], 15, 2, 1, 1);
    v18 = sub_18005B398(*(_QWORD *)(a1 + 56), &v51, v29 | v9, 0LL, 1);
    sub_180011010(&v27, v18);
    if ( v52 )
      sub_18001050C(v52);
    v19 = *(_QWORD *)(a1 + 112);
    v57 = 0;
    v58 = v19;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    sub_18007E7DC(v27.m128i_i64[0], &v57);
    sub_18007E24C(v27.m128i_i32[0], 15, 2, 3, 1);
    v20 = sub_18005B398(*(_QWORD *)(a1 + 56), &v53, v4 | v9, 0LL, 1);
    sub_180011010(&v27, v20);
    if ( v54 )
      sub_18001050C(v54);
    v21 = *(_QWORD *)(a1 + 112);
    v57 = 0;
    v58 = v21;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    sub_18007E7DC(v27.m128i_i64[0], &v57);
    sub_18007E24C(v27.m128i_i32[0], 0, 2, 3, 1);
    v22 = sub_18005B398(*(_QWORD *)(a1 + 56), &v55, v6 | v9, 0LL, 1);
    sub_180011010(&v27, v22);
    if ( v56 )
      sub_18001050C(v56);
    v23 = *(_QWORD *)(a1 + 112);
    v57 = 0;
    v58 = v23;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    sub_18007E7DC(v27.m128i_i64[0], &v57);
    sub_18007E24C(v27.m128i_i32[0], 15, 2, 1, 1);
    v24 = sub_18005B398(*(_QWORD *)(a1 + 56), &v63, v5 | v9, 0LL, 1);
    sub_180011010(&v27, v24);
    if ( v64 )
      sub_18001050C(v64);
    v25 = *(_QWORD *)(a1 + 112);
    v57 = 0;
    v58 = v25;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    sub_18007E7DC(v27.m128i_i64[0], &v57);
    sub_18007E24C(v27.m128i_i32[0], 0, 2, 3, 1);
    ++v8;
  }
  while ( v8 != v34 );
  sub_18004A4F4(v34, (__int64)v34);
  if ( v27.m128i_i64[1] )
    sub_18001050C(v27.m128i_i64[1]);
  sub_18004A4F4(v35, (__int64)v35);
  sub_18004A4F4(v36, (__int64)v36);
  sub_18004A4F4(v37, (__int64)v37);
  sub_18004A4F4(v38, (__int64)v38);
  sub_18004A4F4(v39, (__int64)v39);
  sub_18004A4F4(v40, (__int64)v40);
  sub_18004A4F4(v41, (__int64)v41);
  return sub_18004A4F4(v42, (__int64)v42);
}
