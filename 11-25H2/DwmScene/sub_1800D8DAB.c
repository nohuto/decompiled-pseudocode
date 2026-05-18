/*
 * XREFs of sub_1800D8DAB @ 0x1800D8DAB
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004DB54 @ 0x18004DB54 (sub_18004DB54.c)
 */

__int64 __fastcall sub_1800D8DAB(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    return sub_18004DB54();
  }
  return result;
}
