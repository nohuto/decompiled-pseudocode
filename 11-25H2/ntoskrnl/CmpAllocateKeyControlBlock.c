/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1409EAEF0
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x1407CB304 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x1403DCD60 (ExAllocateFromLookasideListEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
    _InterlockedIncrement64(qword_140FD9460);
    memset_0(result, 0, 0x138uLL);
    return v1;
  }
  return result;
}
