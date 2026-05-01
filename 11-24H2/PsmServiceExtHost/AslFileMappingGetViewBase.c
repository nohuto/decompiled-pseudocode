/*
 * XREFs of AslFileMappingGetViewBase @ 0x18009F690
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1800929B0 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A4BC (SdbpCheckMatchingTextEntry.c)
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
