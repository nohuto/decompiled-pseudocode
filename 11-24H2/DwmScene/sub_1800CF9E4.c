/*
 * XREFs of sub_1800CF9E4 @ 0x1800CF9E4
 * Callers:
 *     sub_1800CF158 @ 0x1800CF158 (sub_1800CF158.c)
 *     sub_1800CFAC4 @ 0x1800CFAC4 (sub_1800CFAC4.c)
 * Callees:
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800CDE50 @ 0x1800CDE50 (sub_1800CDE50.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CF9E4(__int64 a1, __int64 a2, __int64 a3)
{
  sub_180012444(a2, a3);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 32);
  sub_180012444(a2 + 40, a3 + 40);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a3 + 72);
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a3 + 80);
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a3 + 88);
  *(_BYTE *)(a2 + 92) = *(_BYTE *)(a3 + 92);
  return sub_1800CDE50(a2 + 96, a3 + 96);
}
