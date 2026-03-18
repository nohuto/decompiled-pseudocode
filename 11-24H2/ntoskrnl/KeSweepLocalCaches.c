/*
 * XREFs of KeSweepLocalCaches @ 0x140478F10
 * Callers:
 *     HalpFlushAndWait @ 0x1406A5EF0 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140B4F7D0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
