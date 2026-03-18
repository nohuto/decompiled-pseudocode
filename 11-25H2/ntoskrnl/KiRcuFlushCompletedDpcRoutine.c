/*
 * XREFs of KiRcuFlushCompletedDpcRoutine @ 0x1405B8050
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 */

void KiRcuFlushCompletedDpcRoutine()
{
  KiRcuFlushCompleted(1);
}
