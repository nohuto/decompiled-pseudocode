/*
 * XREFs of sub_180033AB8 @ 0x180033AB8
 * Callers:
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 *     sub_18002BF54 @ 0x18002BF54 (sub_18002BF54.c)
 *     sub_1800324D4 @ 0x1800324D4 (sub_1800324D4.c)
 *     sub_180032570 @ 0x180032570 (sub_180032570.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180033AB8(__int64 a1)
{
  unsigned int i; // r15d
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+50h] [rbp-79h] BYREF
  __int64 v10; // [rsp+58h] [rbp-71h]
  _BYTE v11[16]; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v12[32]; // [rsp+70h] [rbp-59h] BYREF
  _BYTE v13[32]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v14[32]; // [rsp+B0h] [rbp-19h] BYREF
  _BYTE v15[32]; // [rsp+D0h] [rbp+7h] BYREF

  sub_18001C99C(&stru_1801B8288, 3);
  sub_180032570(a1);
  sub_18001C99C(&stru_1801B8288, 3);
  sub_18002869C(a1 + 112, (__int64)v11);
  for ( i = 0; i < (unsigned int)sub_180032570(a1); ++i )
  {
    sub_1800324D4(a1, &v9, i);
    v3 = v9;
    v4 = sub_18002BF54((__int64)v15, v9 + 208);
    sub_1800137F8(v4);
    v5 = sub_18002BF54((__int64)v14, v3 + 144);
    sub_1800137F8(v5);
    v6 = sub_18002BF54((__int64)v13, v3 + 80);
    sub_1800137F8(v6);
    v7 = sub_18002BF54((__int64)v12, v3 + 112);
    sub_1800137F8(v7);
    sub_18001C99C(&stru_1801B8288, 3);
    sub_180011A5C((__int64)v12);
    sub_180011A5C((__int64)v13);
    sub_180011A5C((__int64)v14);
    sub_180011A5C((__int64)v15);
    if ( v10 )
      sub_18001050C(v10);
  }
  sub_18001C99C(&stru_1801B8288, 3);
  return sub_180028424((__int64)v11);
}
