/*
 * XREFs of MiMirrorBlackPhase @ 0x1406671EC
 * Callers:
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 * Callees:
 *     MiMirrorPerformBlackWrites @ 0x14042FA90 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorReduceBlackWrites @ 0x14042FEE0 (MiMirrorReduceBlackWrites.c)
 *     MiIterateOverPartitions @ 0x140474618 (MiIterateOverPartitions.c)
 *     MiMirrorReduceBlackToActiveAndPrivatePages @ 0x1404A272C (MiMirrorReduceBlackToActiveAndPrivatePages.c)
 *     MiMirrorDiscardTreePageContents @ 0x1404F2BB8 (MiMirrorDiscardTreePageContents.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x140B53638 (MiRemoveEnclavePagesFromMirror.c)
 */

__int64 __fastcall MiMirrorBlackPhase(__int64 *a1)
{
  __int64 v3; // rdi
  int v4; // eax
  int v5; // eax

  if ( (a1[1] & 0x800) != 0 )
    return 0LL;
  v3 = *a1;
  if ( qword_140E37278 )
    MiRemoveEnclavePagesFromMirror(*a1);
  v4 = *((_DWORD *)a1 + 2);
  if ( (v4 & 0x40D) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
      MiIterateOverPartitions((__int64)MiMirrorRemoveBlackChildPartitionPages, (__int64)a1);
    v5 = *((_DWORD *)a1 + 2);
    if ( (v5 & 0xC0) != 0 )
    {
      MiMirrorReduceBlackToActiveAndPrivatePages((__int64)a1);
    }
    else if ( (v5 & 0x100) != 0 )
    {
      MiMirrorReduceBlackWrites((__int64)&MiSystemPartition, a1);
    }
    else
    {
      MiIterateOverPartitions((__int64)MiMirrorReduceBlackWrites, (__int64)a1);
    }
    MiMirrorDiscardTreePageContents((_QWORD **)&qword_140E2FBF8);
    MiMirrorDiscardTreePageContents((_QWORD **)&qword_140E2FBE8);
    MiIterateOverPartitions((__int64)MiFailInProgressZeroing, 0LL);
  }
  return MiMirrorPerformBlackWrites(v3);
}
