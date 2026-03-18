/*
 * XREFs of MiMirrorBlackPhase @ 0x140672C9C
 * Callers:
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 * Callees:
 *     MiMirrorPerformBlackWrites @ 0x140428BB0 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorReduceBlackWrites @ 0x140429260 (MiMirrorReduceBlackWrites.c)
 *     MiIterateOverPartitions @ 0x140489A44 (MiIterateOverPartitions.c)
 *     MiMirrorReduceBlackToActiveAndPrivatePages @ 0x1404A212C (MiMirrorReduceBlackToActiveAndPrivatePages.c)
 *     MiMirrorDiscardTreePageContents @ 0x1404F54BC (MiMirrorDiscardTreePageContents.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x140B63788 (MiRemoveEnclavePagesFromMirror.c)
 */

__int64 __fastcall MiMirrorBlackPhase(__int64 *a1)
{
  __int64 v3; // rdi
  int v4; // eax
  int v5; // eax

  if ( (a1[1] & 0x800) != 0 )
    return 0LL;
  v3 = *a1;
  if ( qword_140E374B8 )
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
    MiMirrorDiscardTreePageContents((_QWORD **)&qword_140E2FE38);
    MiMirrorDiscardTreePageContents((_QWORD **)&qword_140E2FE28);
    MiIterateOverPartitions((__int64)MiFailInProgressZeroing, 0LL);
  }
  return MiMirrorPerformBlackWrites(v3);
}
