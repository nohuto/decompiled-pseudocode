/*
 * XREFs of IoFreeAdapterChannelV3 @ 0x140331E60
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140331C00 (HalpAllocateDmaResourcesInternal.c)
 *     HalFreeAdapterObject @ 0x140331E30 (HalFreeAdapterObject.c)
 *     HalCancelAdapterChannelDmaThin @ 0x14049E1F0 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannel @ 0x14054C0C0 (HalCancelAdapterChannel.c)
 *     IoFreeAdapterChannelV3Passive @ 0x14054C470 (IoFreeAdapterChannelV3Passive.c)
 *     HalCancelAdapterChannelDmarThin @ 0x14054EF90 (HalCancelAdapterChannelDmarThin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     IoFreeAdapterChannelV3Internal @ 0x140331EB4 (IoFreeAdapterChannelV3Internal.c)
 *     HalpContinueProcessingWaitQueue @ 0x140331FDC (HalpContinueProcessingWaitQueue.c)
 */

void __fastcall IoFreeAdapterChannelV3(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 520);
  if ( KeGetCurrentIrql() == 2 && v2 )
  {
    if ( *(_BYTE *)(a1 + 224) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 480), CriticalWorkQueue);
  }
  else
  {
    IoFreeAdapterChannelV3Internal(a1);
    HalpContinueProcessingWaitQueue(a1);
  }
}
