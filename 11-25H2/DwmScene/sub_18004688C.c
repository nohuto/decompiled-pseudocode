/*
 * XREFs of sub_18004688C @ 0x18004688C
 * Callers:
 *     sub_180045F1C @ 0x180045F1C (sub_180045F1C.c)
 *     sub_1800467B4 @ 0x1800467B4 (sub_1800467B4.c)
 * Callees:
 *     sub_180044734 @ 0x180044734 (sub_180044734.c)
 */

__int64 __fastcall sub_18004688C(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 0x100u;
  v4 = 0;
  return sub_180044734(
           (__int64 *)(a1 + 144),
           a2,
           a3,
           *(_DWORD *)(a1 + 124),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72),
           (__int64)&v4);
}
