/*
 * XREFs of sub_180076434 @ 0x180076434
 * Callers:
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_18008FC10 @ 0x18008FC10 (sub_18008FC10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180076434(__int64 a1, __int64 a2)
{
  sub_1800132F4(a1 + 496, a2);
  return sub_180011A5C(a2);
}
