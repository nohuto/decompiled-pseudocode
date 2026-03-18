/*
 * XREFs of MiZeroBootCalibratorStarted @ 0x140684B78
 * Callers:
 *     MiStartZeroEngineThreads @ 0x1407EFB0C (MiStartZeroEngineThreads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiZeroBootCalibratorStarted(__int64 a1)
{
  KIRQL v2; // al
  _DWORD *v3; // rcx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 208) + 15280LL));
  v3 = (_DWORD *)(*(_QWORD *)(a1 + 208) + 15280LL);
  *(_BYTE *)(a1 + 29) = 0;
  return MiReleaseSpinLockExclusive(v3, v2);
}
