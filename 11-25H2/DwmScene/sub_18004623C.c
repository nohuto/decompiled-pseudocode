/*
 * XREFs of sub_18004623C @ 0x18004623C
 * Callers:
 *     sub_180045F1C @ 0x180045F1C (sub_180045F1C.c)
 *     sub_180046164 @ 0x180046164 (sub_180046164.c)
 * Callees:
 *     sub_180044924 @ 0x180044924 (sub_180044924.c)
 */

__int64 __fastcall sub_18004623C(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 0x80u;
  v4 = 3;
  return sub_180044924(
           (__int64 *)(a1 + 176),
           a2,
           a3,
           *(_DWORD *)(a1 + 124),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72),
           (__int64)&v4);
}
