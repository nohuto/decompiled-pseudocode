/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1409DE440
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x1407DB018 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x1403C9D30 (ExAllocateFromLookasideListEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

PVOID CmpAllocateKeyControlBlock()
{
  PVOID result; // rax
  PVOID v1; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  result = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside);
  v1 = result;
  if ( result )
  {
    _InterlockedIncrement64(qword_140FDA440);
    memset_0(result, 0, 0x138uLL);
    return v1;
  }
  return result;
}
