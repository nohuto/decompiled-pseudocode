/*
 * XREFs of MiRetainSubsection @ 0x14046FBAC
 * Callers:
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x14046FAA0 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x1402A7470 (MiIncrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
