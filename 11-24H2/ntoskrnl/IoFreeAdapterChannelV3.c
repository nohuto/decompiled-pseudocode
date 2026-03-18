/*
 * XREFs of IoFreeAdapterChannelV3 @ 0x140392BB0
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140392950 (HalpAllocateDmaResourcesInternal.c)
 *     HalFreeAdapterObject @ 0x140392B80 (HalFreeAdapterObject.c)
 *     HalCancelAdapterChannelDmaThin @ 0x14049D310 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannel @ 0x14054E9D0 (HalCancelAdapterChannel.c)
 *     IoFreeAdapterChannelV3Passive @ 0x14054ED80 (IoFreeAdapterChannelV3Passive.c)
 *     HalCancelAdapterChannelDmarThin @ 0x140551890 (HalCancelAdapterChannelDmarThin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     IoFreeAdapterChannelV3Internal @ 0x140392C04 (IoFreeAdapterChannelV3Internal.c)
 *     HalpContinueProcessingWaitQueue @ 0x140392D2C (HalpContinueProcessingWaitQueue.c)
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
