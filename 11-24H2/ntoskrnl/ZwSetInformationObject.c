/*
 * XREFs of ZwSetInformationObject @ 0x1406A6F90
 * Callers:
 *     DifZwSetInformationObjectWrapper @ 0x1406487A0 (DifZwSetInformationObjectWrapper.c)
 *     CmpFlushBackupHive @ 0x1407DC2B8 (CmpFlushBackupHive.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407E54D8 (CmpHiveCacheEntryCleanup.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x14097CFB0 (CmpCmdHiveClose.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
