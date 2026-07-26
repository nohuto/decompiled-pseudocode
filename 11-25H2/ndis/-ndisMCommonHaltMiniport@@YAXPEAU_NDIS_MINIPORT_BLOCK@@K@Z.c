/*
 * XREFs of ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140185AE0
 * Callers:
 *     ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140098510 (-ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185920 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140016A10 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140016F00 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140056200 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057240 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057AE0 (-ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSleep @ 0x140067890 (NdisMSleep.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     PktMonClientComponentUnregister @ 0x14007B260 (PktMonClientComponentUnregister.c)
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x14007ECF0 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086120 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x140087070 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x14014839C (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisNdkPcwMiniportCleanup@@YAXPEAX@Z @ 0x14014B5E4 (-ndisNdkPcwMiniportCleanup@@YAXPEAX@Z.c)
 *     ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BEBC (-ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14015EC20 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x14015F5A0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14015FB90 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x140171610 (-ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x140172320 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 *     ?ndisNDKCleanup@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140173820 (-ndisNDKCleanup@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMCommonHaltMiniport(struct _NDIS_MINIPORT_BLOCK *a1, __int16 a2)
{
  void (__fastcall *PacketIndicateHandler)(void *, _NDIS_PACKET **, unsigned int); // r14
  __int16 v3; // r15
  char v4; // r12
  KIRQL v6; // al
  enum _NDIS_HALT_ACTION v7; // edi
  struct _NDIS_NDK_BLOCK *NDKBlock; // rcx
  KIRQL v9; // bp
  KIRQL v10; // bp
  KIRQL v11; // al
  KIRQL v12; // bp
  __int64 v13; // rdx
  __int64 v14; // r8
  signed int Flags; // ecx
  unsigned int InterlockedFlags; // eax
  unsigned int v17; // ett
  struct NDISWATCHDOG__ *ArmedWatchdog; // rsi
  KIRQL v19; // al
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rdx
  unsigned __int64 *p_Lock; // rcx
  _SINGLE_LIST_ENTRY *i; // rcx
  _SINGLE_LIST_ENTRY *j; // rcx
  _SINGLE_LIST_ENTRY *k; // rcx
  _NDIS_OBJECT_HEADER *MediaSpecificAttributes; // rcx
  unsigned __int8 *AllocatedPortIndices; // rcx
  unsigned int *ndisSupportedOidList; // rcx
  unsigned __int8 *AllocatedQueueIndices; // rcx
  unsigned __int8 *AllocatedReceiveFilterIndices; // rcx
  unsigned __int8 *AllocatedVPortIndices; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterHwCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovHwCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *TopSriovCurrentCapabilities; // rcx
  _NDIS_QOS_CAPABILITIES *QosHwCapabilities; // rcx
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // rcx
  _NDIS_QOS_PARAMETERS *QosOperationalParameters; // rcx
  _NDIS_QOS_PARAMETERS *QosRemoteParameters; // rcx
  struct _NDIS_PD_BLOCK *PDBlock; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCurrentConfig; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCapabilities; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *TopHwTimestampCapabilities; // rcx
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rcx
  _NDIS_MINIPORT_STATS *BottomIfStats; // rcx
  ULONG_PTR v51; // rdx
  ULONG_PTR v52; // rdx
  ULONG_PTR v53; // rdx
  struct _NDIS_OPEN_BLOCK *v54; // rdx
  KIRQL v55; // si
  void *v56; // r8
  _NDIS_AF_LIST *CallMgrAfList; // rcx
  _NDIS_AF_LIST *NextAf; // rdi
  __int16 v59; // dx
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF

  PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  v3 = a2;
  memset(&Event, 0, sizeof(Event));
  v4 = a2 & 0x10;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      27,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->PnPFlags |= 0xA0000u;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  ndisWaitForResetCompletion(a1);
  if ( (v3 & 4) != 0 )
    IoSetDeviceInterfaceState(&a1->SymbolicLinkName, 0);
  if ( (v3 & 0x40) != 0 )
    IoSetDeviceInterfaceState(&a1->DevinterfaceNetSymbolicLinkName, 0);
  if ( (v3 & 0x100) != 0 && a1->DevinterfaceVirtSymbolicLinkName.Buffer )
  {
    IoSetDeviceInterfaceState(&a1->DevinterfaceVirtSymbolicLinkName, 0);
    RtlFreeUnicodeString(&a1->DevinterfaceVirtSymbolicLinkName);
    a1->DevinterfaceVirtSymbolicLinkName.Buffer = 0LL;
  }
  v7 = NdisHaltDevicePoweredDown;
  if ( (v3 & 2) != 0 )
    IoWMIRegistrationControl(a1->DeviceObject, 2u);
  if ( (v3 & 8) != 0 )
    ndisCancelWakeUpDpcTimer(a1);
  ndisCancelInitModeTimeoutTimer(a1, 1);
  NDKBlock = (struct _NDIS_NDK_BLOCK *)a1->NDKBlock;
  if ( NDKBlock )
    ndisNdkPcwMiniportCleanup(NDKBlock);
  v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  for ( a1->MiniportThread = KeGetCurrentThread(); a1->LockAcquired; a1->MiniportThread = KeGetCurrentThread() )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v9);
    KeStallExecutionProcessor(1u);
    v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  }
  a1->LockAcquired = 1;
  a1->LockThread = KeGetCurrentThread();
  if ( a1->OidRequestList.Flink != &a1->OidRequestList || (a1->WSyncFlags & 1) != 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    a1->LockAcquired = 0;
    a1->AllRequestsCompletedEvent = &Event;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v9);
    ndisWaitForKernelObject(&Event);
  }
  else
  {
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v9);
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  for ( a1->MiniportThread = KeGetCurrentThread(); a1->LockAcquired; a1->MiniportThread = KeGetCurrentThread() )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v10);
    KeStallExecutionProcessor(1u);
    v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  }
  a1->LockAcquired = 1;
  a1->LockThread = KeGetCurrentThread();
  if ( a1->DirectOidRequestCount )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    a1->LockAcquired = 0;
    a1->AllDirectRequestsCompletedEvent = &Event;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v10);
    ndisWaitForKernelObject(&Event);
  }
  else
  {
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v10);
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v12 = v11;
  a1->MiniportThread = KeGetCurrentThread();
  if ( a1->NsiOpenReferences )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    a1->MiniportThread = 0LL;
    a1->NsiRequestsCompletedEvent = &Event;
    KeReleaseSpinLock(&a1->Lock, v12);
    ndisWaitForKernelObject(&Event);
    a1->NsiRequestsCompletedEvent = 0LL;
  }
  else
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v11);
  }
  Flags = a1->Flags;
  if ( (Flags & 0x8000) != 0 )
  {
    PacketIndicateHandler = a1->PacketIndicateHandler;
    a1->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
    if ( a1->IndicatedPacketsCount )
    {
      do
        NdisMSleep(0x3E8u);
      while ( a1->IndicatedPacketsCount );
      Flags = a1->Flags;
    }
  }
  if ( v4 )
  {
    if ( Flags >= 0 )
    {
      if ( (a1->PnPFlags & 0x100) != 0 )
      {
        v7 = NdisHaltDeviceFailed;
      }
      else if ( (Flags & 0x8000) != 0 && a1->PnPDeviceState == NdisPnPDeviceStopped )
      {
        v7 = NdisHaltDeviceInstanceDeInitialized;
      }
      else
      {
        _m_prefetchw(&a1->InterlockedFlags);
        InterlockedFlags = a1->InterlockedFlags;
        do
        {
          v17 = InterlockedFlags;
          InterlockedFlags = _InterlockedCompareExchange(
                               (volatile signed __int32 *)&a1->InterlockedFlags,
                               InterlockedFlags,
                               InterlockedFlags);
        }
        while ( v17 != InterlockedFlags );
        if ( (InterlockedFlags & 0x200) != 0 )
        {
          v7 = NdisHaltDeviceSurpriseRemoved;
        }
        else
        {
          v7 = NdisHaltDeviceDisabled;
          if ( a1->PnPDeviceState == NdisPnPDeviceStopped )
            v7 = NdisHaltDeviceStopped;
        }
      }
    }
  }
  else
  {
    v7 = NdisHaltDeviceInitializationFailed;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      v14,
      0x1Cu,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      v7,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  if ( a1->MajorNdisVersion < 6u )
  {
    ((void (__fastcall *)(void *))a1->DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx)(a1->MiniportAdapterContext);
  }
  else if ( (a1->Flags & 0x100) == 0 )
  {
    ArmedWatchdog = ndisAllocateArmedWatchdog(
                      a1,
                      0x22u,
                      a1->DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx,
                      ndisWatchdogPnPTimeout,
                      0LL);
    ndisMInvokeHalt(a1, v7);
    if ( ArmedWatchdog != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(ArmedWatchdog);
  }
  a1->State = NdisMiniportHalted;
  ndisLogMiniportEvent(a1, NdisMEvent_MiniportHalted);
  if ( (a1->Flags & 0x8000) != 0 )
    a1->PacketIndicateHandler = PacketIndicateHandler;
  a1->PnPFlags &= ~0x80000u;
  ndisCancelMediaDisconnectTimer(a1);
  if ( (a1->PnPFlags & 0x4000) == 0 )
  {
    if ( (a1->Flags & 0x40) != 0 )
      ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v19 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
    p_Lock = &a1->Lock;
    if ( MiniportSGDmaBlock )
    {
      MiniportSGDmaBlock->DmaResourcesReleasedEvent = &Event;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v19);
      ndisWaitForKernelObject(&Event, 30000LL);
    }
    else
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v19);
    }
    a1->Flags &= ~0x40u;
  }
  if ( a1->GeneralAttributes )
    a1->GeneralAttributes = 0LL;
  for ( i = a1->PatternList.Next; i; i = a1->PatternList.Next )
  {
    a1->PatternList = (_SINGLE_LIST_ENTRY)i->Next;
    ExFreePoolWithTag(i, 0);
  }
  for ( j = a1->WOLPatternList.Next; j; j = a1->WOLPatternList.Next )
  {
    a1->WOLPatternList = (_SINGLE_LIST_ENTRY)j->Next;
    ExFreePoolWithTag(j, 0);
  }
  for ( k = a1->PMProtocolOffloadList.Next; k; k = a1->PMProtocolOffloadList.Next )
  {
    a1->PMProtocolOffloadList = (_SINGLE_LIST_ENTRY)k->Next;
    ExFreePoolWithTag(k, 0);
  }
  MediaSpecificAttributes = a1->MediaSpecificAttributes;
  if ( MediaSpecificAttributes )
  {
    ExFreePoolWithTag(MediaSpecificAttributes, 0);
    a1->MediaSpecificAttributes = 0LL;
  }
  AllocatedPortIndices = a1->AllocatedPortIndices;
  if ( AllocatedPortIndices )
  {
    ExFreePoolWithTag(AllocatedPortIndices, 0);
    a1->AllocatedPortIndices = 0LL;
    a1->AllocatedPortIndicesLength = 0;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    ndisSupportedOidList = a1->ndisSupportedOidList;
    if ( ndisSupportedOidList )
    {
      ExFreePoolWithTag(ndisSupportedOidList, 0);
      a1->ndisSupportedOidList = 0LL;
      a1->ndisSupportedOidListLength = 0;
    }
  }
  AllocatedQueueIndices = a1->AllocatedQueueIndices;
  if ( AllocatedQueueIndices )
  {
    ExFreePoolWithTag(AllocatedQueueIndices, 0);
    a1->AllocatedQueueIndices = 0LL;
    a1->AllocatedQueueIndicesLength = 0;
  }
  AllocatedReceiveFilterIndices = a1->AllocatedReceiveFilterIndices;
  if ( AllocatedReceiveFilterIndices )
  {
    ExFreePoolWithTag(AllocatedReceiveFilterIndices, 0);
    a1->AllocatedReceiveFilterIndices = 0LL;
    a1->AllocatedReceiveFilterIndicesLength = 0;
  }
  AllocatedVPortIndices = a1->AllocatedVPortIndices;
  if ( AllocatedVPortIndices )
  {
    ExFreePoolWithTag(AllocatedVPortIndices, 0);
    a1->AllocatedVPortIndices = 0LL;
    a1->AllocatedVPortIndicesLength = 0;
  }
  ReceiveFilterHwCapabilities = a1->ReceiveFilterHwCapabilities;
  if ( ReceiveFilterHwCapabilities )
  {
    ExFreePoolWithTag(ReceiveFilterHwCapabilities, 0);
    a1->ReceiveFilterHwCapabilities = 0LL;
  }
  ReceiveFilterCurrentCapabilities = a1->ReceiveFilterCurrentCapabilities;
  if ( ReceiveFilterCurrentCapabilities )
  {
    ExFreePoolWithTag(ReceiveFilterCurrentCapabilities, 0);
    a1->ReceiveFilterCurrentCapabilities = 0LL;
  }
  TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
  if ( TopReceiveFilterCurrentCapabilities )
  {
    ExFreePoolWithTag(TopReceiveFilterCurrentCapabilities, 0);
    a1->TopReceiveFilterCurrentCapabilities = 0LL;
  }
  NicSwitchHwCapabilities = a1->NicSwitchHwCapabilities;
  if ( NicSwitchHwCapabilities )
  {
    ExFreePoolWithTag(NicSwitchHwCapabilities, 0);
    a1->NicSwitchHwCapabilities = 0LL;
  }
  NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
  if ( NicSwitchCurrentCapabilities )
  {
    ExFreePoolWithTag(NicSwitchCurrentCapabilities, 0);
    a1->NicSwitchCurrentCapabilities = 0LL;
  }
  TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
  if ( TopNicSwitchCurrentCapabilities )
  {
    ExFreePoolWithTag(TopNicSwitchCurrentCapabilities, 0);
    a1->TopNicSwitchCurrentCapabilities = 0LL;
  }
  SriovHwCapabilities = a1->SriovHwCapabilities;
  if ( SriovHwCapabilities )
  {
    ExFreePoolWithTag(SriovHwCapabilities, 0);
    a1->SriovHwCapabilities = 0LL;
  }
  SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
  if ( SriovCurrentCapabilities )
  {
    ExFreePoolWithTag(SriovCurrentCapabilities, 0);
    a1->SriovCurrentCapabilities = 0LL;
  }
  TopSriovCurrentCapabilities = a1->TopSriovCurrentCapabilities;
  if ( TopSriovCurrentCapabilities )
  {
    ExFreePoolWithTag(TopSriovCurrentCapabilities, 0);
    a1->TopSriovCurrentCapabilities = 0LL;
  }
  QosHwCapabilities = a1->QosHwCapabilities;
  if ( QosHwCapabilities )
  {
    ExFreePoolWithTag(QosHwCapabilities, 0);
    a1->QosHwCapabilities = 0LL;
  }
  QosCurrentCapabilities = a1->QosCurrentCapabilities;
  if ( QosCurrentCapabilities )
  {
    ExFreePoolWithTag(QosCurrentCapabilities, 0);
    a1->QosCurrentCapabilities = 0LL;
  }
  QosOperationalParameters = a1->QosOperationalParameters;
  if ( QosOperationalParameters )
  {
    ExFreePoolWithTag(QosOperationalParameters, 0);
    a1->QosOperationalParameters = 0LL;
    a1->QosOperationalParametersBufferSize = 0;
  }
  QosRemoteParameters = a1->QosRemoteParameters;
  if ( QosRemoteParameters )
  {
    ExFreePoolWithTag(QosRemoteParameters, 0);
    a1->QosRemoteParameters = 0LL;
    a1->QosRemoteParametersBufferSize = 0;
  }
  if ( a1->NDKBlock )
  {
    ndisNDKCleanup(a1);
    a1->NDKBlock = 0LL;
  }
  PDBlock = a1->PDBlock;
  if ( PDBlock )
    ndisPDCleanupPDBlock(PDBlock);
  HwTimestampCurrentConfig = a1->HwTimestampCurrentConfig;
  if ( HwTimestampCurrentConfig )
  {
    ExFreePoolWithTag(HwTimestampCurrentConfig, 0);
    a1->HwTimestampCurrentConfig = 0LL;
  }
  HwTimestampCapabilities = a1->HwTimestampCapabilities;
  if ( HwTimestampCapabilities )
  {
    ExFreePoolWithTag(HwTimestampCapabilities, 0);
    a1->HwTimestampCapabilities = 0LL;
  }
  TopTimestampConfig = a1->TopTimestampConfig;
  if ( TopTimestampConfig )
  {
    ExFreePoolWithTag(TopTimestampConfig, 0);
    a1->TopTimestampConfig = 0LL;
  }
  TopHwTimestampCapabilities = a1->TopHwTimestampCapabilities;
  if ( TopHwTimestampCapabilities )
  {
    ExFreePoolWithTag(TopHwTimestampCapabilities, 0);
    a1->TopHwTimestampCapabilities = 0LL;
  }
  PhysicalPerformanceCounters = a1->PhysicalPerformanceCounters;
  if ( PhysicalPerformanceCounters )
  {
    ExFreePoolWithTag(PhysicalPerformanceCounters, 0);
    a1->PhysicalPerformanceCounters = 0LL;
  }
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendFree(a1);
  PktMonClientComponentUnregister((__int64 *)&a1->PktMonComp);
  if ( a1 == ndisMiniportTrackAlloc )
    ndisMiniportTrackAlloc = 0LL;
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
    memset(BottomIfStats, 0, 112LL * ndisMaxNumberOfProcessors);
  if ( a1->TimerQueue )
    goto LABEL_157;
  if ( a1->Interrupt )
    goto LABEL_135;
  if ( a1->InterruptEx )
  {
LABEL_157:
    if ( a1->Interrupt )
    {
LABEL_135:
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Halting without deregistering interrupt");
      v51 = 8LL;
      if ( !v4 )
        v51 = 13LL;
      KeBugCheckEx(0x7Cu, v51, (ULONG_PTR)a1, (ULONG_PTR)a1->Interrupt, 0LL);
    }
    if ( a1->InterruptEx )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Halting without deregistering interrupt");
      v52 = 8LL;
      if ( !v4 )
        v52 = 13LL;
      KeBugCheckEx(0x7Cu, v52, (ULONG_PTR)a1, (ULONG_PTR)a1->InterruptEx, 0LL);
    }
    if ( (a1->Flags & 0x80u) == 0 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Halting without deregistering timer");
      v53 = 9LL;
      if ( !v4 )
        v53 = 14LL;
      KeBugCheckEx(0x7Cu, v53, (ULONG_PTR)a1, (ULONG_PTR)a1->TimerQueue, 0LL);
    }
  }
  v55 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  for ( a1->MiniportThread = KeGetCurrentThread(); a1->LockAcquired; a1->MiniportThread = KeGetCurrentThread() )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v55);
    KeStallExecutionProcessor(1u);
    v55 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  }
  a1->LockAcquired = 1;
  a1->LockThread = KeGetCurrentThread();
  ndisMAbortPackets(a1, v54, v56);
  ndisMDeQueueWorkItem(a1, NdisWorkItemRequest, 0LL, 0LL);
  ndisMAbortRequests(a1);
  if ( (v3 & 0x20) != 0 )
  {
    CallMgrAfList = a1->CallMgrAfList;
    a1->CallMgrAfList = 0LL;
    if ( CallMgrAfList )
    {
      do
      {
        NextAf = CallMgrAfList->NextAf;
        ExFreePoolWithTag(CallMgrAfList, 0);
        CallMgrAfList = NextAf;
      }
      while ( NextAf );
    }
  }
  a1->LockAcquired = 0;
  a1->LockThread = 0LL;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v55);
  if ( (a1->Flags & 0x80u) == 0 )
    a1->MiniportAdapterContext = 0LL;
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v59) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v59,
      1,
      29,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)a1);
  }
}
