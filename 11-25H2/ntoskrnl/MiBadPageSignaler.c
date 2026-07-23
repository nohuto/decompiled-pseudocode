/*
 * XREFs of MiBadPageSignaler @ 0x140667B60
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

NTSTATUS MiBadPageSignaler()
{
  KIRQL v0; // al

  v0 = ExAcquireSpinLockExclusive(dword_140E3A560);
  byte_140E2FF0A = 0;
  MiReleaseSpinLockExclusive(dword_140E3A560, v0);
  return ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_QUARANTINED, 0LL, 0, 0LL, 0LL, 0, 0);
}
