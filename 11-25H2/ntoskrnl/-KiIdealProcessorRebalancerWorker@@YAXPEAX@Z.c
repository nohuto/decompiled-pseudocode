/*
 * XREFs of ?KiIdealProcessorRebalancerWorker@@YAXPEAX@Z @ 0x140478820
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403AE380 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 */

void __fastcall KiIdealProcessorRebalancerWorker(void *a1)
{
  KIRQL v1; // al
  char v2; // bl

  while ( 1 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&qword_140E16D68);
    v2 = byte_140E16D71;
    byte_140E16D71 = 0;
    if ( !v2 )
      break;
    KeReleaseSpinLock(&qword_140E16D68, v1);
    if ( (v2 & 1) != 0 )
      KiUpdateProcessConcurrencyCounts();
  }
  byte_140E16D70 = 0;
  KeReleaseSpinLock(&qword_140E16D68, v1);
}
