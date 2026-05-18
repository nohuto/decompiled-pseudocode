/*
 * XREFs of sub_180073F3C @ 0x180073F3C
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

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_180073F3C(__int64 a1, __int64 a2)
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
  __m128i v19; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v20; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *v23[2]; // [rsp+70h] [rbp-90h] BYREF
  void *v24[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v25[2]; // [rsp+90h] [rbp-70h] BYREF
  void *v26[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 v31; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int v33; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int128 v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp+0h] BYREF
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 v38; // [rsp+120h] [rbp+20h] BYREF
  __int64 v39; // [rsp+128h] [rbp+28h]
  _BYTE v40[32]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v41[32]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v42[32]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v43[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v44; // [rsp+1C0h] [rbp+C0h] BYREF

  sub_180016F54((__int64)&v33, (__int64)&unk_1801C7D88);
  sub_180016F54((__int64)&v36, (__int64)&unk_1801C7D68);
  v19.m128i_i64[0] = (__int64)&v33;
  v19.m128i_i64[1] = (__int64)&v38;
  sub_18005E620((__int64 *)v26, &v19);
  sub_18000B2D4((__int64)&v33, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180016F54((__int64)&v38, (__int64)&unk_1801C7D88);
  v19.m128i_i64[0] = (__int64)&v38;
  v19.m128i_i64[1] = (__int64)v40;
  sub_18005E620((__int64 *)v25, &v19);
  sub_18000B2D4((__int64)&v38, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180016F54((__int64)&v33, (__int64)&unk_1801C7DC8);
  sub_180016F54((__int64)&v36, (__int64)&unk_1801C7D88);
  v19.m128i_i64[0] = (__int64)&v33;
  v19.m128i_i64[1] = (__int64)&v38;
  sub_18005E620((__int64 *)v24, &v19);
  sub_18000B2D4((__int64)&v33, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180016F54((__int64)v41, (__int64)&unk_1801C7DC8);
  sub_180016F54((__int64)v42, (__int64)&unk_1801C7D88);
  sub_180016F54((__int64)v43, (__int64)&unk_1801C7D68);
  v19.m128i_i64[0] = (__int64)v41;
  v19.m128i_i64[1] = (__int64)&v44;
  sub_18005E620((__int64 *)v23, &v19);
  sub_18000B2D4((__int64)v41, 32LL, 3LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v19.m128i_i64, v25);
  v4 = sub_18004C644(a2, (void **)&v19);
  sub_180059BF0(v19.m128i_i64, v26);
  v5 = sub_18004C644(a2, (void **)&v19);
  sub_180059BF0(v19.m128i_i64, v24);
  v6 = sub_18004C644(a2, (void **)&v19);
  sub_180059BF0(v19.m128i_i64, v23);
  v7 = sub_18004C644(a2, (void **)&v19);
  v19 = 0LL;
  sub_180016F54((__int64)v40, (__int64)&unk_1801C7EA8);
  v20.m128i_i64[0] = (__int64)v40;
  v20.m128i_i64[1] = (__int64)v41;
  sub_18005E620((__int64 *)v22, &v20);
  sub_18000B2D4((__int64)v40, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v20.m128i_i64, v22);
  v21[0] = sub_18004C644(a2, (void **)&v20);
  v21[1] = 0LL;
  v8 = (void **)v21;
  do
  {
    v9 = (unsigned __int64)*v8;
    v10 = sub_18005B398(*(_QWORD *)(a1 + 56), &v27, v7 | (unsigned __int64)*v8, 0LL, 1);
    sub_180011010(&v19, v10);
    if ( v28 )
      sub_18001050C(v28);
    v11 = *(_QWORD *)(a1 + 112);
    v33 = 0;
    v34 = v11;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    sub_18007E7DC(v19.m128i_i64[0], &v33);
    sub_18007E24C(v19.m128i_i32[0], 1, 1, 3, 1);
    v12 = sub_18005B398(*(_QWORD *)(a1 + 56), &v29, v6 | v9, 0LL, 1);
    sub_180011010(&v19, v12);
    if ( v30 )
      sub_18001050C(v30);
    v13 = *(_QWORD *)(a1 + 112);
    v33 = 0;
    v34 = v13;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    sub_18007E7DC(v19.m128i_i64[0], &v33);
    sub_18007E24C(v19.m128i_i32[0], 0, 1, 3, 1);
    v14 = sub_18005B398(*(_QWORD *)(a1 + 56), &v31, v5 | v9, 0LL, 1);
    sub_180011010(&v19, v14);
    if ( v32 )
      sub_18001050C(v32);
    v15 = *(_QWORD *)(a1 + 112);
    v33 = 0;
    v34 = v15;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    sub_18007E7DC(v19.m128i_i64[0], &v33);
    sub_18007E24C(v19.m128i_i32[0], 1, 1, 3, 1);
    v16 = sub_18005B398(*(_QWORD *)(a1 + 56), &v38, v4 | v9, 0LL, 1);
    sub_180011010(&v19, v16);
    if ( v39 )
      sub_18001050C(v39);
    v17 = *(_QWORD *)(a1 + 112);
    v33 = 0;
    v34 = v17;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    sub_18007E7DC(v19.m128i_i64[0], &v33);
    sub_18007E24C(v19.m128i_i32[0], 0, 1, 3, 1);
    ++v8;
  }
  while ( v8 != v22 );
  sub_18004A4F4(v22, (__int64)v22);
  if ( v19.m128i_i64[1] )
    sub_18001050C(v19.m128i_i64[1]);
  sub_18004A4F4(v23, (__int64)v23);
  sub_18004A4F4(v24, (__int64)v24);
  sub_18004A4F4(v25, (__int64)v25);
  return sub_18004A4F4(v26, (__int64)v26);
}
