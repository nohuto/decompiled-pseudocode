/*
 * XREFs of sub_180046454 @ 0x180046454
 * Callers:
 *     sub_180045F1C @ 0x180045F1C (sub_180045F1C.c)
 *     sub_1800462A4 @ 0x1800462A4 (sub_1800462A4.c)
 * Callees:
 *     sub_1800449CC @ 0x1800449CC (sub_1800449CC.c)
 */

__int64 __fastcall sub_180046454(__int64 a1, int a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a1 + 292);
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = v3 & 0xEFFFFFBF | 0x40;
  return sub_1800449CC(
           (__int64 *)(a1 + 272),
           a2,
           a3,
           *(_DWORD *)(a1 + 116),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72));
}
