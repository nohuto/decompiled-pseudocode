/*
 * XREFs of EtwpAdjustStackLookasideBuffers @ 0x14048EB74
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14048EAC0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     KeFreeCalloutStack @ 0x140A82DB0 (KeFreeCalloutStack.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY EtwpAdjustStackLookasideBuffers()
{
  PSLIST_ENTRY result; // rax
  void *v1; // rbx

  result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
  if ( dword_140E28E94 > 2 * (int)KeNumberProcessors_0 * dword_140E28E90 )
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
    while ( _InterlockedDecrement(&dword_140E28E94) > 2 * (int)KeNumberProcessors_0 * dword_140E28E90 );
  }
  return result;
}
