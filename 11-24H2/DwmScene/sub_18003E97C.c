/*
 * XREFs of sub_18003E97C @ 0x18003E97C
 * Callers:
 *     sub_18001B020 @ 0x18001B020 (sub_18001B020.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003E97C(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v10 = a2;
  sub_180028890(a1 + 16);
  v4 = sub_180012444((__int64)v9, a2);
  v5 = *(_QWORD *)sub_18003EA2C(a1, v7, v4);
  if ( v8 )
    sub_18001060C(v8);
  sub_180013228(a2);
  return v5 + 48;
}
