/*
 * XREFs of MiProcessorParked @ 0x1403CA9E8
 * Callers:
 *     MiMoveBackgroundZeroThreads @ 0x1403C8F60 (MiMoveBackgroundZeroThreads.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

_BOOL8 __fastcall MiProcessorParked(__int64 a1)
{
  __int64 v1; // rsi
  BOOL v3; // ebx

  v1 = *(unsigned __int16 *)(a1 + 8);
  v3 = 0;
  ExAcquireSpinLockSharedAtDpcLevel(&SpinLock);
  if ( (unsigned __int16)v1 < (unsigned __int16)word_140E2EC48 )
    v3 = (*(_QWORD *)a1 & qword_140E2EC50[v1]) != 0;
  ExReleaseSpinLockSharedFromDpcLevel(&SpinLock);
  return v3;
}
