/*
 * XREFs of sub_1800955A8 @ 0x1800955A8
 * Callers:
 *     sub_180095D08 @ 0x180095D08 (sub_180095D08.c)
 * Callees:
 *     sub_18009536C @ 0x18009536C (sub_18009536C.c)
 */

__int64 __fastcall sub_1800955A8(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  sub_18009536C(a1, (__int64)&v5, a3);
  *(_QWORD *)a2 = v5;
  *(_BYTE *)(a2 + 8) = v6;
  return a2;
}
