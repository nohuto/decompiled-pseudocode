/*
 * XREFs of EtwpAdjustLastBranchLookasideBuffers @ 0x140489144
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140488EF0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY EtwpAdjustLastBranchLookasideBuffers()
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
  if ( dword_140E29004 > 2 * (int)KeNumberProcessors_0 * dword_140E29000 )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
      if ( !result )
        break;
      ExFreePoolWithTag(result, 0);
      result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
    }
    while ( _InterlockedDecrement(&dword_140E29004) > 2 * (int)KeNumberProcessors_0 * dword_140E29000 );
  }
  return result;
}
