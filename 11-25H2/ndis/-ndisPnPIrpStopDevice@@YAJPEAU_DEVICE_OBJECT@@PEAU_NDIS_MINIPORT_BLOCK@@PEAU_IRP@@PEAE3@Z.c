/*
 * XREFs of ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF6E0
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x14004E5A0 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140057300 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140016F00 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848A0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1400993C0 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009CB30 (-ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1401857E0 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpStopDevice(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x2Au,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  NdisTraceLoggingDeviceRemoved();
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceStop);
  ndisPowerSaveStop(a2, 5u);
  a2->PnPFlags &= ~0x10000u;
  a2->PnPDeviceState = NdisPnPDeviceStopped;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  a2->PnPDeviceState = NdisPnPDeviceStopped;
  a2->RemoveReadyEvent = &Event;
  ndisReferenceMiniport(a2, 0x1Cu);
  a2->PnPFlags |= 0x10u;
  ndisPnPStopDevice(a2);
  if ( a2->RemoveReadyEvent )
  {
    ndisDereferenceMiniport(a2, 0x1Cu);
    ndisWaitForKernelObject(&Event);
    a2->RemoveReadyEvent = 0LL;
  }
  MiniportSGDmaBlock = a2->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a2->Flags & 0x40) != 0 )
  {
    MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a2->MiniportSGDmaBlock);
    a2->Flags &= ~0x40u;
  }
  if ( ndisIsMiniportStarted(a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, a2->DriverHandle);
    ndisDereferenceDriver(a2->DriverHandle, 0, 2u);
    if ( (a2->Flags & 0x20000) != 0 )
      ndisDereferencePackage((PVOID *)dword_140124018);
  }
  if ( a3 )
    a3->IoStatus.Status = 0;
  *a5 = 1;
  return 0LL;
}
