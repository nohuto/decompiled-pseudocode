/*
 * XREFs of ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1400412C8
 * Callers:
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x140042564 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x14004A4E0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140026330 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x14003EF90 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x140041418 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x140041BC0 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x14004B220 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x14004C30C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 */

__int64 __fastcall FxDevice::DeleteDeviceFromFailedCreateNoDelete(
        FxDevice *this,
        unsigned int FailedStatus,
        unsigned __int8 UseStateMachine)
{
  unsigned int _a3; // edi
  const void *v6; // rsi
  bool v7; // zf
  const void *_a1; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDisposeList *m_DisposeList; // rcx
  FxPkgPnp *v13; // rcx
  _DEVICE_OBJECT *_a2; // [rsp+30h] [rbp-48h]
  MxEvent waitEvent; // [rsp+40h] [rbp-38h] BYREF

  _a3 = FailedStatus;
  _a2 = this->m_DeviceObject.m_DeviceObject;
  v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v7 = this->m_ObjectSize == 0;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  m_Globals = this->m_Globals;
  if ( v7 )
    _a1 = 0LL;
  WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0xBu, WPP_FxDevice_cpp_Traceguids, _a1, _a2, FailedStatus);
  if ( this->m_Filter )
  {
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_qqd(
      this->m_Globals,
      4u,
      0xCu,
      0xCu,
      WPP_FxDevice_cpp_Traceguids,
      v6,
      this->m_DeviceObject.m_DeviceObject,
      _a3);
    _a3 = 0;
  }
  if ( UseStateMachine )
  {
    waitEvent.m_DbgFlagIsInitialized = 0;
    KeInitializeEvent(&waitEvent.m_Event, SynchronizationEvent, 0);
    m_PkgPnp = this->m_PkgPnp;
    waitEvent.m_DbgFlagIsInitialized = 1;
    FxPkgPnp::CleanupDeviceFromFailedCreate(m_PkgPnp, &waitEvent);
  }
  else
  {
    FxObject::EarlyDispose(this);
    FxObject::DestroyChildren(this);
    m_DisposeList = this->m_DisposeList;
    if ( m_DisposeList )
      FxDisposeList::WaitForEmpty(m_DisposeList);
    v13 = this->m_PkgPnp;
    if ( v13 )
      FxPkgPnp::CleanupStateMachines(v13, 1u);
  }
  FxDevice::Destroy(this);
  return _a3;
}
