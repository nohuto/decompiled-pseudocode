/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x14041ECE0
 * Callers:
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     KeRundownQueueEx @ 0x14041E338 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14041EA58 (KeDeleteMutant.c)
 *     KeRundownPriQueue @ 0x1405C4E08 (KeRundownPriQueue.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a1 >> 4) & 0x3F));
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
