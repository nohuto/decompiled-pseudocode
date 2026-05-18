/*
 * XREFs of sub_1800469EC @ 0x1800469EC
 * Callers:
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_180046914 @ 0x180046914 (sub_180046914.c)
 * Callees:
 *     sub_180044894 @ 0x180044894 (sub_180044894.c)
 */

__int64 __fastcall sub_1800469EC(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 0x100u;
  v4 = 0;
  return sub_180044894(
           (__int64 *)(a1 + 144),
           a2,
           a3,
           *(_DWORD *)(a1 + 124),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72),
           (__int64)&v4);
}
