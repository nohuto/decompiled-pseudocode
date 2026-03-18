/*
 * XREFs of sub_140973AD0 @ 0x140973AD0
 * Callers:
 *     sub_1409735B8 @ 0x1409735B8 (sub_1409735B8.c)
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140973AD0(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)));
}
