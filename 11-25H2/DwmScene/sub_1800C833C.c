/*
 * XREFs of sub_1800C833C @ 0x1800C833C
 * Callers:
 *     sub_1800C8968 @ 0x1800C8968 (sub_1800C8968.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_1800114D0 @ 0x1800114D0 (sub_1800114D0.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015A5C @ 0x180015A5C (sub_180015A5C.c)
 *     sub_180015E64 @ 0x180015E64 (sub_180015E64.c)
 *     sub_180016F24 @ 0x180016F24 (sub_180016F24.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180051970 @ 0x180051970 (sub_180051970.c)
 *     sub_1800C0284 @ 0x1800C0284 (sub_1800C0284.c)
 *     sub_1800C8154 @ 0x1800C8154 (sub_1800C8154.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C833C(_QWORD *a1, __int64 *a2, __int64 *a3)
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
  sub_180011B04((__int64)(a1 + 9), &v19);
  v6 = v19;
  v7 = sub_180015A5C(v19, &v17);
  sub_180011010(a1 + 12, v7);
  if ( v18 )
    sub_18001050C(v18);
  v8 = unknown_libname_81(&v23, a1 + 12);
  sub_180016F24(&v17, v8);
  v15 = *a3;
  sub_1800114D0(&v15);
  sub_1800C0284(v17, &v15, 5u);
  v9 = sub_180015E64(*(_QWORD *)(v6 + 3648), &v15);
  v10 = a1 + 16;
  sub_180011010(a1 + 16, v9);
  if ( v16 )
    sub_18001050C(v16);
  v11 = *v10;
  v12 = sub_180027A8C((__int64)a1, (__int64)v25);
  v13 = sub_18001B448((__int64)v24, v12, (__int64)"Shared Texture");
  sub_180027C24(v11, v13);
  sub_180011A5C((__int64)v25);
  sub_180051970(*v10, a1 + 12);
  sub_1800C8154(a1 + 14, a2);
  if ( v18 )
    sub_18001050C(v18);
  if ( v20 )
    sub_18001050C(v20);
  sub_18000E854(a2);
  return sub_18000E854(a3);
}
