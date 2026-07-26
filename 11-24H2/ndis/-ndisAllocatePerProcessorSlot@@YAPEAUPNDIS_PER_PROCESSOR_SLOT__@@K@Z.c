/*
 * XREFs of ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14004E910
 * Callers:
 *     NdisNblTrackerRegisterComponent @ 0x14004E700 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x14004E8C0 (-ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14007BBB0 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1400C4A60 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ndisAllocateFreeSlot @ 0x14004E9D0 (ndisAllocateFreeSlot.c)
 *     ndisAllocateFreeSlotFromDescriptor @ 0x14005EAF0 (ndisAllocateFreeSlotFromDescriptor.c)
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1400C48DC (ndisAllocatePerProcessorPageDescriptor.c)
 */

struct PNDIS_PER_PROCESSOR_SLOT__ *__fastcall ndisAllocatePerProcessorSlot(unsigned int a1)
{
  KIRQL v2; // si
  __int64 FreeSlot; // rdi
  __int64 PerProcessorPageDescriptor; // rax
  __int64 v6; // r8
  _QWORD *v7; // r9
  _QWORD *v8; // rax

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
      v8 = ndisPerProcessorDescriptorList;
      if ( *((void ***)ndisPerProcessorDescriptorList + 1) != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      *v7 = ndisPerProcessorDescriptorList;
      v7[1] = &ndisPerProcessorDescriptorList;
      v8[1] = v7;
      ndisPerProcessorDescriptorList = v7;
    }
  }
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v2);
  return (struct PNDIS_PER_PROCESSOR_SLOT__ *)FreeSlot;
}
