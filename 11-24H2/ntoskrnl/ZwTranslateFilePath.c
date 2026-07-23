/*
 * XREFs of ZwTranslateFilePath @ 0x1406AAE90
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x140647D20 (DifZwTranslateFilePathWrapper.c)
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x1408168FC (SiBootEntryGetNtFilePath.c)
 *     BiTranslateFilePath @ 0x1409A71BC (BiTranslateFilePath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        PULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath);
}
