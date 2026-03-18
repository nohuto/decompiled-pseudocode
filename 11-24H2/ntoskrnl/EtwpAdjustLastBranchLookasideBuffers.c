/*
 * XREFs of EtwpAdjustLastBranchLookasideBuffers @ 0x14048ED14
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14048EAC0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY EtwpAdjustLastBranchLookasideBuffers()
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
  if ( dword_140E28EC4 > 2 * (int)KeNumberProcessors_0 * dword_140E28EC0 )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
      if ( !result )
        break;
      ExFreePoolWithTag(result, 0);
      result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
    }
    while ( _InterlockedDecrement(&dword_140E28EC4) > 2 * (int)KeNumberProcessors_0 * dword_140E28EC0 );
  }
  return result;
}
