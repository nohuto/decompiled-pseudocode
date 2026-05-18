/*
 * XREFs of sub_1800D7259 @ 0x1800D7259
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800123FC @ 0x1800123FC (sub_1800123FC.c)
 */

__int64 __fastcall sub_1800D7259(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    return sub_1800123FC();
  }
  return result;
}
