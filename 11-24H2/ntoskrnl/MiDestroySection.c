/*
 * XREFs of MiDestroySection @ 0x140270330
 * Callers:
 *     MiEntireSubsectionIsPurged @ 0x1402043F4 (MiEntireSubsectionIsPurged.c)
 *     MiCleanSection @ 0x140270170 (MiCleanSection.c)
 *     MiDeleteCachedEntry @ 0x1403EE484 (MiDeleteCachedEntry.c)
 *     MiProcessDeleteOnClose @ 0x14067374C (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiClearFilePointer @ 0x140270398 (MiClearFilePointer.c)
 *     MiDrainControlAreaWrites @ 0x1402704C4 (MiDrainControlAreaWrites.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiDeleteDebuggerPatches @ 0x1404A8408 (MiDeleteDebuggerPatches.c)
 *     MiSegmentDelete @ 0x140A0B944 (MiSegmentDelete.c)
 */

__int64 __fastcall MiDestroySection(__int64 a1, char a2)
{
  int v2; // ebx
  __int64 v5; // rdx

  v2 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = v2 | 9;
  MiDrainControlAreaWrites();
  MiClearFilePointer(a1);
  LOBYTE(v5) = a2;
  MiReleaseSpinLockExclusive(a1 + 72, v5);
  if ( (v2 & 0x20) != 0 )
    MiDeleteDebuggerPatches(a1);
  return MiSegmentDelete(a1);
}
