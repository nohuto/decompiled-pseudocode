/*
 * XREFs of PopFxUpdateDeviceIRPhaseAccounting @ 0x1403CACC0
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1403CAC3C (PopFxSetDripsBlockedByDeviceActivity.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x1404B328C (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

void __fastcall PopFxUpdateDeviceIRPhaseAccounting(char a1)
{
  KIRQL v2; // bl
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( byte_140F0BF78 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( a1 )
      qword_140F0BF70 = PerformanceCounter.QuadPart;
    else
      ((void (__fastcall *)(_QWORD))PopFxAccumulateDeviceIRPhaseAccounting)((LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
