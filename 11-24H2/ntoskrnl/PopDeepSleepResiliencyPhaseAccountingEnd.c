/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403CB954
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403CB59C (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D87A0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
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
  dword_140F0BF9C &= ~a1;
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
