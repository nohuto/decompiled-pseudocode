/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1403CB8A4
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403CB59C (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D87A0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
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
  dword_140F0BF9C |= a1;
  while ( _BitScanForward((unsigned int *)&v6, a1) )
  {
    v7 = PopDeepSleepDisengageReasonMask;
    a1 &= a1 - 1;
    if ( _bittest(&v7, v6) )
      stru_140F0BFA0[v6] = KeQueryPerformanceCounter(0LL);
  }
  if ( !a2 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
    KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v2);
  }
}
