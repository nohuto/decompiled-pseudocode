/*
 * XREFs of ?KiIdealProcessorRebalancerWorker@@YAXPEAX@Z @ 0x140478EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x140210350 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall KiIdealProcessorRebalancerWorker(void *a1)
{
  KIRQL v1; // al
  char v2; // bl

  while ( 1 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&qword_140E16FA8);
    v2 = byte_140E16FB1;
    byte_140E16FB1 = 0;
    if ( !v2 )
      break;
    KeReleaseSpinLock(&qword_140E16FA8, v1);
    if ( (v2 & 1) != 0 )
      KiUpdateProcessConcurrencyCounts();
  }
  byte_140E16FB0 = 0;
  KeReleaseSpinLock(&qword_140E16FA8, v1);
}
