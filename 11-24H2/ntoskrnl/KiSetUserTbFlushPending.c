/*
 * XREFs of KiSetUserTbFlushPending @ 0x1406AB3E0
 * Callers:
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KiFlushRangeWorker @ 0x140292770 (KiFlushRangeWorker.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1403AE894 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x1403B07A4 (KxFlushEntireTb.c)
 *     KiIpiProcessRequests @ 0x1403FEB60 (KiIpiProcessRequests.c)
 *     KiFlushRangeTb @ 0x140402200 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x1404413C0 (KiFlushCurrentTbOnly.c)
 *     KeDeepSleepProcessor @ 0x1405BC774 (KeDeepSleepProcessor.c)
 *     KeFlushSingleCurrentTb @ 0x1405BC8EC (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BCAD4 (KeFlushSingleTb.c)
 *     KiFlushSingleTbWorker @ 0x1405C9890 (KiFlushSingleTbWorker.c)
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140B5A790 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0xB018u, __readgsdword(0xB018u) | 1);
}
