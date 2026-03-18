/*
 * XREFs of AslFileMappingGetViewBase @ 0x1408096F4
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140800F84 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140803770 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslFileMappingGetViewBase(__int64 a1)
{
  if ( a1 )
    return *(_QWORD *)(a1 + 32);
  else
    return 0LL;
}
