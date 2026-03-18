/*
 * XREFs of MiDestroySection @ 0x140417200
 * Callers:
 *     MiEntireSubsectionIsPurged @ 0x14023C6CC (MiEntireSubsectionIsPurged.c)
 *     MiDeleteCachedEntry @ 0x1403F836C (MiDeleteCachedEntry.c)
 *     MiCleanSection @ 0x140417040 (MiCleanSection.c)
 *     MiProcessDeleteOnClose @ 0x14067257C (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiDrainControlAreaWrites @ 0x140416FA4 (MiDrainControlAreaWrites.c)
 *     MiClearFilePointer @ 0x140417268 (MiClearFilePointer.c)
 *     MiDeleteDebuggerPatches @ 0x1404ADAF4 (MiDeleteDebuggerPatches.c)
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 */

__int64 __fastcall MiDestroySection(__int64 a1, KIRQL a2)
{
  int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8

  v2 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = v2 | 9;
  MiDrainControlAreaWrites(a1, a2);
  MiClearFilePointer(a1, v5, v6);
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), a2);
  if ( (v2 & 0x20) != 0 )
    MiDeleteDebuggerPatches(a1);
  return MiSegmentDelete(a1);
}
