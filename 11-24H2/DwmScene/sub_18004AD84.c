/*
 * XREFs of sub_18004AD84 @ 0x18004AD84
 * Callers:
 *     sub_18004CED8 @ 0x18004CED8 (sub_18004CED8.c)
 *     sub_18005B0FC @ 0x18005B0FC (sub_18005B0FC.c)
 *     sub_1800737C8 @ 0x1800737C8 (sub_1800737C8.c)
 * Callees:
 *     sub_18004A390 @ 0x18004A390 (sub_18004A390.c)
 */

__int64 __fastcall sub_18004AD84(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  sub_18004A390(a1, (__int64)&v5, a3);
  *(_QWORD *)a2 = v5;
  *(_BYTE *)(a2 + 8) = v6;
  return a2;
}
