/*
 * XREFs of AslFileMappingGetViewBase @ 0x1407F9B84
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1407F10C4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407F38C0 (SdbpCheckMatchingTextEntry.c)
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
