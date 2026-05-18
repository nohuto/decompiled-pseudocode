/*
 * XREFs of sub_1800D1560 @ 0x1800D1560
 * Callers:
 *     sub_1800CDE88 @ 0x1800CDE88 (sub_1800CDE88.c)
 *     sub_1800CE11C @ 0x1800CE11C (sub_1800CE11C.c)
 *     sub_1800CE3F4 @ 0x1800CE3F4 (sub_1800CE3F4.c)
 *     sub_1800CE734 @ 0x1800CE734 (sub_1800CE734.c)
 *     sub_1800CE930 @ 0x1800CE930 (sub_1800CE930.c)
 *     sub_1800CEAD4 @ 0x1800CEAD4 (sub_1800CEAD4.c)
 *     sub_1800CEC7C @ 0x1800CEC7C (sub_1800CEC7C.c)
 *     sub_1800CEE54 @ 0x1800CEE54 (sub_1800CEE54.c)
 *     sub_1800D04B0 @ 0x1800D04B0 (sub_1800D04B0.c)
 *     sub_1800D0674 @ 0x1800D0674 (sub_1800D0674.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_1800D1394 @ 0x1800D1394 (sub_1800D1394.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D1560(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = a2;
  v3 = *(_QWORD *)sub_1800D1394((_QWORD *)(a1 + 64), (__int64)v5, a2);
  sub_180013128(a2);
  return v3 + 48;
}
