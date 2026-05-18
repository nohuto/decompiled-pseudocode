/*
 * XREFs of sub_180078CB8 @ 0x180078CB8
 * Callers:
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_180078CB8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_180017054(a2, a3);
  *(_WORD *)(a2 + 32) = *(_WORD *)(a3 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a3 + 44);
  result = *(unsigned int *)(a3 + 48);
  *(_DWORD *)(a2 + 48) = result;
  return result;
}
