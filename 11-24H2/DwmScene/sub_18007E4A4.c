/*
 * XREFs of sub_18007E4A4 @ 0x18007E4A4
 * Callers:
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 *     sub_18008F1A8 @ 0x18008F1A8 (sub_18008F1A8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_18007E308 @ 0x18007E308 (sub_18007E308.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18007E4A4(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rbx

  v4 = a2;
  sub_18007E308(a1, a2);
  sub_1800133F4((__int64)&a1[4 * v4 + 24], a3);
  return sub_180011B5C(a3);
}
