/*
 * XREFs of MiRetainSubsection @ 0x1402723E4
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x140426C40 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x1402743B0 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
    MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
}
