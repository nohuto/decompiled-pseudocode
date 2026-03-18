/*
 * XREFs of MiBadPageSignaler @ 0x1406735C0
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

__int64 MiBadPageSignaler()
{
  KIRQL v0; // al

  v0 = ExAcquireSpinLockExclusive(dword_140E3A7A0);
  byte_140E30152 = 0;
  MiReleaseSpinLockExclusive(dword_140E3A7A0, v0);
  return ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_QUARANTINED, 0LL, 0LL);
}
