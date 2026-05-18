/*
 * XREFs of sub_18003F114 @ 0x18003F114
 * Callers:
 *     sub_180014610 @ 0x180014610 (sub_180014610.c)
 *     sub_180014D20 @ 0x180014D20 (sub_180014D20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18003F114(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+28h] [rbp-40h]
  _BYTE v8[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v9 = a2;
  v4 = sub_180012444((__int64)v8, a2);
  *(_BYTE *)(*sub_18003EA2C(a1, &v6, v4) + 72LL) = 1;
  if ( v7 )
    sub_18001060C(v7);
  return sub_180013228(a2);
}
