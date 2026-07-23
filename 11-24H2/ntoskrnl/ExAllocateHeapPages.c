/*
 * XREFs of ExAllocateHeapPages @ 0x1403E9344
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x1403E8ED4 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1403E9100 (ExGetBigPoolInfo.c)
 *     ExpInitializePoolTrackerTable @ 0x140652FC0 (ExpInitializePoolTrackerTable.c)
 * Callees:
 *     RtlpHpAllocateHeapBackend @ 0x14035DC90 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 */

__int64 __fastcall ExAllocateHeapPages(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rcx

  v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v3 = *((_QWORD *)&unk_140E6BE48 + 1048 * (v2 < dword_140E6BE10 ? v2 : 0));
  if ( a2 >= *(unsigned int *)(v3 + 528) )
    return RtlpHpAllocateHeap(v3, a2, 0LL);
  else
    return RtlpHpAllocateHeapBackend(v3, a2, a2, 0);
}
