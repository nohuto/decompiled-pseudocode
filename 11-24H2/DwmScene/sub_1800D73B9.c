/*
 * XREFs of sub_1800D73B9 @ 0x1800D73B9
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800124FC @ 0x1800124FC (sub_1800124FC.c)
 */

__int64 __fastcall sub_1800D73B9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    return sub_1800124FC();
  }
  return result;
}
