/*
 * XREFs of sub_18004639C @ 0x18004639C
 * Callers:
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_1800462C4 @ 0x1800462C4 (sub_1800462C4.c)
 * Callees:
 *     sub_180044A84 @ 0x180044A84 (sub_180044A84.c)
 */

__int64 __fastcall sub_18004639C(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 0x80u;
  v4 = 3;
  return sub_180044A84(
           (__int64 *)(a1 + 176),
           a2,
           a3,
           *(_DWORD *)(a1 + 124),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72),
           (__int64)&v4);
}
