/*
 * XREFs of EtwpAdjustStackLookasideBuffers @ 0x140488FA4
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140488EF0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     KeFreeCalloutStack @ 0x140A7D8D0 (KeFreeCalloutStack.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY EtwpAdjustStackLookasideBuffers()
{
  PSLIST_ENTRY result; // rax
  void *v1; // rbx

  result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
  if ( dword_140E28FD4 > 2 * (int)KeNumberProcessors_0 * dword_140E28FD0 )
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
    while ( _InterlockedDecrement(&dword_140E28FD4) > 2 * (int)KeNumberProcessors_0 * dword_140E28FD0 );
  }
  return result;
}
