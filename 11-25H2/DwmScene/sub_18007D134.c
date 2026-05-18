/*
 * XREFs of sub_18007D134 @ 0x18007D134
 * Callers:
 *     sub_18007CF18 @ 0x18007CF18 (sub_18007CF18.c)
 *     sub_180081C48 @ 0x180081C48 (sub_180081C48.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_18007D134(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_180016F54(a2, a3);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 36);
  *(_BYTE *)(a2 + 40) = *(_BYTE *)(a3 + 40);
  result = *(unsigned int *)(a3 + 44);
  *(_DWORD *)(a2 + 44) = result;
  return result;
}
