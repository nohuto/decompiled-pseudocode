/*
 * XREFs of MiBadPageSignaler @ 0x140674790
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS MiBadPageSignaler()
{
  KIRQL v0; // al

  v0 = ExAcquireSpinLockExclusive(dword_140E3A8E0);
  byte_140E30292 = 0;
  MiReleaseSpinLockExclusive(dword_140E3A8E0, v0);
  return ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_QUARANTINED, 0LL, 0, 0LL, 0LL, 0, 0);
}
