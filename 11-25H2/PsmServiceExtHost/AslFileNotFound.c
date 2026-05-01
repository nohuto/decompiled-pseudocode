/*
 * XREFs of AslFileNotFound @ 0x18009D6D0
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1800996E0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A16C (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreate @ 0x18009EB18 (AslFileMappingCreate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
