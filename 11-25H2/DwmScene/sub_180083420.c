/*
 * XREFs of sub_180083420 @ 0x180083420
 * Callers:
 *     sub_18005DAFC @ 0x18005DAFC (sub_18005DAFC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180023D04 @ 0x180023D04 (sub_180023D04.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_180054B7C @ 0x180054B7C (sub_180054B7C.c)
 *     sub_180055748 @ 0x180055748 (sub_180055748.c)
 *     sub_18005899C @ 0x18005899C (sub_18005899C.c)
 *     sub_1800589F0 @ 0x1800589F0 (sub_1800589F0.c)
 *     sub_180059BF0 @ 0x180059BF0 (sub_180059BF0.c)
 *     sub_18005E620 @ 0x18005E620 (sub_18005E620.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 */

// Hidden C++ exception states: #wind=22
_QWORD *__fastcall sub_180083420(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  __m128i *v6; // rax
  __int64 v7; // rbx
  __m128i *v8; // rax
  __int64 v9; // rbx
  __m128i *v10; // rax
  __m128i v12; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h]
  void *v16[2]; // [rsp+68h] [rbp-98h] BYREF
  void *v17[2]; // [rsp+78h] [rbp-88h] BYREF
  void *v18[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v19[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v20[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v21[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v22; // [rsp+100h] [rbp+0h] BYREF

  v18[2] = a1;
  v3 = unknown_libname_81(&v13, a2);
  sub_180054B7C((__int64)a1, (__int64)v3);
  *a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  *(_OWORD *)(a1 + 221) = 0LL;
  a1[223] = 0LL;
  a1[224] = 15LL;
  *((_BYTE *)a1 + 1768) = 0;
  a1[225] = 0LL;
  a1[226] = 0LL;
  a1[227] = 0LL;
  a1[228] = 0LL;
  a1[229] = 0LL;
  a1[230] = 0LL;
  *(_OWORD *)(a1 + 231) = 0LL;
  a1[233] = 0LL;
  a1[234] = 15LL;
  *((_BYTE *)a1 + 1848) = 0;
  a1[235] = 0LL;
  a1[236] = 0LL;
  a1[237] = 0LL;
  a1[238] = 0LL;
  a1[239] = 0LL;
  a1[240] = 0LL;
  *(_QWORD *)((char *)a1 + 1940) = 360LL;
  *((_DWORD *)a1 + 487) = 0;
  *((_WORD *)a1 + 976) = 257;
  *(_QWORD *)((char *)a1 + 1956) = 0LL;
  *((_DWORD *)a1 + 491) = 1;
  *((_DWORD *)a1 + 492) = 1065353216;
  *((_DWORD *)a1 + 493) = 6;
  *((_DWORD *)a1 + 494) = 21;
  v4 = *(_QWORD *)(sub_180078418((__int64)a1) + 512);
  sub_180016F54((__int64)v19, (__int64)&unk_1801C7DA8);
  v12.m128i_i64[0] = (__int64)v19;
  v12.m128i_i64[1] = (__int64)v20;
  sub_18005E620((__int64 *)v18, &v12);
  sub_18000B2D4((__int64)v19, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v13.m128i_i64, v18);
  v5 = sub_18004C644(v4, (void **)&v13);
  v6 = (__m128i *)sub_180023D04(&v14);
  v12 = 0LL;
  v12 = *v6;
  v6->m128i_i64[0] = 0LL;
  v6->m128i_i64[1] = 0LL;
  *((_DWORD *)a1 + 482) = sub_180055748(a1, 0x10000LL, 0LL, &v12, v5);
  if ( v15 )
    sub_18001050C(v15);
  sub_180016F54((__int64)v21, (__int64)&unk_1801C7E28);
  v13.m128i_i64[0] = (__int64)v21;
  v13.m128i_i64[1] = (__int64)&v22;
  sub_18005E620((__int64 *)v17, &v13);
  sub_18000B2D4((__int64)v21, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v13.m128i_i64, v17);
  v7 = sub_18004C644(v4, (void **)&v13);
  v8 = (__m128i *)sub_180023D04(&v14);
  v12 = 0LL;
  v12 = *v8;
  v8->m128i_i64[0] = 0LL;
  v8->m128i_i64[1] = 0LL;
  *((_DWORD *)a1 + 483) = sub_180055748(a1, 0x10000LL, 0LL, &v12, v7);
  if ( v15 )
    sub_18001050C(v15);
  sub_180016F54((__int64)v19, (__int64)&unk_1801C7E28);
  sub_180016F54((__int64)v20, (__int64)&unk_1801C7E08);
  v13.m128i_i64[0] = (__int64)v19;
  v13.m128i_i64[1] = (__int64)v21;
  sub_18005E620((__int64 *)v16, &v13);
  sub_18000B2D4((__int64)v19, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v13.m128i_i64, v16);
  v9 = sub_18004C644(v4, (void **)&v13);
  v10 = (__m128i *)sub_180023D04(&v14);
  v12 = 0LL;
  v12 = *v10;
  v10->m128i_i64[0] = 0LL;
  v10->m128i_i64[1] = 0LL;
  *((_DWORD *)a1 + 484) = sub_180055748(a1, 256LL, 0LL, &v12, v9);
  if ( v15 )
    sub_18001050C(v15);
  sub_1800589F0((__int64)a1, *((_DWORD *)a1 + 482), 1);
  sub_1800589F0((__int64)a1, *((_DWORD *)a1 + 483), 0);
  sub_1800589F0((__int64)a1, *((_DWORD *)a1 + 484), 0);
  sub_18005899C((__int64)a1, 1024, 1);
  *((_DWORD *)a1 + 74) = 1065353216;
  *((_DWORD *)a1 + 75) = 1065353216;
  *((_DWORD *)a1 + 76) = 1065353216;
  *((_DWORD *)a1 + 77) = 1065353216;
  *((_DWORD *)a1 + 32) = 1;
  sub_18004A4F4(v16, (__int64)v16);
  sub_18004A4F4(v17, (__int64)v17);
  sub_18004A4F4(v18, (__int64)v18);
  return a1;
}
