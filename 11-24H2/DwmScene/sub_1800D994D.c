/*
 * XREFs of sub_1800D994D @ 0x1800D994D
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800124FC @ 0x1800124FC (sub_1800124FC.c)
 */

__int64 __fastcall sub_1800D994D(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_1800124FC();
  }
  return result;
}
