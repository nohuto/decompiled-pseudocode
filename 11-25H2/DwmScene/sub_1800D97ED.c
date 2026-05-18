/*
 * XREFs of sub_1800D97ED @ 0x1800D97ED
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800123FC @ 0x1800123FC (sub_1800123FC.c)
 */

__int64 __fastcall sub_1800D97ED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_1800123FC();
  }
  return result;
}
