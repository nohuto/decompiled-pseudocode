/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1402BA3BC
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402BA0B4 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

void __fastcall PopDeepSleepResiliencyPhaseAccountingBegin(unsigned int a1, char a2)
{
  KIRQL v2; // bp
  signed int v6; // edi
  int v7; // eax

  v2 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    KxAcquireSpinLock(&PopCsResiliencyStatsLock);
  }
  dword_140F0C41C |= a1;
  while ( _BitScanForward((unsigned int *)&v6, a1) )
  {
    v7 = PopDeepSleepDisengageReasonMask;
    a1 &= a1 - 1;
    if ( _bittest(&v7, v6) )
      stru_140F0C420[v6] = KeQueryPerformanceCounter(0LL);
  }
  if ( !a2 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
    KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v2);
  }
}
