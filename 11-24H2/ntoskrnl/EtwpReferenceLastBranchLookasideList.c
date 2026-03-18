/*
 * XREFs of EtwpReferenceLastBranchLookasideList @ 0x1407B196C
 * Callers:
 *     EtwpUpdateLastBranchTracingHalState @ 0x140651824 (EtwpUpdateLastBranchTracingHalState.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

struct _SLIST_ENTRY *EtwpReferenceLastBranchLookasideList()
{
  int v0; // ebx
  struct _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140E28EC0);
  do
  {
    result = (struct _SLIST_ENTRY *)ExAllocatePool2(0x40uLL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, result);
    result = (struct _SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140E28EC4);
  }
  while ( (int)result < v0 );
  return result;
}
