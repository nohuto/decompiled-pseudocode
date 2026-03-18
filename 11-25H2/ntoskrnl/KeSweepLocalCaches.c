/*
 * XREFs of KeSweepLocalCaches @ 0x140478810
 * Callers:
 *     HalpFlushAndWait @ 0x14069ACC0 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140B3F7D0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
