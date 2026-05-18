/*
 * XREFs of sub_18008DC8C @ 0x18008DC8C
 * Callers:
 *     sub_18002C49C @ 0x18002C49C (sub_18002C49C.c)
 *     sub_180073E78 @ 0x180073E78 (sub_180073E78.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18005AA08 @ 0x18005AA08 (sub_18005AA08.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008DC8C(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]

  v7 = a2;
  v4 = sub_180017054((__int64)v6, a2);
  sub_18005AA08((__int64)a1, v4);
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  sub_180011B5C(a2);
  return a1;
}
