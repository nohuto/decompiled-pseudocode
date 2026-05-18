/*
 * XREFs of sub_1800D16C0 @ 0x1800D16C0
 * Callers:
 *     sub_1800CDFE8 @ 0x1800CDFE8 (sub_1800CDFE8.c)
 *     sub_1800CE27C @ 0x1800CE27C (sub_1800CE27C.c)
 *     sub_1800CE554 @ 0x1800CE554 (sub_1800CE554.c)
 *     sub_1800CE894 @ 0x1800CE894 (sub_1800CE894.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 *     sub_1800CEC34 @ 0x1800CEC34 (sub_1800CEC34.c)
 *     sub_1800CEDDC @ 0x1800CEDDC (sub_1800CEDDC.c)
 *     sub_1800CEFB4 @ 0x1800CEFB4 (sub_1800CEFB4.c)
 *     sub_1800D0610 @ 0x1800D0610 (sub_1800D0610.c)
 *     sub_1800D07D4 @ 0x1800D07D4 (sub_1800D07D4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_1800D14F4 @ 0x1800D14F4 (sub_1800D14F4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D16C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = a2;
  v3 = *(_QWORD *)sub_1800D14F4((_QWORD *)(a1 + 64), (__int64)v5, a2);
  sub_180013228(a2);
  return v3 + 48;
}
