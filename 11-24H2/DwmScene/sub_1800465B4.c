/*
 * XREFs of sub_1800465B4 @ 0x1800465B4
 * Callers:
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_180046404 @ 0x180046404 (sub_180046404.c)
 * Callees:
 *     sub_180044B2C @ 0x180044B2C (sub_180044B2C.c)
 */

__int64 __fastcall sub_1800465B4(__int64 a1, int a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a1 + 292);
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = v3 & 0xEFFFFFBF | 0x40;
  return sub_180044B2C(
           (__int64 *)(a1 + 272),
           a2,
           a3,
           *(_DWORD *)(a1 + 116),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72));
}
