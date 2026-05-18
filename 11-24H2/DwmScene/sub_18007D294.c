/*
 * XREFs of sub_18007D294 @ 0x18007D294
 * Callers:
 *     sub_18007D078 @ 0x18007D078 (sub_18007D078.c)
 *     sub_180081DA8 @ 0x180081DA8 (sub_180081DA8.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_18007D294(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_180017054(a2, a3);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 36);
  *(_BYTE *)(a2 + 40) = *(_BYTE *)(a3 + 40);
  result = *(unsigned int *)(a3 + 44);
  *(_DWORD *)(a2 + 44) = result;
  return result;
}
