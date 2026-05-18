/*
 * XREFs of sub_1800CFFD0 @ 0x1800CFFD0
 * Callers:
 *     sub_1800CDDF8 @ 0x1800CDDF8 (sub_1800CDDF8.c)
 *     sub_1800CE084 @ 0x1800CE084 (sub_1800CE084.c)
 *     sub_1800CE32C @ 0x1800CE32C (sub_1800CE32C.c)
 *     sub_1800CE6A0 @ 0x1800CE6A0 (sub_1800CE6A0.c)
 * Callees:
 *     sub_1800CF62C @ 0x1800CF62C (sub_1800CF62C.c)
 */

__int64 __fastcall sub_1800CFFD0(_QWORD *a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_1800CF62C(a1, (__int64)v3, a2) + 48LL;
}
