/*
 * XREFs of AslFileNotFound @ 0x1406EFB40
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1407F2ED0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407F38C0 (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreate @ 0x140A75D30 (AslFileMappingCreate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
