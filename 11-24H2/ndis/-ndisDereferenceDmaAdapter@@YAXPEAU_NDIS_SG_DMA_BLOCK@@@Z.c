/*
 * XREFs of ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140049E20
 * Callers:
 *     NdisFreeSharedMemory @ 0x140049470 (NdisFreeSharedMemory.c)
 *     ndisFreeSharedMemoryInternal @ 0x140049C20 (ndisFreeSharedMemoryInternal.c)
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x140092560 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A7530 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400DA9BC (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1400DB5E0 (NdisMDeregisterScatterGatherDma.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013EB08 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016B5D0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     NdisMAllocateMapRegisters @ 0x1401708C0 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x140170F00 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x140171010 (NdisMFreeMapRegisters.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017AC30 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceDmaAdapterForMiniport @ 0x140049E50 (ndisDereferenceDmaAdapterForMiniport.c)
 *     ndisDereferenceDmaAdapterForGenericObject @ 0x140092510 (ndisDereferenceDmaAdapterForGenericObject.c)
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
