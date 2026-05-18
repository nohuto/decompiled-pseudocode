/*
 * XREFs of sub_18002C0B4 @ 0x18002C0B4
 * Callers:
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180031EBC @ 0x180031EBC (sub_180031EBC.c)
 *     sub_180033C18 @ 0x180033C18 (sub_180033C18.c)
 *     sub_18003E2AC @ 0x18003E2AC (sub_18003E2AC.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 *     sub_1800617C0 @ 0x1800617C0 (sub_1800617C0.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001D548 @ 0x18001D548 (sub_18001D548.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002C0B4(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  v3 = sub_18001D548((__int64)v5, a2);
  sub_180017054(a1, v3);
  sub_180011B5C((__int64)v5);
  return a1;
}
