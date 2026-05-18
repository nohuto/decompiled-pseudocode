/*
 * XREFs of sub_1800CFFAC @ 0x1800CFFAC
 * Callers:
 *     sub_1800CE930 @ 0x1800CE930 (sub_1800CE930.c)
 *     sub_1800CEAD4 @ 0x1800CEAD4 (sub_1800CEAD4.c)
 *     sub_1800CEC7C @ 0x1800CEC7C (sub_1800CEC7C.c)
 *     sub_1800CEE54 @ 0x1800CEE54 (sub_1800CEE54.c)
 *     sub_1800D04B0 @ 0x1800D04B0 (sub_1800D04B0.c)
 *     sub_1800D0760 @ 0x1800D0760 (sub_1800D0760.c)
 * Callees:
 *     sub_1800CF73C @ 0x1800CF73C (sub_1800CF73C.c)
 */

__int64 __fastcall sub_1800CFFAC(__int64 *a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_1800CF73C(a1, (__int64)v3, a2) + 64LL;
}
