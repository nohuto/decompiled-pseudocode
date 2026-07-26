/*
 * XREFs of ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14006E4B0
 * Callers:
 *     NdisNblTrackerRegisterComponent @ 0x14006E120 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14006E230 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x14006E460 (-ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1400CBB88 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ndisAllocateFreeSlot @ 0x14006E570 (ndisAllocateFreeSlot.c)
 *     ndisAllocateFreeSlotFromDescriptor @ 0x14007AD00 (ndisAllocateFreeSlotFromDescriptor.c)
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1400CBA04 (ndisAllocatePerProcessorPageDescriptor.c)
 */

struct PNDIS_PER_PROCESSOR_SLOT__ *__fastcall ndisAllocatePerProcessorSlot(unsigned int a1)
{
  KIRQL v2; // si
  __int64 FreeSlot; // rdi
  __int64 PerProcessorPageDescriptor; // rax
  __int64 v6; // r8
  _LIST_ENTRY *v7; // r9
  _LIST_ENTRY *Flink; // rax

  if ( (a1 & 0xFE000000) == 0xFE000000 )
    return 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  FreeSlot = ndisAllocateFreeSlot(a1);
  if ( !FreeSlot )
  {
    PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
    if ( PerProcessorPageDescriptor )
    {
      FreeSlot = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, a1, v6, PerProcessorPageDescriptor);
      Flink = ndisPerProcessorDescriptorList.Flink;
      if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      v7->Flink = ndisPerProcessorDescriptorList.Flink;
      v7->Blink = &ndisPerProcessorDescriptorList;
      Flink->Blink = v7;
      ndisPerProcessorDescriptorList.Flink = v7;
    }
  }
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v2);
  return (struct PNDIS_PER_PROCESSOR_SLOT__ *)FreeSlot;
}
