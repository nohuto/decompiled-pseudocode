/*
 * XREFs of sub_18001E774 @ 0x18001E774
 * Callers:
 *     sub_1800CDC30 @ 0x1800CDC30 (sub_1800CDC30.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_18001E774(_WORD *a1, __int64 a2, _WORD *a3)
{
  _WORD *result; // rax

  result = 0LL;
  if ( a2 )
  {
    while ( *a1 != *a3 )
    {
      if ( a2 == 1 )
        return result;
      --a2;
      ++a1;
    }
    return a1;
  }
  return result;
}
