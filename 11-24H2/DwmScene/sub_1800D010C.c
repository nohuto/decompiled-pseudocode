/*
 * XREFs of sub_1800D010C @ 0x1800D010C
 * Callers:
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 *     sub_1800CEC34 @ 0x1800CEC34 (sub_1800CEC34.c)
 *     sub_1800CEDDC @ 0x1800CEDDC (sub_1800CEDDC.c)
 *     sub_1800CEFB4 @ 0x1800CEFB4 (sub_1800CEFB4.c)
 *     sub_1800D0610 @ 0x1800D0610 (sub_1800D0610.c)
 *     sub_1800D08C0 @ 0x1800D08C0 (sub_1800D08C0.c)
 * Callees:
 *     sub_1800CF89C @ 0x1800CF89C (sub_1800CF89C.c)
 */

__int64 __fastcall sub_1800D010C(__int64 *a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_1800CF89C(a1, (__int64)v3, a2) + 64LL;
}
