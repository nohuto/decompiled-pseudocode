/*
 * XREFs of MiProcessorParked @ 0x1404ADB64
 * Callers:
 *     MiMoveBackgroundZeroThreads @ 0x1403A3B00 (MiMoveBackgroundZeroThreads.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

_BOOL8 __fastcall MiProcessorParked(__int64 a1)
{
  __int64 v1; // rsi
  BOOL v3; // ebx

  v1 = *(unsigned __int16 *)(a1 + 8);
  v3 = 0;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2ED80);
  if ( (unsigned __int16)v1 < (unsigned __int16)word_140E2ED88 )
    v3 = (*(_QWORD *)a1 & qword_140E2ED90[v1]) != 0;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2ED80);
  return v3;
}
