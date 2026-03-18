/*
 * XREFs of KiSetUserTbFlushPending @ 0x1406A0110
 * Callers:
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x14027043C (KxFlushEntireTb.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     KiFlushRangeWorker @ 0x14032D3F0 (KiFlushRangeWorker.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     KiIpiProcessRequests @ 0x1403F6650 (KiIpiProcessRequests.c)
 *     KiFlushRangeTb @ 0x1403FA1C0 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x1404417D0 (KiFlushCurrentTbOnly.c)
 *     KeDeepSleepProcessor @ 0x1405B88D4 (KeDeepSleepProcessor.c)
 *     KeFlushSingleCurrentTb @ 0x1405B8A4C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405B8C34 (KeFlushSingleTb.c)
 *     KiFlushSingleTbWorker @ 0x1405C5270 (KiFlushSingleTbWorker.c)
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140B4A820 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0xB018u, __readgsdword(0xB018u) | 1);
}
