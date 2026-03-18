/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403553B8
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x140354FFC (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D3DC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

void __fastcall PopDeepSleepResiliencyPhaseAccountingEnd(unsigned int a1, char a2)
{
  KIRQL v2; // si
  KIRQL v3; // bp
  LARGE_INTEGER PerformanceCounter; // r8
  bool i; // zf
  unsigned int v8; // edx
  int v9; // eax

  v2 = 0;
  v3 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v3 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140F0A77C &= ~a1;
  for ( i = !_BitScanForward(&v8, a1); !i; i = !_BitScanForward(&v8, a1) )
  {
    v9 = PopDeepSleepDisengageReasonMask;
    a1 &= a1 - 1;
    if ( _bittest(&v9, v8) )
    {
      *(_QWORD *)&PopCsResiliencyStats[8 * v8 + 248] += PerformanceCounter.QuadPart
                                                      - *(_QWORD *)&PopCsResiliencyStats[8 * v8 + 160];
      *(_QWORD *)&PopCsResiliencyStats[8 * v8 + 160] = 0LL;
    }
  }
  if ( !a2 )
  {
    KeReleaseSpinLock(&PopCsResiliencyStatsLock, v3);
    KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v2);
  }
}
