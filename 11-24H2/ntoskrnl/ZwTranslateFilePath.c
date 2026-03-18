/*
 * XREFs of ZwTranslateFilePath @ 0x1406A9EF0
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x140649760 (DifZwTranslateFilePathWrapper.c)
 *     ExpSetBootEntry @ 0x1407BC32C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCA24 (ExpSetDriverEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x1408161BC (SiBootEntryGetNtFilePath.c)
 *     BiTranslateFilePath @ 0x1409C0B6C (BiTranslateFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
