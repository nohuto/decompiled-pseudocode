/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x14041BCD0
 * Callers:
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KeRundownQueueEx @ 0x14041B7C8 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14041BA48 (KeDeleteMutant.c)
 *     KeRundownPriQueue @ 0x1405C9434 (KeRundownPriQueue.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a1 >> 4) & 0x3F));
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
