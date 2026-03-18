/*
 * XREFs of ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350
 * Callers:
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x140013A20 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14001F7DC (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140020120 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140020544 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     imp_WdfStringCreate @ 0x140020B30 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x140020CD0 (imp_WdfSpinLockCreate.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1400374F0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x140039D20 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x14003A14C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x14003A924 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1400422C4 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x140043258 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140044680 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x140045E2C (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x140046010 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1400462C0 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1400465C8 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1400470E4 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400474A8 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140047750 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1400490A4 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x14004F8DC (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14004FC24 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     FxUsbTargetDeviceCreate @ 0x1400508FC (FxUsbTargetDeviceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14005551C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1400558B4 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x14005AC90 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfRegistryQueryMultiString @ 0x140062110 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfCommonBufferCreate @ 0x140069560 (imp_WdfCommonBufferCreate.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x140069DF8 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14006AFE0 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     imp_WdfDriverCreate @ 0x14006B960 (imp_WdfDriverCreate.c)
 *     imp_WdfCollectionCreate @ 0x14006EC50 (imp_WdfCollectionCreate.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14007252C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400743C8 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfRegistryQueryMemory @ 0x140078BE0 (imp_WdfRegistryQueryMemory.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14007A3D8 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F2E0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x140080E20 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1400810E0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x140081370 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x140087A44 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x140088718 (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     imp_WdfChildListCreate @ 0x14008B1D0 (imp_WdfChildListCreate.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x140091CF0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfLookasideListCreate @ 0x140093DD0 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x140094220 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x140094B64 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     imp_WdfIoResourceListCreate @ 0x140098B10 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009CDD0 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x14009EB70 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A1B10 (imp_WdfDmaEnablerCreate.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1400A7090 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1400A9B10 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x14004B508 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     FxLiveDump @ 0x1400837D4 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BB0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxObject::Commit(
        FxObject *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **ObjectHandle,
        FxObject *Parent,
        unsigned __int8 AssignDriverAsDefaultParent)
{
  FxObject *flags; // rdi
  unsigned __int64 globals; // rbp
  __int64 v11; // rcx
  __int64 m_ObjectSize; // rax
  char *v13; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  FxObjectExcessiveAllocation *ObjectExcessiveAllocation; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  void *v19; // rax
  KIRQL v20; // al
  KIRQL v21; // r13
  KIRQL v22; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  unsigned __int8 v25; // dl
  unsigned int v26; // r8d
  unsigned __int16 v27; // r9
  KIRQL v28; // al
  signed int v29; // edi
  _WDF_BUGCHECK_CODES v30; // edx
  _FX_DRIVER_GLOBALS *v31; // rcx
  const char *DriverName; // rsi
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  FxObject **v34; // [rsp+50h] [rbp-38h] BYREF
  __int16 v35; // [rsp+58h] [rbp-30h]
  __int16 v36; // [rsp+5Ah] [rbp-2Eh]
  int v37; // [rsp+5Ch] [rbp-2Ch]
  FxObject *v38; // [rsp+90h] [rbp+8h] BYREF

  flags = 0LL;
  v38 = 0LL;
  if ( !this->m_ObjectSize )
    return 3221225480LL;
  if ( Attributes && Attributes->ExecutionLevel == WdfExecutionLevelPassive )
  {
    v28 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    this->m_ObjectFlags |= 0x11u;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v28);
    flags = v38;
  }
  if ( Parent )
  {
    flags = Parent;
    v38 = Parent;
  }
  else if ( Attributes && (globals = (unsigned __int64)Attributes->ParentObject) != 0 )
  {
    LOWORD(v11) = 0;
    flags = (FxObject *)(~globals & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (globals & 1) != 0 )
    {
      v11 = LOWORD(flags->__vftable);
      flags = (FxObject *)((char *)flags - v11);
    }
    if ( flags->m_Type == 4096 )
    {
      v38 = flags;
    }
    else
    {
      v36 = v11;
      v34 = &v38;
      v35 = 4096;
      v37 = 0;
      if ( flags->QueryInterface(flags, (FxQueryInterfaceParams *)&v34) < 0 )
      {
        WPP_IFR_SF_qDqD(
          flags->m_Globals,
          v25,
          v26,
          v27,
          traceGuid,
          (const void *)globals,
          0x1000u,
          flags,
          flags->m_Type);
        FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, globals, 0x1000uLL);
      }
      flags = v38;
    }
  }
  else if ( AssignDriverAsDefaultParent )
  {
    if ( !this->m_ParentObject )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->Driver != this )
      {
        flags = m_Globals->Driver;
        v38 = flags;
      }
    }
  }
  if ( !flags )
  {
LABEL_13:
    if ( Attributes )
    {
      m_ObjectSize = this->m_ObjectSize;
      if ( (_WORD)m_ObjectSize )
        v13 = (char *)this + m_ObjectSize;
      else
        v13 = 0LL;
      EvtDestroyCallback = Attributes->EvtDestroyCallback;
      if ( EvtDestroyCallback )
        *((_QWORD *)v13 + 3) = EvtDestroyCallback;
      EvtCleanupCallback = Attributes->EvtCleanupCallback;
      if ( EvtCleanupCallback )
      {
        *((_QWORD *)v13 + 2) = EvtCleanupCallback;
        this->m_ObjectFlags |= 0x400u;
      }
    }
    this->m_ObjectFlags |= 8u;
    if ( ObjectHandle )
    {
      v19 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v19 = 0LL;
      *ObjectHandle = v19;
    }
    ObjectExcessiveAllocation = this->m_Globals->ObjectExcessiveAllocation;
    if ( !ObjectExcessiveAllocation || ObjectExcessiveAllocation->ViolationReported )
      return 0LL;
    if ( this->m_Type == 4098 )
    {
      if ( _InterlockedIncrement(&ObjectExcessiveAllocation->DeviceCnt) >= 2 )
        _InterlockedAdd(&ObjectExcessiveAllocation->LimitScaled, ObjectExcessiveAllocation->Limit);
    }
    else if ( this->m_Type == 4104 && BYTE5(this[2].__vftable) != 2 )
    {
      return 0LL;
    }
    this->m_ObjectFlags |= 0x40u;
    v29 = _InterlockedIncrement(&ObjectExcessiveAllocation->ObjectCnt);
    if ( v29 >= ObjectExcessiveAllocation->LimitScaled
      && !KeGetCurrentIrql()
      && !_InterlockedCompareExchange(&ObjectExcessiveAllocation->ViolationReported, 1, 0) )
    {
      WPP_IFR_SF_D(this->m_Globals, 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, v29);
      if ( ObjectExcessiveAllocation->BreakpointOk )
        DbgBreakPoint();
      v31 = this->m_Globals;
      DriverName = v31->Public.DriverName;
      FxLiveDump(v31, v30, (unsigned __int64)v31->Public.DriverName, v29);
      if ( v29 >= ObjectExcessiveAllocation->LimitScaled )
        MicrosoftTelemetryAssertTriggeredArgsKM(DriverName, v29, 0);
    }
    return 0LL;
  }
  v20 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v21 = v20;
  if ( this->m_ObjectState != 1 )
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAssignParentObject);
LABEL_57:
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v21);
    return 3221225558LL;
  }
  if ( !this->m_ParentObject )
  {
    v22 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
    if ( flags->m_ObjectState == 1 )
    {
      Blink = flags->m_ChildListHead.Blink;
      p_m_ChildEntry = &this->m_ChildEntry;
      if ( Blink->Flink != &flags->m_ChildListHead )
        __fastfail(3u);
      p_m_ChildEntry->Flink = &flags->m_ChildListHead;
      this->m_ChildEntry.Blink = Blink;
      Blink->Flink = p_m_ChildEntry;
      flags->m_ChildListHead.Blink = p_m_ChildEntry;
      if ( !this->m_DeviceBase )
        this->m_DeviceBase = flags->m_DeviceBase;
      KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v22);
      this->m_ParentObject = flags;
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v21);
      goto LABEL_13;
    }
    FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v22);
    goto LABEL_57;
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v20);
  return 3223323149LL;
}
