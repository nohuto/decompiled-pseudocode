/*
 * XREFs of sub_140973A10 @ 0x140973A10
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140973A10(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) ^ (a7
                                                                         - (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3)));
}
