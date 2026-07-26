/*
 * XREFs of ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14007E540
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x140006E40 (NdisAllocateRefCount.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140092F04 (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1401532C0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140153320 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x140160920 (--0BindState@Ndis@@QEAA@XZ.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x140166FD0 (--0KPushLock@@QEAA@XZ.c)
 *     ??0BindEngine@Ndis@@QEAA@XZ @ 0x140168300 (--0BindEngine@Ndis@@QEAA@XZ.c)
 *     ?ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14017E1A0 (-ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

void __fastcall ndisMInitializeMiniportBlock(struct _NDIS_M_DRIVER_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2, int a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *value; // rcx
  struct NDISWATCHDOG__ *Watchdog; // rax
  NDISWATCHDOG__ *m_ptr; // rcx
  NDISWATCHDOG__ *v10; // rbx
  struct NDISWATCHDOG__ *v11; // rax
  NDISWATCHDOG__ *v12; // rcx
  NDISWATCHDOG__ *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  memset(a2, 0, a3);
  a2->ExportName.__ptr_.__value_ = 0LL;
  a2->FilterClass.__ptr_.__value_ = 0LL;
  a2->SurpriseRemovalWorkItem.Irp = 0LL;
  *(_QWORD *)&a2->Bindings.Protocols.m_bufferSize = 0LL;
  a2->Bindings.Protocols._p = 0LL;
  *(_QWORD *)&a2->Bindings.Filters.m_bufferSize = 0LL;
  a2->Bindings.Filters._p = 0LL;
  Ndis::BindState::BindState(&a2->Bindings.Miniport);
  a2->Bindings.ChangeEpoch = 0;
  Ndis::BindEngine::BindEngine(&a2->BindEngine);
  a2->MiniportOwner.m_owner = MiniportNotOwned;
  KPushLock::KPushLock(&a2->MiniportOwner.m_lock);
  KeInitializeEvent(&a2->MiniportOwner.m_isUnowned.m_event, NotificationEvent, 0);
  KeSetEvent(&a2->MiniportOwner.m_isUnowned.m_event, 0, 0);
  a2->PoFxDStateReportingEnabled = 0;
  *(_WORD *)&a2->InterfaceUpdateInProgress = 0;
  a2->MtuUpdateQueued = 0;
  a2->PendingMtuSize = 0;
  a2->DevicePowerOnWorkItem.Irp = 0LL;
  a2->DevicePowerDownWorkItem.Irp = 0LL;
  a2->PendingOidWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  a2->HookedOidWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  a2->ReenumerateWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  a2->PollModeConfigKnobsNamespace.m_driverObject = 0LL;
  *(_OWORD *)&a2->PollModeConfigKnobsNamespace.m_id.NamespaceType = 0LL;
  *(_DWORD *)&a2->PollModeConfigKnobsNamespace.m_id.ObjectId.Data4[4] = 0;
  a2->PollModeConfigKnobsNamespace.m_globalLinkage = 0LL;
  a2->PollModeConfigKnobsNamespace.m_collectionList = 0LL;
  KPushLock::KPushLock(&a2->PollModeConfigKnobsNamespace.m_lock);
  *(_QWORD *)&a2->PollModeConfigKnobDescriptors.m_bufferSize = 0LL;
  a2->PollModeConfigKnobDescriptors._p = 0LL;
  a2->IdleSm.__ptr_.__value_ = 0LL;
  a2->Triage.__ptr_.__value_ = 0LL;
  a2->DriverHandle = a1;
  a2->HasConversionFilter = 0;
  ndisMInitializeMiniportBlockFront(a2, a3);
  *(_QWORD *)&a2->DriverPowerState = 1LL;
  a2->AdminStatus = NET_IF_ADMIN_STATUS_UP;
  a2->InstanceNumber = _InterlockedExchangeAdd(&ndisInstanceNumber, 1u) + 1;
  a2->NicSwitchList.Blink = &a2->NicSwitchList;
  a2->NicSwitchList.Flink = &a2->NicSwitchList;
  a2->VFList.Blink = &a2->VFList;
  a2->VFList.Flink = &a2->VFList;
  a2->VPortList.Blink = &a2->VPortList;
  a2->VPortList.Flink = &a2->VPortList;
  a2->SynchronousOidCalls.Blink = &a2->SynchronousOidCalls;
  a2->SynchronousOidCalls.Flink = &a2->SynchronousOidCalls;
  a2->AllowMultipleVPortsPerVF = ndisAllowMultipleVPortsPerVF;
  KeInitializeEvent(&a2->OpenReadyEvent.Event, NotificationEvent, 0);
  KeInitializeEvent(&a2->PowerD0CompleteEvent, NotificationEvent, 1u);
  KeInitializeSpinLock(&a2->PowerStateLock);
  KeInitializeSemaphore(&a2->PMPatternSemaphore, 1, 1);
  KeInitializeSemaphore(&a2->PMOffloadSemaphore, 1, 1);
  a2->DevicePowerStateWorkItem.Parameter = 0LL;
  a2->DevicePowerStateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisPowerIrpWorker;
  a2->SystemPowerStateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisPowerIrpWorker;
  a2->DevicePowerStateWorkItem.List.Flink = 0LL;
  a2->InterfaceUpdateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisMUpdateInterfaceWorker;
  a2->SystemPowerStateWorkItem.Parameter = 0LL;
  a2->SystemPowerStateWorkItem.List.Flink = 0LL;
  a2->InterfaceUpdateWorkItem.Parameter = a2;
  a2->InterfaceUpdateWorkItem.List.Flink = 0LL;
  IoInitializeRemoveLockEx(&a2->RemoveLock, 0x2020444Eu, 0, 0, 0x20u);
  a2->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(0x70u, 0);
  a2->NsiRefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(5u, 0);
  DriverHandle = a2->DriverHandle;
  if ( DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
    && (value = DriverHandle->UnhookedCharacteristics.__ptr_.__value_) != 0LL
    && value->OidRequestHandler != DriverHandle->MiniportDriverCharacteristics.OidRequestHandler )
  {
    Watchdog = ndisAllocateWatchdog();
    m_ptr = a2->HookedOidWatchdog.m_ptr;
    v10 = Watchdog;
    if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(m_ptr);
    a2->HookedOidWatchdog.m_ptr = v10;
  }
  else
  {
    v11 = ndisAllocateWatchdog();
    v12 = a2->PendingOidWatchdog.m_ptr;
    v13 = v11;
    if ( v12 != (NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v12);
    a2->PendingOidWatchdog.m_ptr = v13;
  }
  EtwActivityIdControl(3u, &a2->PnPActivityID);
  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline(v15, v14, v16, v17) )
  {
    a2->OpenFileHandles.Blink = &a2->OpenFileHandles;
    a2->OpenFileHandles.Flink = &a2->OpenFileHandles;
  }
}
