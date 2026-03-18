/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140355308
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x140354FFC (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D3DC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
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
  dword_140F0A77C |= a1;
  while ( _BitScanForward((unsigned int *)&v6, a1) )
  {
    v7 = PopDeepSleepDisengageReasonMask;
    a1 &= a1 - 1;
    if ( _bittest(&v7, v6) )
      stru_140F0A780[v6] = KeQueryPerformanceCounter(0LL);
  }
  if ( !a2 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
    KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v2);
  }
}
