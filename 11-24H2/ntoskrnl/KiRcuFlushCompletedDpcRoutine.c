/*
 * XREFs of KiRcuFlushCompletedDpcRoutine @ 0x1405BBEF0
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 */

void KiRcuFlushCompletedDpcRoutine()
{
  KiRcuFlushCompleted(1);
}
