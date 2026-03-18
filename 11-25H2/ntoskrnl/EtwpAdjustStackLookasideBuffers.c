/*
 * XREFs of EtwpAdjustStackLookasideBuffers @ 0x14048F044
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14048EF90 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     KeFreeCalloutStack @ 0x140A7F1E0 (KeFreeCalloutStack.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY EtwpAdjustStackLookasideBuffers()
{
  PSLIST_ENTRY result; // rax
  void *v1; // rbx

  result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
  if ( dword_140E28C54 > 2 * (int)KeNumberProcessors_0 * dword_140E28C50 )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
      v1 = result;
      if ( !result )
        break;
      KeFreeCalloutStack(*((PVOID *)&result[1].Next + 1));
      ExFreePoolWithTag(v1, 0);
      result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
    }
    while ( _InterlockedDecrement(&dword_140E28C54) > 2 * (int)KeNumberProcessors_0 * dword_140E28C50 );
  }
  return result;
}
