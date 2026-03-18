/*
 * XREFs of PopFxUpdateDeviceIRPhaseAccounting @ 0x140355A34
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1403559B0 (PopFxSetDripsBlockedByDeviceActivity.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x1404B308C (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

void __fastcall PopFxUpdateDeviceIRPhaseAccounting(char a1)
{
  KIRQL v2; // bl
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( byte_140F0A758 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( a1 )
      qword_140F0A750 = PerformanceCounter.QuadPart;
    else
      ((void (__fastcall *)(_QWORD))PopFxAccumulateDeviceIRPhaseAccounting)((LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
