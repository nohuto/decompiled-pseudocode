/*
 * XREFs of sub_180076594 @ 0x180076594
 * Callers:
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_18008FD70 @ 0x18008FD70 (sub_18008FD70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180076594(__int64 a1, __int64 a2)
{
  sub_1800133F4(a1 + 496, a2);
  return sub_180011B5C(a2);
}
