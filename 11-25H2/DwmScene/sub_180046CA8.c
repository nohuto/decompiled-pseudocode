/*
 * XREFs of sub_180046CA8 @ 0x180046CA8
 * Callers:
 *     sub_180045F1C @ 0x180045F1C (sub_180045F1C.c)
 *     sub_180046BD0 @ 0x180046BD0 (sub_180046BD0.c)
 * Callees:
 *     sub_18004468C @ 0x18004468C (sub_18004468C.c)
 */

__int64 __fastcall sub_180046CA8(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 2u;
  v4 = 5;
  return sub_18004468C(
           (__int64 *)(a1 + 256),
           a2,
           a3,
           *(_DWORD *)(a1 + 124),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72),
           (__int64)&v4);
}
