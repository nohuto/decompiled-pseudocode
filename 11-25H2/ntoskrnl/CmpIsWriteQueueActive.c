/*
 * XREFs of CmpIsWriteQueueActive @ 0x14048091C
 * Callers:
 *     NtCompressKey @ 0x1407C02F0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407C8754 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x140884868 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x140A0C448 (HvGetHiveLogFileStatus.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsWriteQueueActive(_QWORD *a1)
{
  return *a1 != 0LL;
}
