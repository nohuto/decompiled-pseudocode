/*
 * XREFs of EtwpReferenceLastBranchLookasideList @ 0x1407A259C
 * Callers:
 *     EtwpUpdateLastBranchTracingHalState @ 0x140645824 (EtwpUpdateLastBranchTracingHalState.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

_SLIST_ENTRY *EtwpReferenceLastBranchLookasideList()
{
  int v0; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140E28C80);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePool2(0x40uLL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140E28C84);
  }
  while ( (int)result < v0 );
  return result;
}
