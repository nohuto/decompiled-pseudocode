/*
 * XREFs of sub_18003E8D0 @ 0x18003E8D0
 * Callers:
 *     sub_180015F84 @ 0x180015F84 (sub_180015F84.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18003CB1C @ 0x18003CB1C (sub_18003CB1C.c)
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18003E8D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  _BYTE v11[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-28h]

  v13 = a3;
  sub_18002894C(a1 + 16, a2);
  v6 = sub_180012444((__int64)v11, a3);
  sub_18003EA2C(a1, &v9, v6);
  v7 = (__int64 *)sub_18003ECF8(v9, v11);
  sub_18003CB1C(a2, v7);
  if ( v12 )
    sub_18001060C(v12);
  if ( v10 )
    sub_18001060C(v10);
  return sub_180013228(a3);
}
