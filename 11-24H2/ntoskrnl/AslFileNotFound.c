/*
 * XREFs of AslFileNotFound @ 0x1406FB9B0
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140802D80 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140803770 (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreate @ 0x140959A94 (AslFileMappingCreate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
