/*
 * XREFs of ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400775E8
 * Callers:
 *     ?_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400775D0 (-_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x140004FB4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400050C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x140023EB0 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x140024BF0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x14002D8C8 (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x14002D90C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1400314BC (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140031BCC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140031EE8 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1400406D8 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x140043F60 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140061CE0 (-GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140061D04 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ??1FxAutoIrp@@QEAA@XZ @ 0x140069898 (--1FxAutoIrp@@QEAA@XZ.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x140077FDC (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x140078104 (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     WPP_IFR_SF_qqddd @ 0x14007F490 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_Dd @ 0x140080004 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_DDDDDDD @ 0x140080220 (WPP_IFR_SF_DDDDDDD.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1400816C4 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 *     ?IsUsagePowerRelated@FxPkgPnp@@IEAAEW4_WDF_SPECIAL_FILE_TYPE@@@Z @ 0x1400A63D0 (-IsUsagePowerRelated@FxPkgPnp@@IEAAEW4_WDF_SPECIAL_FILE_TYPE@@@Z.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1400A6568 (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1400AA010 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, FxIrp *Irp)
{
  struct _IO_WORKITEM *m_WorkItem; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v6; // r14d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r13d
  unsigned int _a6; // r12d
  _FX_DRIVER_GLOBALS *v10; // rdi
  int v11; // edx
  int v12; // edx
  _DEVICE_USAGE_NOTIFICATION_TYPE v13; // edx
  _WDF_SPECIAL_FILE_TYPE v14; // eax
  int v15; // edx
  unsigned int globals; // r8d
  unsigned int level; // r9d
  unsigned int flags; // r10d
  unsigned int id; // r11d
  $921581151E63D277366488A82A7AB3A8 *v20; // rdi
  __int64 v21; // rdx
  FxRelatedDeviceList *v22; // r8
  unsigned __int8 v23; // dl
  const void *v24; // r10
  unsigned int v25; // eax
  FxDevice *m_DeviceBase; // rcx
  bool IsPdo; // al
  __int64 v28; // rdx
  FxPowerPolicyOwnerSettings *v29; // r9
  _IRP *v30; // rax
  const void *v31; // rdx
  _FX_DRIVER_GLOBALS *v32; // rcx
  unsigned int v33; // r8d
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rdi
  char m_DeviceObject; // dl
  __int64 v36; // rbx
  FxRelatedDeviceList *v37; // rcx
  __int64 NextEntryLocked; // rax
  CCHAR v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  char StackSize; // di
  _IRP *v44; // rax
  FxDeviceBase *v45; // rdx
  __int64 v46; // rax
  const void *v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // rdi
  FxTransactionedEntry *v54; // rax
  char v55; // di
  char *v56; // r9
  _WDF_SPECIAL_FILE_TYPE v57; // eax
  FxPkgPnp *v58; // rcx
  __int64 v59; // rdx
  int v60; // r9d
  _IO_STACK_LOCATION *v61; // rcx
  __int64 v62; // rbx
  FxTransactionedEntry *v63; // rax
  _WDF_SPECIAL_FILE_TYPE v64; // eax
  __int64 v65; // r8
  unsigned __int64 v66; // r9
  FxDeviceBase *v67; // rcx
  _WDF_SPECIAL_FILE_TYPE v68; // r14d
  void (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_SPECIAL_FILE_TYPE, unsigned __int8); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v71; // rcx
  FxDeviceBase *v72; // rcx
  int (__fastcall *v73)(WDFDEVICE__ *, _WDF_SPECIAL_FILE_TYPE, unsigned __int8); // rax
  unsigned __int16 v74; // dx
  unsigned __int64 v75; // rcx
  __int64 v76; // rdx
  int v77; // r8d
  _IO_STACK_LOCATION *v78; // rcx
  unsigned int v79; // r9d
  __int64 v80; // r13
  FxTransactionedEntry *v81; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  _FX_DRIVER_GLOBALS *v83; // rcx
  unsigned int v84; // edi
  _FX_DRIVER_GLOBALS *v86; // rcx
  unsigned int v87; // ebx
  const _GUID *traceGuid; // [rsp+20h] [rbp-49h]
  FxAutoIrp relatedIrp; // [rsp+60h] [rbp-9h] BYREF
  FxAutoIrp parentIrp; // [rsp+68h] [rbp-1h] BYREF
  FxRelatedDeviceList *v91; // [rsp+70h] [rbp+7h]
  __int64 v92; // [rsp+78h] [rbp+Fh]
  MxDeviceObject dependentDevice; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int OldFlags; // [rsp+D8h] [rbp+6Fh]
  MxAutoWorkItem workItem; // [rsp+E0h] [rbp+77h] BYREF
  MxDeviceObject topOfParentStack; // [rsp+E8h] [rbp+7Fh] BYREF

  relatedIrp.m_Irp = 0LL;
  m_WorkItem = 0LL;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  workItem.m_WorkItem = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Fu, WPP_FxPkgPnp_cpp_Traceguids);
  v6 = 0;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  _a5 = CurrentStackLocation->Parameters.UsageNotification.Type;
  _a6 = CurrentStackLocation->Parameters.SetLock.Lock;
  v10 = this->m_Globals;
  if ( v10->FxVerboseOn )
  {
    FxPkgPnp::_UsageToSpecialType(DeviceUsageTypeGuestAssigned);
    FxPkgPnp::_UsageToSpecialType(DeviceUsageTypeBoot);
    FxPkgPnp::_UsageToSpecialType((_DEVICE_USAGE_NOTIFICATION_TYPE)(v11 + 1));
    FxPkgPnp::_UsageToSpecialType((_DEVICE_USAGE_NOTIFICATION_TYPE)(v12 + 2));
    v14 = FxPkgPnp::_UsageToSpecialType(v13);
    LOBYTE(v15) = this->m_SpecialSupport[v14 - v15];
    WPP_IFR_SF_DDDDDDD(v10, v15, globals, level, traceGuid, _a5, _a6, (unsigned __int8)v15, globals, level, flags, id);
  }
  if ( (unsigned int)(_a5 - 1) > 6
    || (v20 = &this->96, (_BYTE)_a6) && !BYTE1(v20->m_DeviceBase[1].m_Globals) && !this->m_SpecialSupport[_a5 - 1] )
  {
    v86 = this->m_Globals;
    if ( v86->FxVerboseOn )
      WPP_IFR_SF_Dd(v86, 5u, 0xCu, 0x41u, WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
    v33 = -1073741822;
    goto LABEL_101;
  }
  if ( !Mx::MxHasEnoughRemainingThreadStack()
    && (FxDevice::IsPdo(v20->m_Device) || this->m_UsageDependentDeviceList != v22) )
  {
    v6 = MxWorkItem::Allocate(&workItem, *(_DEVICE_OBJECT **)(v21 + 144), v22);
    if ( v6 < 0 )
    {
      v24 = (const void *)((unsigned __int64)v20->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20->m_DeviceBase->m_ObjectSize )
        v24 = 0LL;
      WPP_IFR_SF_qqddd(
        this->m_Globals,
        v23,
        0xCu,
        0x42u,
        WPP_FxPkgPnp_cpp_Traceguids,
        v24,
        v20->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a5,
        _a6,
        v6);
LABEL_27:
      v33 = v6;
LABEL_101:
      v87 = FxPkgPnp::CompletePnpRequest(this, Irp, v33);
      MxWorkItem::Free(&workItem);
      FxAutoIrp::~FxAutoIrp(&parentIrp);
      FxAutoIrp::~FxAutoIrp(&relatedIrp);
      return v87;
    }
    m_WorkItem = workItem.m_WorkItem;
  }
  v25 = FxPkgPnp::SetUsageNotificationFlags(this, _a5, _a6);
  m_DeviceBase = (FxDevice *)v20->m_DeviceBase;
  OldFlags = v25;
  IsPdo = FxDevice::IsPdo(m_DeviceBase);
  v29 = 0LL;
  if ( IsPdo )
  {
    topOfParentStack.m_DeviceObject = FxDeviceBase::GetAttachedDeviceReference(*(FxDeviceBase **)(v28 + 224));
    v30 = IoAllocateIrp(topOfParentStack.m_DeviceObject->StackSize, 0);
    if ( v30 )
    {
      parentIrp.m_Irp = v30;
      v6 = SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 0);
    }
    else
    {
      v6 = -1073741670;
      v31 = (const void *)((unsigned __int64)v20->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20->m_DeviceBase->m_ObjectSize )
        v31 = 0LL;
      WPP_IFR_SF_qqddd(
        this->m_Globals,
        (unsigned __int8)v31,
        0xCu,
        0x43u,
        WPP_FxPkgPnp_cpp_Traceguids,
        v31,
        topOfParentStack.m_DeviceObject,
        _a5,
        _a6,
        -1073741670);
    }
    ObfDereferenceObject(topOfParentStack.m_DeviceObject);
    v29 = 0LL;
    topOfParentStack.m_DeviceObject = 0LL;
    if ( v6 < 0 )
    {
      v32 = this->m_Globals;
      if ( v32->FxVerboseOn )
        WPP_IFR_SF_D(v32, 5u, 0xCu, 0x44u, WPP_FxPkgPnp_cpp_Traceguids, v6);
      FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, OldFlags);
      goto LABEL_27;
    }
  }
  m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
  LOBYTE(dependentDevice.m_DeviceObject) = 0;
  v92 = 0LL;
  v91 = m_UsageDependentDeviceList;
  if ( !m_UsageDependentDeviceList )
  {
    v91 = 0LL;
    goto LABEL_47;
  }
  FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
  m_DeviceObject = (char)dependentDevice.m_DeviceObject;
  v36 = v92;
  while ( 1 )
  {
    v37 = this->m_UsageDependentDeviceList;
    LOBYTE(dependentDevice.m_DeviceObject) = m_DeviceObject;
    NextEntryLocked = (__int64)FxTransactionedList::GetNextEntryLocked(
                                 v37,
                                 (FxTransactionedEntry *)((v36 + 104) & -(__int64)(v36 != 0)));
    v40 = NextEntryLocked - 104;
    v41 = -NextEntryLocked;
    v36 = v40 & -(__int64)(v41 != 0);
    if ( !v36 )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)((v40 & -(__int64)(v41 != 0)) + 0x98));
    StackSize = AttachedDeviceReference->StackSize;
    ObfDereferenceObject(AttachedDeviceReference);
    m_DeviceObject = StackSize;
    if ( StackSize <= SLOBYTE(dependentDevice.m_DeviceObject) )
      m_DeviceObject = (char)dependentDevice.m_DeviceObject;
  }
  m_WorkItem = workItem.m_WorkItem;
  v29 = 0LL;
  if ( v39 <= 0 )
  {
LABEL_47:
    v55 = (char)v29;
    if ( this->m_PowerPolicyMachine.m_Owner != v29 )
    {
      FxPkgPnp::SaveRequestD0IrpReasonHint(this, 16);
      v6 = FxPowerIdleMachine::PowerReferenceWorker(
             &this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine,
             1u,
             FxPowerReferenceDefault,
             0LL,
             (int)v56,
             v56);
      if ( v6 < 0 )
        goto LABEL_58;
      v55 = 1;
    }
    Irp->m_Irp->IoStatus.Status = v6;
    v6 = this->SendIrpSynchronously(this, Irp);
    if ( v6 < 0 )
      goto LABEL_59;
    if ( !(_BYTE)_a6
      || this->m_HasPowerThread
      || (v57 = FxPkgPnp::_UsageToSpecialType(_a5), !FxPkgPnp::IsUsagePowerRelated(v58, v57))
      || (v6 = this->QueryForPowerThread(this), v6 >= 0) )
    {
      v64 = FxPkgPnp::_UsageToSpecialType(_a5);
      v67 = this->m_DeviceBase;
      v68 = v64;
      m_Method = this->m_DeviceUsageNotification.m_Method;
      m_ObjectSize = v67->m_ObjectSize;
      if ( m_Method )
      {
        v71 = (unsigned __int64)v67 ^ 0xFFFFFFFFFFFFFFF8uLL;
        LOBYTE(v65) = _a6;
        if ( !m_ObjectSize )
          v71 = v66;
        m_Method((WDFDEVICE__ *)v71, v68, v65);
        v66 = 0LL;
      }
      v72 = this->m_DeviceBase;
      v73 = this->m_DeviceUsageNotificationEx.m_Method;
      v74 = v72->m_ObjectSize;
      if ( v73 )
      {
        v75 = (unsigned __int64)v72 ^ 0xFFFFFFFFFFFFFFF8uLL;
        LOBYTE(v65) = _a6;
        if ( !v74 )
          v75 = v66;
        v6 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, unsigned __int64))v73)(
               v75,
               (unsigned int)v68,
               v65,
               v66);
        if ( v6 < 0 )
        {
          if ( FxDevice::IsPdo(this->m_Device) )
          {
            topOfParentStack.m_DeviceObject = FxDeviceBase::GetAttachedDeviceReference(*(FxDeviceBase **)(v76 + 224));
            SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
            ObfDereferenceObject(topOfParentStack.m_DeviceObject);
          }
          else
          {
            v78 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v78[-1].MajorFunction = *(_OWORD *)&v78->MajorFunction;
            *(_OWORD *)&v78[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v78->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v78[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v78->Parameters.SetQuota + 6);
            v78[-1].FileObject = v78->FileObject;
            v78[-1].Control = v77;
            Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = v77;
            Irp->m_Irp->IoStatus.Status = v77;
            FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
          }
          v79 = OldFlags;
          Irp->m_Irp->IoStatus.Status = v6;
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, v79);
          v80 = 0LL;
          if ( v91 )
          {
            for ( dependentDevice.m_DeviceObject = 0LL;
                  ;
                  SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u) )
            {
              v81 = FxTransactionedList::GetNextEntryLocked(
                      this->m_UsageDependentDeviceList,
                      (FxTransactionedEntry *)((v80 + 104) & -(__int64)(v80 != 0)));
              v80 = (unsigned __int64)&v81[-3].m_TransactionedObject & -(__int64)(v81 != 0LL);
              if ( !v80 )
                break;
              dependentDevice.m_DeviceObject = *(_DEVICE_OBJECT **)(((unsigned __int64)&v81[-3].m_TransactionedObject & -(__int64)(v81 != 0LL))
                                                                  + 0x98);
            }
          }
          goto LABEL_85;
        }
      }
      else
      {
        v6 = v66;
      }
      FxPkgPnp::CommitUsageNotification(this, _a5, OldFlags);
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      if ( m_Owner && _a5 == DeviceUsageTypeDumpFile )
      {
        if ( (_BYTE)_a6 )
          FxPowerIdleMachine::PowerReferenceWorker(
            &m_Owner->m_PowerIdleMachine,
            0,
            FxPowerReferenceDefault,
            0LL,
            0,
            0LL);
        else
          FxPowerIdleMachine::IoDecrement(&m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
      }
      goto LABEL_85;
    }
    if ( FxDevice::IsPdo(this->m_Device) )
    {
      topOfParentStack.m_DeviceObject = FxDeviceBase::GetAttachedDeviceReference(*(FxDeviceBase **)(v59 + 224));
      SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
      ObfDereferenceObject(topOfParentStack.m_DeviceObject);
    }
    else
    {
      v61 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v61[-1].MajorFunction = *(_OWORD *)&v61->MajorFunction;
      *(_OWORD *)&v61[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v61->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v61[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v61->Parameters.SetQuota + 6);
      v61[-1].FileObject = v61->FileObject;
      v61[-1].Control = v60;
      Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = v60;
      Irp->m_Irp->IoStatus.Status = v60;
      FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
    }
LABEL_58:
    Irp->m_Irp->IoStatus.Status = v6;
LABEL_59:
    FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, OldFlags);
    if ( v91 )
    {
      dependentDevice.m_DeviceObject = 0LL;
      v62 = 0LL;
      while ( 1 )
      {
        v63 = FxTransactionedList::GetNextEntryLocked(
                this->m_UsageDependentDeviceList,
                (FxTransactionedEntry *)((v62 + 104) & -(__int64)(v62 != 0)));
        v62 = (unsigned __int64)&v63[-3].m_TransactionedObject & -(__int64)(v63 != 0LL);
        if ( !v62 )
          break;
        dependentDevice.m_DeviceObject = *(_DEVICE_OBJECT **)(((unsigned __int64)&v63[-3].m_TransactionedObject & -(__int64)(v63 != 0LL))
                                                            + 0x98);
        SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
      }
      m_WorkItem = workItem.m_WorkItem;
    }
LABEL_85:
    if ( v55 )
      FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
LABEL_87:
    if ( !v91 )
      goto LABEL_89;
    goto LABEL_88;
  }
  v44 = IoAllocateIrp(v39, 0);
  if ( v44 )
  {
    dependentDevice.m_DeviceObject = 0LL;
    v48 = 0LL;
    relatedIrp.m_Irp = v44;
    while ( 1 )
    {
      v49 = (__int64)FxTransactionedList::GetNextEntryLocked(
                       this->m_UsageDependentDeviceList,
                       (FxTransactionedEntry *)((v48 + 104) & -(__int64)(v48 != 0)));
      v50 = v49 - 104;
      v51 = -v49;
      v48 = v50 & -(__int64)(v51 != 0);
      v92 = v48;
      if ( !v48 )
        goto LABEL_47;
      dependentDevice.m_DeviceObject = *(_DEVICE_OBJECT **)((v50 & -(__int64)(v51 != 0)) + 0x98);
      v6 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, (unsigned __int8)v29);
      if ( v6 < 0 )
      {
        v52 = v92;
        v53 = 0LL;
        while ( 1 )
        {
          v54 = FxTransactionedList::GetNextEntryLocked(
                  this->m_UsageDependentDeviceList,
                  (FxTransactionedEntry *)((v53 + 104) & -(__int64)(v53 != 0)));
          v53 = (unsigned __int64)&v54[-3].m_TransactionedObject & -(__int64)(v54 != 0LL);
          if ( !v53 || v53 == v52 )
            break;
          dependentDevice.m_DeviceObject = *(_DEVICE_OBJECT **)(((unsigned __int64)&v54[-3].m_TransactionedObject & -(__int64)(v54 != 0LL))
                                                              + 0x98);
          SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
        }
        goto LABEL_87;
      }
    }
  }
  v6 = -1073741670;
  v45 = this->m_DeviceBase;
  v46 = v45->m_ObjectSize;
  v47 = (const void *)((unsigned __int64)v45 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !(_WORD)v46 )
    v47 = 0LL;
  WPP_IFR_SF_qddd(
    this->m_Globals,
    (unsigned __int8)v47,
    0xCu,
    0x45u,
    WPP_FxPkgPnp_cpp_Traceguids,
    v47,
    _a5,
    _a6,
    -1073741670);
LABEL_88:
  FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
LABEL_89:
  v83 = this->m_Globals;
  if ( v83->FxVerboseOn )
    WPP_IFR_SF_D(v83, 5u, 0xCu, 0x46u, WPP_FxPkgPnp_cpp_Traceguids, v6);
  v84 = FxPkgPnp::CompletePnpRequest(this, Irp, v6);
  if ( m_WorkItem )
    IoFreeWorkItem(m_WorkItem);
  if ( parentIrp.m_Irp )
    IoFreeIrp(parentIrp.m_Irp);
  if ( relatedIrp.m_Irp )
    IoFreeIrp(relatedIrp.m_Irp);
  return v84;
}
