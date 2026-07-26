/*
 * XREFs of ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013EB08
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x14005F180 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035D30 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140049E20 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140176B70 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWdfPostReleaseHardware(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rax
  struct _KEVENT Event; // [rsp+20h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  a1->RemoveReadyEvent = &Event;
  ndisDereferenceMiniport(a1, 0x1Eu);
  ndisWaitForKernelObject(&Event);
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  a1->RemoveReadyEvent = 0LL;
  if ( MiniportSGDmaBlock
    && MiniportSGDmaBlock->DmaAdapterRefCount == 1
    && (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x40) != 0 )
  {
    a1->MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFBF);
  }
  if ( ndisIsMiniportStarted(a1) )
  {
    ndisDeQueueMiniportOnDriver(a1, a1->DriverHandle);
    ndisDereferenceDriver(a1->DriverHandle, 0, 2u);
    if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x20000) != 0 )
      ndisDereferencePackage((PVOID *)&dword_14011A018);
  }
  return 0LL;
}
