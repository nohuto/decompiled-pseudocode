/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1409E39E0
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x1407DAAC8 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x1403E16C0 (ExAllocateFromLookasideListEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

PVOID CmpAllocateKeyControlBlock()
{
  PVOID result; // rax
  PVOID v1; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  result = ExAllocateFromLookasideListEx(&CmpKcbLookaside);
  v1 = result;
  if ( result )
  {
    _InterlockedIncrement64(qword_140FD9430);
    memset_0(result, 0, 0x138uLL);
    return v1;
  }
  return result;
}
