/*
 * XREFs of sub_1800D0130 @ 0x1800D0130
 * Callers:
 *     sub_1800CDF58 @ 0x1800CDF58 (sub_1800CDF58.c)
 *     sub_1800CE1E4 @ 0x1800CE1E4 (sub_1800CE1E4.c)
 *     sub_1800CE48C @ 0x1800CE48C (sub_1800CE48C.c)
 *     sub_1800CE800 @ 0x1800CE800 (sub_1800CE800.c)
 * Callees:
 *     sub_1800CF78C @ 0x1800CF78C (sub_1800CF78C.c)
 */

__int64 __fastcall sub_1800D0130(_QWORD *a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_1800CF78C(a1, (__int64)v3, a2) + 48LL;
}
