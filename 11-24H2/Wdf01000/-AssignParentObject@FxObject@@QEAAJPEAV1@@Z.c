/*
 * XREFs of ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14001CFC0
 * Callers:
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x14000F550 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfRequestCreate @ 0x14000FF10 (imp_WdfRequestCreate.c)
 *     imp_WdfMemoryCreate @ 0x140011E50 (imp_WdfMemoryCreate.c)
 *     imp_WdfMemoryCreateFromLookaside @ 0x140012BF0 (imp_WdfMemoryCreateFromLookaside.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14001AD70 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x140049F38 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x140054F34 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x140061DC4 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     FxCmResourceListInsertDescriptor @ 0x14009855C (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x140098650 (FxIoResourceListInsertDescriptor.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x14009A63C (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x14009AA40 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 * Callees:
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x14004B508 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

__int64 __fastcall FxObject::AssignParentObject(FxObject *this, FxObject *ParentObject)
{
  KIRQL v4; // al
  KIRQL v5; // r14
  KIRQL v6; // r15
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  unsigned int v9; // ebp

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v5 = v4;
  if ( this->m_ObjectState == 1 )
  {
    if ( this->m_ParentObject )
    {
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
      return 3223323149LL;
    }
    else
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&ParentObject->m_SpinLock.m_Lock);
      if ( ParentObject->m_ObjectState == 1 )
      {
        Blink = ParentObject->m_ChildListHead.Blink;
        p_m_ChildEntry = &this->m_ChildEntry;
        if ( Blink->Flink != &ParentObject->m_ChildListHead )
          __fastfail(3u);
        p_m_ChildEntry->Flink = &ParentObject->m_ChildListHead;
        this->m_ChildEntry.Blink = Blink;
        Blink->Flink = p_m_ChildEntry;
        ParentObject->m_ChildListHead.Blink = p_m_ChildEntry;
        if ( !this->m_DeviceBase )
          this->m_DeviceBase = ParentObject->m_DeviceBase;
        KeReleaseSpinLock(&ParentObject->m_SpinLock.m_Lock, v6);
        v9 = 0;
        this->m_ParentObject = ParentObject;
      }
      else
      {
        FxObject::TraceDroppedEvent(ParentObject, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&ParentObject->m_SpinLock.m_Lock, v6);
        v9 = -1073741738;
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v5);
      return v9;
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v5);
    return 3221225558LL;
  }
}
