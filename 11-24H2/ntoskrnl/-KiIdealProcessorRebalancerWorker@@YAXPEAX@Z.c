/*
 * XREFs of ?KiIdealProcessorRebalancerWorker@@YAXPEAX@Z @ 0x140474920
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403396B0 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 */

void __fastcall KiIdealProcessorRebalancerWorker(void *a1)
{
  KIRQL v1; // al
  char v2; // bl

  while ( 1 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&qword_140E170E8);
    v2 = byte_140E170F1;
    byte_140E170F1 = 0;
    if ( !v2 )
      break;
    KeReleaseSpinLock(&qword_140E170E8, v1);
    if ( (v2 & 1) != 0 )
      KiUpdateProcessConcurrencyCounts();
  }
  byte_140E170F0 = 0;
  KeReleaseSpinLock(&qword_140E170E8, v1);
}
