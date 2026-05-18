/*
 * XREFs of sub_18007E344 @ 0x18007E344
 * Callers:
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 *     sub_18008F048 @ 0x18008F048 (sub_18008F048.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 *     sub_18007E1A8 @ 0x18007E1A8 (sub_18007E1A8.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18007E344(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rbx

  v4 = a2;
  sub_18007E1A8(a1, a2);
  sub_1800132F4((__int64)&a1[4 * v4 + 24], a3);
  return sub_180011A5C(a3);
}
