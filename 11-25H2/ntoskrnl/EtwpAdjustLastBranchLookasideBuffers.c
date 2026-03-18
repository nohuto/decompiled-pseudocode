/*
 * XREFs of EtwpAdjustLastBranchLookasideBuffers @ 0x14048F1E4
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14048EF90 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY EtwpAdjustLastBranchLookasideBuffers()
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
  if ( dword_140E28C84 > 2 * (int)KeNumberProcessors_0 * dword_140E28C80 )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
      if ( !result )
        break;
      ExFreePoolWithTag(result, 0);
      result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
    }
    while ( _InterlockedDecrement(&dword_140E28C84) > 2 * (int)KeNumberProcessors_0 * dword_140E28C80 );
  }
  return result;
}
