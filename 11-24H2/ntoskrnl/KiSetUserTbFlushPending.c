/*
 * XREFs of KiSetUserTbFlushPending @ 0x1406AC380
 * Callers:
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     KiFlushRangeWorker @ 0x1402A2370 (KiFlushRangeWorker.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x14039EFB4 (KxFlushEntireTb.c)
 *     KiIpiProcessRequests @ 0x1403F91B0 (KiIpiProcessRequests.c)
 *     KiFlushRangeTb @ 0x1403FC780 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x140437D00 (KiFlushCurrentTbOnly.c)
 *     KeDeepSleepProcessor @ 0x1405B9DA4 (KeDeepSleepProcessor.c)
 *     KeFlushSingleCurrentTb @ 0x1405B9F1C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BA104 (KeFlushSingleTb.c)
 *     KiFlushSingleTbWorker @ 0x1405C6FC0 (KiFlushSingleTbWorker.c)
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140B5C800 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0xB018u, __readgsdword(0xB018u) | 1);
}
