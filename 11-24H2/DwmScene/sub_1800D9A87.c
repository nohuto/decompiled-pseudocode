/*
 * XREFs of sub_1800D9A87 @ 0x1800D9A87
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800124FC @ 0x1800124FC (sub_1800124FC.c)
 */

__int64 __fastcall sub_1800D9A87(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return sub_1800124FC();
  }
  return result;
}
