/*
 * XREFs of ExAllocateHeapPages @ 0x140440774
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x1403A9DD0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140440304 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x140440530 (ExGetBigPoolInfo.c)
 *     ExpInitializePoolTrackerTable @ 0x1406548C0 (ExpInitializePoolTrackerTable.c)
 * Callees:
 *     RtlpHpAllocateHeap @ 0x1402B7A40 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapBackend @ 0x1402C15F0 (RtlpHpAllocateHeapBackend.c)
 */

__int64 __fastcall ExAllocateHeapPages(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rcx

  v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v3 = *((_QWORD *)&unk_140E6BC48 + 1048 * (v2 < dword_140E6BC10 ? v2 : 0));
  if ( a2 >= *(unsigned int *)(v3 + 528) )
    return RtlpHpAllocateHeap(v3, a2, 0);
  else
    return RtlpHpAllocateHeapBackend(v3, a2, a2, 0);
}
