/*
 * XREFs of ExpSafeWcslen @ 0x140820FC8
 * Callers:
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407AE400 (NtEnumerateDriverEntries.c)
 *     ExpVerifyWindowsOsOptions @ 0x1408204B0 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x140820970 (NtEnumerateBootEntries.c)
 *     ExpVerifyFilePath @ 0x140821120 (ExpVerifyFilePath.c)
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
