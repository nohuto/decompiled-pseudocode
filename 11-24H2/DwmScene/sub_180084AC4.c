/*
 * XREFs of sub_180084AC4 @ 0x180084AC4
 * Callers:
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 *     sub_180067AC4 @ 0x180067AC4 (sub_180067AC4.c)
 * Callees:
 *     sub_180084754 @ 0x180084754 (sub_180084754.c)
 */

__int64 __fastcall sub_180084AC4(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1944);
  *(_DWORD *)(a1 + 1944) = a2;
  if ( (_DWORD)result != a2 )
    return sub_180084754(a1);
  return result;
}
