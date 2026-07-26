/*
 * XREFs of ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016B5D0
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140036ED0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x14005F180 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035D30 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x140048340 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140049E20 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004A050 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x140051440 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140063B10 (-ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006C8D0 (-ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007DCB0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140080F80 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x14008DB60 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140092F04 (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisMiniportRevokeOpenHandles@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A0FB4 (-ndisMiniportRevokeOpenHandles@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B5E5C (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E4F80 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140176B70 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpRemoveDevice(
        PDEVICE_OBJECT DeviceObject,
        struct _NDIS_MINIPORT_BLOCK *a2,
        PIRP Irp,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned int v9; // r14d
  unsigned int InterlockedFlags; // eax
  unsigned int v11; // ett
  NTSTATUS v12; // eax
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // ett
  NTSTATUS v16; // eax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  NDISWATCHDOG__ *m_ptr; // rcx
  struct _KEVENT *v19; // rdi
  NTSTATUS v20; // eax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rax
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF

  v9 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x23u,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceRemove);
  _m_prefetchw(&a2->InterlockedFlags);
  InterlockedFlags = a2->InterlockedFlags;
  do
  {
    v11 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a2->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v11 != InterlockedFlags );
  if ( (InterlockedFlags & 0x200) == 0 )
  {
    NdisTraceLoggingDeviceRemoved();
    ndisPowerSaveStop(a2, 2u);
    v12 = KeWaitForSingleObject(&a2->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
    if ( v12 )
      ndisBugCheckEx(0x24uLL, 1uLL, v12, 1uLL);
    if ( (a2->PnPFlags & 0x100) == 0 && a2->CurrentDevicePowerState > PowerDeviceD0 )
      v9 = ndisWakeUpDevice(a2);
    ndisReferenceMiniportNoCheck(a2, 0x1Eu);
  }
  if ( !a2->Ref.ReferenceCount )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13 = a2->PnPDeviceState == NdisPnPDeviceRemoved;
  a2->RemoveReadyEvent = &Event;
  if ( !v13 )
    ndisPnPRemoveDeviceEx(a2);
  if ( Irp )
    Irp->IoStatus.Status = v9;
  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x80u) != 0LL )
    {
      _m_prefetchw(&a2->InterlockedFlags);
      v14 = a2->InterlockedFlags;
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)&a2->InterlockedFlags, v14, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x200) != 0 )
        ndisMiniportRevokeOpenHandles(a2);
    }
  }
  ndisDereferenceMiniport(a2, 0x1Eu);
  v16 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v16 )
    ndisBugCheckEx(0x24uLL, 1uLL, v16, 1uLL);
  DriverHandle = a2->DriverHandle;
  a2->RemoveReadyEvent = 0LL;
  if ( DriverHandle->HookType == NdisMiniportHookDriverTypeWdi && !ndisBugCheckOnReenumerationTimeout )
  {
    m_ptr = a2->ReenumerateWatchdog.m_ptr;
    if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    {
      v19 = (struct _KEVENT *)WatchdogFromHandle(m_ptr);
      if ( !KeReadStateEvent(v19 + 7) && !NdisWatchdogState::CancelTimer((NdisWatchdogState *)v19) )
      {
        v20 = KeWaitForSingleObject(&v19[7], Executive, 0, 0, 0LL);
        if ( v20 )
          ndisBugCheckEx(0x24uLL, 1uLL, v20, 1uLL);
      }
    }
  }
  MiniportSGDmaBlock = a2->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock
    && MiniportSGDmaBlock->DmaAdapterRefCount == 1
    && (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x40) != 0 )
  {
    a2->MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a2->MiniportSGDmaBlock);
    _InterlockedAnd((volatile signed __int32 *)&a2->Flags, 0xFFFFFFBF);
  }
  if ( ndisIsMiniportStarted(a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, a2->DriverHandle);
    ndisDereferenceDriver(a2->DriverHandle, 0, 2u);
    if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x20000) != 0 )
      ndisDereferencePackage((PVOID *)&dword_14011A018);
  }
  ndisRemoveMiniportFromGlobalList(a2);
  if ( Irp )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v9 = IofCallDriver(a2->NextDeviceObject, Irp);
    IoDetachDevice(a2->NextDeviceObject);
    IoDeleteDevice(DeviceObject);
  }
  ndisMDeleteMiniportBlockOnRemove(a2);
  *a5 = 0;
  result = v9;
  *a4 = 0;
  return result;
}
