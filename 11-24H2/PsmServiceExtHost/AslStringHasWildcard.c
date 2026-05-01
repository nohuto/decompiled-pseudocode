/*
 * XREFs of AslStringHasWildcard @ 0x18009E67C
 * Callers:
 *     AslpPathWildcardMakeLeaves @ 0x1800A5E10 (AslpPathWildcardMakeLeaves.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringHasWildcard(_WORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    while ( *a1 )
    {
      if ( *a1 == 42 || *a1 == 63 )
        return 1LL;
      ++a1;
    }
  }
  return result;
}
