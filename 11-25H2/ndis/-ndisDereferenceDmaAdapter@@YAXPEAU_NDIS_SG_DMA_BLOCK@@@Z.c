/*
 * XREFs of ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140016F00
 * Callers:
 *     ndisFreeSharedMemoryInternal @ 0x140016D00 (ndisFreeSharedMemoryInternal.c)
 *     NdisFreeSharedMemory @ 0x14007B4A0 (NdisFreeSharedMemory.c)
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x14009C740 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF6E0 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400E1BA0 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1400E27F0 (NdisMDeregisterScatterGatherDma.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401499E8 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140171EF0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     NdisMAllocateMapRegisters @ 0x14017B8C0 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x14017BEF0 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x14017C000 (NdisMFreeMapRegisters.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140185AE0 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ndisDereferenceDmaAdapterForMiniport @ 0x140016F30 (ndisDereferenceDmaAdapterForMiniport.c)
 *     ndisDereferenceDmaAdapterForGenericObject @ 0x14009C6F0 (ndisDereferenceDmaAdapterForGenericObject.c)
 */

void __fastcall ndisDereferenceDmaAdapter(struct _NDIS_SG_DMA_BLOCK *a1)
{
  if ( a1->Miniport )
  {
    ndisDereferenceDmaAdapterForMiniport(a1);
  }
  else if ( a1->GenericObject )
  {
    ndisDereferenceDmaAdapterForGenericObject(a1);
  }
}
