/*
 * XREFs of KeSweepLocalCaches @ 0x140474990
 * Callers:
 *     HalpFlushAndWait @ 0x1406A6F10 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140B51820 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
