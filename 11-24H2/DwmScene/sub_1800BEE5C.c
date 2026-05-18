/*
 * XREFs of sub_1800BEE5C @ 0x1800BEE5C
 * Callers:
 *     sub_180011290 @ 0x180011290 (sub_180011290.c)
 *     sub_1800BF2C8 @ 0x1800BF2C8 (sub_1800BF2C8.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015B5C @ 0x180015B5C (sub_180015B5C.c)
 *     sub_180017024 @ 0x180017024 (sub_180017024.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_180027054 @ 0x180027054 (sub_180027054.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_1800BEDD0 @ 0x1800BEDD0 (sub_1800BEDD0.c)
 *     sub_1800C03E4 @ 0x1800C03E4 (sub_1800C03E4.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800BEE5C(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, int a5, int a6)
{
  int v10; // r13d
  int v11; // eax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rax
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  __int64 v22; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v23; // [rsp+28h] [rbp-A1h] BYREF
  int v24; // [rsp+30h] [rbp-99h]
  __int64 v25; // [rsp+38h] [rbp-91h] BYREF
  __int64 v26; // [rsp+40h] [rbp-89h]
  __int64 v27; // [rsp+48h] [rbp-81h] BYREF
  __int64 v28; // [rsp+50h] [rbp-79h]
  __int64 *v29; // [rsp+58h] [rbp-71h]
  __int64 *v30; // [rsp+60h] [rbp-69h]
  __int64 *v31; // [rsp+68h] [rbp-61h]
  __int64 v32; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v33[4]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-21h]

  v29 = a2;
  v30 = a3;
  v31 = a4;
  v10 = 1;
  v11 = 1;
  if ( a5 )
    v11 = a5;
  v24 = v11;
  if ( a6 )
    v10 = a6;
  sub_180011C04((__int64)(a1 + 9), &v27);
  v12 = sub_180015B5C(v27, &v25);
  sub_180011110(a1 + 12, v12);
  if ( v26 )
    sub_18001060C(v26);
  v13 = unknown_libname_81(&v32, a1 + 12);
  sub_180017024(&v25, v13);
  v22 = *a3;
  sub_1800115D0(&v22);
  sub_1800C03E4(v25, &v22, 0LL);
  if ( *a4 )
  {
    v14 = sub_180015B5C(v27, &v34);
    sub_180011110(a1 + 14, v14);
    if ( v35 )
      sub_18001060C(v35);
    v15 = a1[14];
    v16 = sub_180027BEC((__int64)a1, (__int64)&v34);
    v17 = sub_18001B5A8((__int64)v33, v16, (__int64)"Staging");
    sub_180027D84(v15, v17);
    sub_180011B5C((__int64)&v34);
    v18 = unknown_libname_81(v33, a1 + 14);
    sub_180017024(&v34, v18);
    v23 = 0LL;
    if ( &v23 != a4 )
    {
      v23 = *a4;
      *a4 = 0LL;
    }
    sub_1800C03E4(v34, &v23, 128LL);
    if ( v35 )
      sub_18001060C(v35);
  }
  sub_1800BEDD0(a1 + 16, a2);
  v19 = 0LL;
  v19.m128_f32[0] = (float)v10;
  v20 = 0LL;
  v20.m128_f32[0] = (float)v24;
  sub_180027054((__int64)a1, _mm_unpacklo_ps(v20, v19).m128_i64[0]);
  if ( v26 )
    sub_18001060C(v26);
  if ( v28 )
    sub_18001060C(v28);
  sub_18000E954(a2);
  sub_18000E954(a3);
  return sub_18000E954(a4);
}
