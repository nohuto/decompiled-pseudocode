/*
 * XREFs of sub_1800464A8 @ 0x1800464A8
 * Callers:
 *     sub_180045F1C @ 0x180045F1C (sub_180045F1C.c)
 *     sub_18004637C @ 0x18004637C (sub_18004637C.c)
 * Callees:
 *     sub_180044884 @ 0x180044884 (sub_180044884.c)
 */

__int64 __fastcall sub_1800464A8(__int64 a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 292) |= 0x10000040u;
  *(_DWORD *)(a1 + 288) = 1;
  return sub_180044884(
           (__int64 *)(a1 + 272),
           a2,
           a3,
           *(_DWORD *)(a1 + 116),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72));
}
