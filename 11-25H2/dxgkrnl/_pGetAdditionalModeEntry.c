/*
 * XREFs of _pGetAdditionalModeEntry @ 0x1402C933C
 * Callers:
 *     _pGetAdditionalTiming @ 0x1402C8A7C (_pGetAdditionalTiming.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall pGetAdditionalModeEntry(int a1, char a2)
{
  _DWORD *result; // rax

  if ( a1 == -2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 281;
  }
  for ( result = qword_14015E4C0; result && (a1 != result[2] || a2 != *((_BYTE *)result + 12)); result = *(_DWORD **)result )
    ;
  return result;
}
