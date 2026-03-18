/*
 * XREFs of ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400474A8
 * Callers:
 *     ?_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140047490 (-_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x14002D90C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x140032070 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140033950 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140046F5C (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x140047684 (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x14009A7DC (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryResourceRequirements(FxPkgPdo *this, _FX_DRIVER_GLOBALS *Irp)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // r15
  signed int Flink; // ebx
  _FX_DRIVER_GLOBALS *v6; // rdx
  _SINGLE_LIST_ENTRY *i; // rsi
  NTSTATUS _a3; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // rcx
  _WDF_OBJECT_ATTRIBUTES *v11; // r8
  unsigned __int8 v12; // r9
  FxIoResReqList *v13; // rsi
  FxDeviceBase *v14; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v17; // rcx
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  FxIoResReqList *status; // [rsp+70h] [rbp+8h] BYREF
  WDFIORESREQLIST__ *reqlist; // [rsp+80h] [rbp+18h] BYREF

  p_m_DeviceInterfaceLock = &this->m_DeviceInterfaceLock;
  status = 0LL;
  Flink = 0;
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, Irp, 0LL);
  LOBYTE(this->m_DeviceBase[1].m_ChildEntry.Blink) = 1;
  for ( i = this->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( i[-1].Next )
    {
      RtlFreeUnicodeString((PUNICODE_STRING)&i[-2]);
      *(_OWORD *)&i[-2].Next = 0LL;
    }
    _a3 = FxDeviceInterface::Register((FxDeviceInterface *)&i[-6], this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
    Flink = _a3;
    if ( _a3 < 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqd(
        this->m_Globals,
        2u,
        0xCu,
        0xAu,
        WPP_FxPkgPdoKM_cpp_Traceguids,
        _a1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
      break;
    }
  }
  FxWaitLockInternal::ReleaseLock(p_m_DeviceInterfaceLock, v6);
  if ( Flink >= 0 )
  {
    if ( this->m_DeviceResourceRequirementsQuery.m_Method )
    {
      Flink = FxIoResReqList::_CreateAndInit(&status, this->m_Globals, v11, v12);
      if ( Flink >= 0 )
      {
        v13 = status;
        reqlist = 0LL;
        FxObject::Commit(status, 0LL, (void **)&reqlist, 0LL, 1u);
        v14 = this->m_DeviceBase;
        m_Method = this->m_DeviceResourceRequirementsQuery.m_Method;
        m_ObjectSize = v14->m_ObjectSize;
        if ( m_Method )
        {
          v17 = (unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !m_ObjectSize )
            v17 = 0LL;
          Flink = m_Method((WDFDEVICE__ *)v17, reqlist);
          if ( Flink < 0 )
            goto LABEL_18;
        }
        else
        {
          Flink = 0;
        }
        if ( v13->m_Count )
        {
          WdmList = FxIoResReqList::CreateWdmList(v13);
          if ( WdmList )
            Irp->Linkage.Flink[3].Blink = (_LIST_ENTRY *)WdmList;
          else
            Flink = -1073741670;
        }
        else
        {
          Flink = (signed int)Irp->Linkage.Flink[3].Flink;
        }
LABEL_18:
        v13->DeleteObject(v13);
      }
    }
  }
  return FxPkgPnp::CompletePnpRequest(this, (FxIrp *)Irp, Flink);
}
