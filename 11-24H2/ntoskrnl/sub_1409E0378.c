/*
 * XREFs of sub_1409E0378 @ 0x1409E0378
 * Callers:
 *     sub_1409DFA70 @ 0x1409DFA70 (sub_1409DFA70.c)
 *     sub_1409DFE38 @ 0x1409DFE38 (sub_1409DFE38.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409E0378(volatile signed __int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64(a1, 1uLL) )
      return 3221225701LL;
  }
  return result;
}
