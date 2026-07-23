/*
 * XREFs of PopFxUpdateDeviceIRPhaseAccounting @ 0x1403A5854
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1403A57D0 (PopFxSetDripsBlockedByDeviceActivity.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x1404ADA9C (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

void __fastcall PopFxUpdateDeviceIRPhaseAccounting(char a1)
{
  KIRQL v2; // bl
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( byte_140F0C3F8 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( a1 )
      qword_140F0C3F0 = PerformanceCounter.QuadPart;
    else
      ((void (__fastcall *)(_QWORD))PopFxAccumulateDeviceIRPhaseAccounting)((LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
