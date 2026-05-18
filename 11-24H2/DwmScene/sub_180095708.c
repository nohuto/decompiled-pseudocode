/*
 * XREFs of sub_180095708 @ 0x180095708
 * Callers:
 *     sub_180095E68 @ 0x180095E68 (sub_180095E68.c)
 * Callees:
 *     sub_1800954CC @ 0x1800954CC (sub_1800954CC.c)
 */

__int64 __fastcall sub_180095708(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  sub_1800954CC(a1, (__int64)&v5, a3);
  *(_QWORD *)a2 = v5;
  *(_BYTE *)(a2 + 8) = v6;
  return a2;
}
