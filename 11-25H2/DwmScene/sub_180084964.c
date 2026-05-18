/*
 * XREFs of sub_180084964 @ 0x180084964
 * Callers:
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 *     sub_180067964 @ 0x180067964 (sub_180067964.c)
 * Callees:
 *     sub_1800845F4 @ 0x1800845F4 (sub_1800845F4.c)
 */

__int64 __fastcall sub_180084964(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1944);
  *(_DWORD *)(a1 + 1944) = a2;
  if ( (_DWORD)result != a2 )
    return sub_1800845F4(a1);
  return result;
}
