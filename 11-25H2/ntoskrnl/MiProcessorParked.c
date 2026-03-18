/*
 * XREFs of MiProcessorParked @ 0x1404B31A8
 * Callers:
 *     MiMoveBackgroundZeroThreads @ 0x14026C160 (MiMoveBackgroundZeroThreads.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

_BOOL8 __fastcall MiProcessorParked(__int64 a1)
{
  __int64 v1; // rsi
  BOOL v3; // ebx

  v1 = *(unsigned __int16 *)(a1 + 8);
  v3 = 0;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2EA00);
  if ( (unsigned __int16)v1 < (unsigned __int16)word_140E2EA08 )
    v3 = (*(_QWORD *)a1 & qword_140E2EA10[v1]) != 0;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EA00);
  return v3;
}
