/*
 * XREFs of MiRetainSubsection @ 0x14036F5D4
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x14036F4C8 (MiFaultGetFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1402624F0 (MiIncrementSubsectionViewCount.c)
 */

void __fastcall MiRetainSubsection(__int64 *BugCheckParameter2)
{
  __int64 v1; // rbx
  int v3; // eax

  v1 = *BugCheckParameter2;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  ++*(_QWORD *)(v1 + 40);
  v3 = *(_DWORD *)(v1 + 56);
  if ( (v3 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v3 & 0x400) == 0 )
    MiIncrementSubsectionViewCount(BugCheckParameter2, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
}
