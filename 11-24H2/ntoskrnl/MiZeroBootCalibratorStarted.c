/*
 * XREFs of MiZeroBootCalibratorStarted @ 0x14068FFD8
 * Callers:
 *     MiStartZeroEngineThreads @ 0x1407FF9CC (MiStartZeroEngineThreads.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
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
