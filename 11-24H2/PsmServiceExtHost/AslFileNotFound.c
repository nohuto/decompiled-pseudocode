/*
 * XREFs of AslFileNotFound @ 0x18009D9C0
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x180099A30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A4BC (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreate @ 0x18009EE08 (AslFileMappingCreate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
