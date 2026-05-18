/*
 * XREFs of sub_18003E81C @ 0x18003E81C
 * Callers:
 *     sub_18001AEC0 @ 0x18001AEC0 (sub_18001AEC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_18003E8CC @ 0x18003E8CC (sub_18003E8CC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003E81C(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v10 = a2;
  sub_180028730(a1 + 16);
  v4 = sub_180012344((__int64)v9, a2);
  v5 = *(_QWORD *)sub_18003E8CC(a1, v7, v4);
  if ( v8 )
    sub_18001050C(v8);
  sub_180013128(a2);
  return v5 + 48;
}
