/*
 * XREFs of sub_1800CF884 @ 0x1800CF884
 * Callers:
 *     sub_1800CEFF8 @ 0x1800CEFF8 (sub_1800CEFF8.c)
 *     sub_1800CF964 @ 0x1800CF964 (sub_1800CF964.c)
 * Callees:
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_1800CDCF0 @ 0x1800CDCF0 (sub_1800CDCF0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CF884(__int64 a1, __int64 a2, __int64 a3)
{
  sub_180012344(a2, a3);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 32);
  sub_180012344(a2 + 40, a3 + 40);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a3 + 72);
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a3 + 80);
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a3 + 88);
  *(_BYTE *)(a2 + 92) = *(_BYTE *)(a3 + 92);
  return sub_1800CDCF0(a2 + 96, a3 + 96);
}
