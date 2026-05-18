/*
 * XREFs of sub_1800D9927 @ 0x1800D9927
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800123FC @ 0x1800123FC (sub_1800123FC.c)
 */

__int64 __fastcall sub_1800D9927(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return sub_1800123FC();
  }
  return result;
}
