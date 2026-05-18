/*
 * XREFs of sub_180046608 @ 0x180046608
 * Callers:
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_1800464DC @ 0x1800464DC (sub_1800464DC.c)
 * Callees:
 *     sub_1800449E4 @ 0x1800449E4 (sub_1800449E4.c)
 */

__int64 __fastcall sub_180046608(__int64 a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 292) |= 0x10000040u;
  *(_DWORD *)(a1 + 288) = 1;
  return sub_1800449E4(
           (__int64 *)(a1 + 272),
           a2,
           a3,
           *(_DWORD *)(a1 + 116),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72));
}
