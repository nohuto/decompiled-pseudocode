/*
 * XREFs of MiDestroySection @ 0x140419264
 * Callers:
 *     MiEntireSubsectionIsPurged @ 0x14033FC28 (MiEntireSubsectionIsPurged.c)
 *     MiCleanSection @ 0x1404190A4 (MiCleanSection.c)
 *     MiDeleteCachedEntry @ 0x140459A0C (MiDeleteCachedEntry.c)
 *     MiProcessDeleteOnClose @ 0x140666ACC (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDrainControlAreaWrites @ 0x140419008 (MiDrainControlAreaWrites.c)
 *     MiClearFilePointer @ 0x140419C34 (MiClearFilePointer.c)
 *     MiDeleteDebuggerPatches @ 0x1404AC24C (MiDeleteDebuggerPatches.c)
 *     MiSegmentDelete @ 0x140A095FC (MiSegmentDelete.c)
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
