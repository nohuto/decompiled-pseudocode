/*
 * XREFs of CmpIsWriteQueueActive @ 0x14047CD10
 * Callers:
 *     NtCompressKey @ 0x1407CFEE0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1409668D0 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x1409678E0 (HvGetHiveLogFileStatus.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsWriteQueueActive(_QWORD *a1)
{
  return *a1 != 0LL;
}
