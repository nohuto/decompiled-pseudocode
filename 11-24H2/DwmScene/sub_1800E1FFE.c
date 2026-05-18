/*
 * XREFs of sub_1800E1FFE @ 0x1800E1FFE
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D610 @ 0x18000D610 (sub_18000D610.c)
 */

__int64 __fastcall sub_1800E1FFE(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_18000D610();
  }
  return result;
}
