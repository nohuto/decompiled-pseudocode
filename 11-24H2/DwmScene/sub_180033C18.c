/*
 * XREFs of sub_180033C18 @ 0x180033C18
 * Callers:
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 *     sub_18002C0B4 @ 0x18002C0B4 (sub_18002C0B4.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180033C18(__int64 a1)
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

  sub_18001CAFC(&stru_1801B9288, 3);
  sub_1800326D0(a1);
  sub_18001CAFC(&stru_1801B9288, 3);
  sub_1800287FC(a1 + 112, (__int64)v11);
  for ( i = 0; i < (unsigned int)sub_1800326D0(a1); ++i )
  {
    sub_180032634(a1, &v9, i);
    v3 = v9;
    v4 = sub_18002C0B4((__int64)v15, v9 + 208);
    sub_1800138F8(v4);
    v5 = sub_18002C0B4((__int64)v14, v3 + 144);
    sub_1800138F8(v5);
    v6 = sub_18002C0B4((__int64)v13, v3 + 80);
    sub_1800138F8(v6);
    v7 = sub_18002C0B4((__int64)v12, v3 + 112);
    sub_1800138F8(v7);
    sub_18001CAFC(&stru_1801B9288, 3);
    sub_180011B5C((__int64)v12);
    sub_180011B5C((__int64)v13);
    sub_180011B5C((__int64)v14);
    sub_180011B5C((__int64)v15);
    if ( v10 )
      sub_18001060C(v10);
  }
  sub_18001CAFC(&stru_1801B9288, 3);
  return sub_180028584((__int64)v11);
}
