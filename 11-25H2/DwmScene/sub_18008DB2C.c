/*
 * XREFs of sub_18008DB2C @ 0x18008DB2C
 * Callers:
 *     sub_18002C33C @ 0x18002C33C (sub_18002C33C.c)
 *     sub_180073D18 @ 0x180073D18 (sub_180073D18.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18005A8A8 @ 0x18005A8A8 (sub_18005A8A8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008DB2C(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]

  v7 = a2;
  v4 = sub_180016F54((__int64)v6, a2);
  sub_18005A8A8((__int64)a1, v4);
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  sub_180011A5C(a2);
  return a1;
}
