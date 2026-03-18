/*
 * XREFs of CmpIsWriteQueueActive @ 0x140481A50
 * Callers:
 *     NtCompressKey @ 0x1407CF9F0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D7EEC (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x14097E0C0 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x14097F0D0 (HvGetHiveLogFileStatus.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsWriteQueueActive(_QWORD *a1)
{
  return *a1 != 0LL;
}
