/*
 * XREFs of sub_1800C849C @ 0x1800C849C
 * Callers:
 *     sub_1800C8AC8 @ 0x1800C8AC8 (sub_1800C8AC8.c)
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
 *     sub_180015F64 @ 0x180015F64 (sub_180015F64.c)
 *     sub_180017024 @ 0x180017024 (sub_180017024.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180051AD0 @ 0x180051AD0 (sub_180051AD0.c)
 *     sub_1800C03E4 @ 0x1800C03E4 (sub_1800C03E4.c)
 *     sub_1800C82B4 @ 0x1800C82B4 (sub_1800C82B4.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C849C(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-79h] BYREF
  __int64 v16; // [rsp+28h] [rbp-71h]
  __int64 v17; // [rsp+30h] [rbp-69h] BYREF
  __int64 v18; // [rsp+38h] [rbp-61h]
  __int64 v19; // [rsp+40h] [rbp-59h] BYREF
  __int64 v20; // [rsp+48h] [rbp-51h]
  __int64 *v21; // [rsp+50h] [rbp-49h]
  __int64 *v22; // [rsp+58h] [rbp-41h]
  __int64 v23; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v24[32]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v25[32]; // [rsp+90h] [rbp-9h] BYREF

  v21 = a2;
  v22 = a3;
  sub_180011C04((__int64)(a1 + 9), &v19);
  v6 = v19;
  v7 = sub_180015B5C(v19, &v17);
  sub_180011110(a1 + 12, v7);
  if ( v18 )
    sub_18001060C(v18);
  v8 = unknown_libname_81(&v23, a1 + 12);
  sub_180017024(&v17, v8);
  v15 = *a3;
  sub_1800115D0(&v15);
  sub_1800C03E4(v17, &v15, 5u);
  v9 = sub_180015F64(*(_QWORD *)(v6 + 3648), &v15);
  v10 = a1 + 16;
  sub_180011110(a1 + 16, v9);
  if ( v16 )
    sub_18001060C(v16);
  v11 = *v10;
  v12 = sub_180027BEC((__int64)a1, (__int64)v25);
  v13 = sub_18001B5A8((__int64)v24, v12, (__int64)"Shared Texture");
  sub_180027D84(v11, v13);
  sub_180011B5C((__int64)v25);
  sub_180051AD0(*v10, a1 + 12);
  sub_1800C82B4(a1 + 14, a2);
  if ( v18 )
    sub_18001060C(v18);
  if ( v20 )
    sub_18001060C(v20);
  sub_18000E954(a2);
  return sub_18000E954(a3);
}
