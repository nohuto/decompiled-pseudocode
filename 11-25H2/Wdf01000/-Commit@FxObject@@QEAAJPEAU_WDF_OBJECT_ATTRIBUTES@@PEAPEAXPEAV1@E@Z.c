/*
 * XREFs of ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90
 * Callers:
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1400018AC (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140007B18 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140007F34 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     imp_WdfStringCreate @ 0x140008400 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1400085A0 (imp_WdfSpinLockCreate.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x140014104 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x14001FCD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x140022EC4 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140023128 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1400236A0 (imp_WdfMemoryCreatePreallocated.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x140039700 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14003E36C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x14003E704 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1400401C0 (imp_WdfRegistryQueryMultiString.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1400419B0 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x140043804 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14004DFD4 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x14004EF68 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14004FB80 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1400500A8 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140050DA0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x14005203C (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x140052260 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x140052510 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     imp_WdfRegistryOpenKey @ 0x140052930 (imp_WdfRegistryOpenKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x140052DD4 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x140053E84 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x140054448 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfRegistryCreateKey @ 0x140054A10 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1400551D0 (imp_WdfRegistryQueryMemory.c)
 *     FxUsbTargetDeviceCreate @ 0x140059F74 (FxUsbTargetDeviceCreate.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14005A73C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     imp_WdfCommonBufferCreate @ 0x14006B0A0 (imp_WdfCommonBufferCreate.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14006B8D8 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     imp_WdfDriverCreate @ 0x14006CBA0 (imp_WdfDriverCreate.c)
 *     imp_WdfCollectionCreate @ 0x14006F840 (imp_WdfCollectionCreate.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074A30 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x140074E78 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14007A808 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F6B0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1400813D0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x140087A54 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x140088728 (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     imp_WdfChildListCreate @ 0x14008B170 (imp_WdfChildListCreate.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x140091C90 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfLookasideListCreate @ 0x140093D70 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1400941C0 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x140094B04 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     imp_WdfIoResourceListCreate @ 0x140098AD0 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009CD00 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x14009EAA0 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A1A40 (imp_WdfDmaEnablerCreate.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1400A6FC0 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1400A9A40 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x140045C68 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     FxLiveDump @ 0x1400837E4 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BC0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
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
