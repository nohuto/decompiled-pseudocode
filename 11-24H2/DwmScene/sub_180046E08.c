/*
 * XREFs of sub_180046E08 @ 0x180046E08
 * Callers:
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_180046D30 @ 0x180046D30 (sub_180046D30.c)
 * Callees:
 *     sub_1800447EC @ 0x1800447EC (sub_1800447EC.c)
 */

__int64 __fastcall sub_180046E08(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 2u;
  v4 = 5;
  return sub_1800447EC(
           (__int64 *)(a1 + 256),
           a2,
           a3,
           *(_DWORD *)(a1 + 124),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72),
           (__int64)&v4);
}
