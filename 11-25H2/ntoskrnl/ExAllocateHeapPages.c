/*
 * XREFs of ExAllocateHeapPages @ 0x1402F7304
 * Callers:
 *     ExpResizeBigPageTable @ 0x1402F6DE0 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1402F70C0 (ExGetBigPoolInfo.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1402FE0E0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpInitializePoolTrackerTable @ 0x1406489C0 (ExpInitializePoolTrackerTable.c)
 * Callees:
 *     RtlpHpAllocateHeapBackend @ 0x1402F89B0 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpAllocateHeap @ 0x1403C93A0 (RtlpHpAllocateHeap.c)
 */

__int64 __fastcall ExAllocateHeapPages(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rcx

  v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v3 = *((_QWORD *)&unk_140E6B988 + 1048 * (v2 < dword_140E6B950 ? v2 : 0));
  if ( a2 >= *(unsigned int *)(v3 + 528) )
    return RtlpHpAllocateHeap(v3, a2, 0LL);
  else
    return RtlpHpAllocateHeapBackend(v3, a2, a2, 0LL);
}
