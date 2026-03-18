/*
 * XREFs of ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x14003F590
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     FX_TRACK_DRIVER @ 0x14003F8F0 (FX_TRACK_DRIVER.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x14003F920 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x14003F998 (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x14005D6AC (WPP_IFR_SF_qqcq.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWmiIrpHandler::Dispatch(FxWmiIrpHandler *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v5; // r8
  const void *v6; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  FxWmiProvider *ProviderLocked; // r14
  FxWmiInstance *InstanceReferencedLocked; // r12
  unsigned __int8 _a3; // bl
  unsigned __int64 v11; // r13
  _FX_DRIVER_GLOBALS *v12; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  NTSTATUS Status; // ebx
  FxTagTracker *v16; // rcx
  int (__fastcall *Handler)(FxWmiIrpHandler *, _IRP *, FxWmiProvider *, FxWmiInstance *); // rax
  NTSTATUS v18; // eax
  char v19; // bp
  char v20; // r15
  _LIST_ENTRY *v21; // rcx
  unsigned __int8 v22; // r8
  unsigned int RefCount; // edx
  _LIST_ENTRY *Flink; // rcx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rdx
  FxDeviceBase *m_DeviceBase; // r8
  const void *v27; // rdx
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  char v29; // [rsp+98h] [rbp+10h]

  m_Globals = this->m_Globals;
  irql = 0;
  FX_TRACK_DRIVER(m_Globals);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  ProviderLocked = (FxWmiProvider *)(unsigned int)v6;
  InstanceReferencedLocked = (FxWmiInstance *)(unsigned int)v6;
  v29 = (char)v6;
  _a3 = CurrentStackLocation->MinorFunction;
  v11 = _a3;
  v12 = this->m_Globals;
  if ( v12->FxVerboseOn != (_BYTE)v6 )
  {
    m_DeviceBase = this->m_DeviceBase;
    v27 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_DeviceBase->m_ObjectSize == (_WORD)v6 )
      v27 = v6;
    WPP_IFR_SF_qqcq(
      v12,
      5u,
      0xDu,
      0xEu,
      WPP_FxWmiIrpHandler_cpp_Traceguids,
      v27,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3,
      Irp);
    LODWORD(v6) = 0;
  }
  if ( _a3 > 9u && _a3 != 11
    || (_DEVICE_OBJECT *)CurrentStackLocation->Parameters.WMI.ProviderId != this->m_DeviceBase->m_DeviceObject.m_DeviceObject )
  {
LABEL_4:
    m_DeviceObject = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    if ( m_DeviceObject )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(m_DeviceObject, Irp);
      goto LABEL_6;
    }
LABEL_22:
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
    goto LABEL_6;
  }
  if ( _a3 == 8 || _a3 == 11 )
  {
    Status = (int)v6;
    goto LABEL_14;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (Flink = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, v5);
  }
  else
  {
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(
                     this,
                     (_GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName);
  if ( !ProviderLocked )
  {
    Status = -1073741163;
    goto LABEL_39;
  }
  Status = 0;
  if ( FxWmiIrpHandler::m_WmiDispatchTable[v11].CheckInstance )
  {
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( (Parameters[1].ReadMode & 0x80) == 0
      || (InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(
                                       ProviderLocked,
                                       Parameters[1].MaximumInstances,
                                       (void *)v11)) == 0LL )
    {
      Status = -1073741162;
LABEL_39:
      ProviderLocked = 0LL;
      goto LABEL_11;
    }
  }
  RefCount = _InterlockedIncrement(&ProviderLocked->m_Refcnt);
  if ( (ProviderLocked->m_ObjectFlags & 0x80) != 0 )
  {
    v16 = *(FxTagTracker **)&ProviderLocked[-1].m_Guid.Data1;
    if ( v16 )
      FxTagTracker::UpdateTagHistory(
        v16,
        (void *)v11,
        735,
        "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp",
        TagAddRef,
        RefCount);
  }
LABEL_11:
  if ( (this->m_ObjectFlags & 0x80) != 0
    && (v21 = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Unlock((FxVerifierLock *)v21, irql, v22);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( Status < 0 )
  {
    Irp->IoStatus.Status = Status;
    v19 = 1;
    v20 = 0;
    goto $Done_10;
  }
LABEL_14:
  Handler = FxWmiIrpHandler::m_WmiDispatchTable[v11].Handler;
  if ( Handler )
  {
    v18 = Handler(this, Irp, ProviderLocked, InstanceReferencedLocked);
    v19 = v29;
    Status = v18;
    v20 = 1;
  }
  else
  {
    v19 = v29;
    v20 = v29;
  }
$Done_10:
  if ( InstanceReferencedLocked )
    InstanceReferencedLocked->Release(
      InstanceReferencedLocked,
      (void *)v11,
      765,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( ProviderLocked )
    ProviderLocked->Release(
      ProviderLocked,
      (void *)v11,
      770,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( !v20 )
  {
    if ( v19 )
      goto LABEL_22;
    goto LABEL_4;
  }
LABEL_6:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return (unsigned int)Status;
}
