/*
 * XREFs of AslFileNotFound @ 0x1406F95F0
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1408034C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140803EB0 (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
