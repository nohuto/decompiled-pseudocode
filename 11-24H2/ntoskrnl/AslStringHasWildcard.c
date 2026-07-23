/*
 * XREFs of AslStringHasWildcard @ 0x140808C00
 * Callers:
 *     AslpPathWildcardMakeLeaves @ 0x14080BC10 (AslpPathWildcardMakeLeaves.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringHasWildcard(__int16 *a1)
{
  __int64 result; // rax
  __int16 v2; // dx

  result = 0LL;
  if ( a1 )
  {
    while ( 1 )
    {
      v2 = *a1;
      if ( !*a1 )
        break;
      if ( v2 == 42 || v2 == 63 )
        return 1LL;
      ++a1;
    }
  }
  return result;
}
