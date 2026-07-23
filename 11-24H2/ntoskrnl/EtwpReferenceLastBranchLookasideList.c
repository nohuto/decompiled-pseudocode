/*
 * XREFs of EtwpReferenceLastBranchLookasideList @ 0x1407B1DBC
 * Callers:
 *     EtwpUpdateLastBranchTracingHalState @ 0x14064FF24 (EtwpUpdateLastBranchTracingHalState.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_SLIST_ENTRY *EtwpReferenceLastBranchLookasideList()
{
  ULONG_PTR v0; // rdi
  int v1; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = (unsigned int)(24 * EtwpLastBranchStackSize + 16);
  v1 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140E29000);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePool2(0x40uLL, v0, 0x78777445u);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140E29004);
  }
  while ( (int)result < v1 );
  return result;
}
