/*
 * XREFs of sub_180046734 @ 0x180046734
 * Callers:
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_180046654 @ 0x180046654 (sub_180046654.c)
 * Callees:
 *     sub_180044A84 @ 0x180044A84 (sub_180044A84.c)
 */

__int64 __fastcall sub_180046734(__int64 a1, int a2, int a3, int a4)
{
  int v7; // r9d
  int v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 0x400u;
  v11 = 6;
  sub_180044A84(
    (__int64 *)(a1 + 208),
    a2,
    a4,
    *(_DWORD *)(a1 + 124),
    *(_DWORD *)(a1 + 304),
    *(_QWORD *)(a1 + 72),
    (__int64)&v11);
  v7 = *(_DWORD *)(a1 + 124);
  v10 = *(_QWORD *)(a1 + 72);
  v9 = *(_DWORD *)(a1 + 304);
  v11 = 7;
  return sub_180044A84((__int64 *)(a1 + 224), a3, a4, v7, v9, v10, (__int64)&v11);
}
