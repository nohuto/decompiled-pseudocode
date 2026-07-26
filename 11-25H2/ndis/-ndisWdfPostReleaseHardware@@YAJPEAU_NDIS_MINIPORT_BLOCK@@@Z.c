/*
 * XREFs of ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401499E8
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x14004E5A0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140016F00 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1401857E0 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWdfPostReleaseHardware(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  struct _KEVENT Event; // [rsp+20h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  a1->RemoveReadyEvent = &Event;
  ndisDereferenceMiniport(a1, 0x1Eu);
  ndisWaitForKernelObject(&Event);
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  a1->RemoveReadyEvent = 0LL;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a1->Flags & 0x40) != 0 )
  {
    MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    a1->Flags &= ~0x40u;
  }
  if ( ndisIsMiniportStarted(a1) )
  {
    ndisDeQueueMiniportOnDriver(a1, a1->DriverHandle);
    ndisDereferenceDriver(a1->DriverHandle, 0, 2u);
    if ( (a1->Flags & 0x20000) != 0 )
      ndisDereferencePackage((PVOID *)dword_140124018);
  }
  return 0LL;
}
