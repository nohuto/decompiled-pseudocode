/*
 * XREFs of ExpSafeWcslen @ 0x14094E328
 * Callers:
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407BE020 (NtEnumerateDriverEntries.c)
 *     ExpVerifyWindowsOsOptions @ 0x14094D80C (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x14094DCD0 (NtEnumerateBootEntries.c)
 *     ExpVerifyFilePath @ 0x14094E480 (ExpVerifyFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  while ( *v2 )
  {
    if ( (unsigned __int64)++v2 >= a2 )
      return 0xFFFFFFFFLL;
  }
  return v2 - a1;
}
