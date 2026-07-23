/*
 * XREFs of IoFreeAdapterChannelV3 @ 0x14038C4E0
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x14038C280 (HalpAllocateDmaResourcesInternal.c)
 *     HalFreeAdapterObject @ 0x14038C4B0 (HalFreeAdapterObject.c)
 *     HalCancelAdapterChannelDmaThin @ 0x140498110 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannel @ 0x14054C310 (HalCancelAdapterChannel.c)
 *     IoFreeAdapterChannelV3Passive @ 0x14054C6C0 (IoFreeAdapterChannelV3Passive.c)
 *     HalCancelAdapterChannelDmarThin @ 0x14054F1D0 (HalCancelAdapterChannelDmarThin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     IoFreeAdapterChannelV3Internal @ 0x14038C534 (IoFreeAdapterChannelV3Internal.c)
 *     HalpContinueProcessingWaitQueue @ 0x14038C65C (HalpContinueProcessingWaitQueue.c)
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
