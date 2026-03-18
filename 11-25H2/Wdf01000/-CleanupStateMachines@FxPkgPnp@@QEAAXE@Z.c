/*
 * XREFs of ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x14004ADB0
 * Callers:
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x14004A460 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x14004B190 (-ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x14004D0E8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1400A6428 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1400167FC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x14004A570 (-CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x14004B044 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z @ 0x14004B0EC (-SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::CleanupStateMachines(FxPkgPnp *this, unsigned __int8 CleanupPnp)
{
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // rcx
  FxDeviceBase *v7; // rdx
  const void *v8; // rcx
  FxDeviceBase *v9; // rdx
  const void *v10; // rcx
  FxDeviceBase *v11; // r10
  const void *v12; // rcx
  FxCREvent eventOnStack; // [rsp+40h] [rbp-20h] BYREF

  eventOnStack.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  if ( CleanupPnp && !FxEventQueue::SetFinished(&this->m_PnpMachine, &eventOnStack) )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      this->m_Globals,
      4u,
      0xCu,
      0x26u,
      WPP_FxPkgPnp_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerPolicyMachine, &eventOnStack) )
  {
    v7 = this->m_DeviceBase;
    v8 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7->m_ObjectSize )
      v8 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x27u, WPP_FxPkgPnp_cpp_Traceguids, v8, v7->m_DeviceObject.m_DeviceObject);
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerMachine, &eventOnStack) )
  {
    v9 = this->m_DeviceBase;
    v10 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v9->m_ObjectSize )
      v10 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x28u, WPP_FxPkgPnp_cpp_Traceguids, v10, v9->m_DeviceObject.m_DeviceObject);
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  }
  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    KeClearEvent(&eventOnStack.m_Event.m_Event);
    m_DevicePowerRequirementMachine = this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DevicePowerRequirementMachine;
    if ( m_DevicePowerRequirementMachine && !FxEventQueue::SetFinished(m_DevicePowerRequirementMachine, &eventOnStack) )
    {
      v11 = this->m_DeviceBase;
      v12 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v11->m_ObjectSize )
        v12 = 0LL;
      WPP_IFR_SF_qq(
        this->m_Globals,
        4u,
        0xCu,
        0x29u,
        WPP_FxPkgPnp_cpp_Traceguids,
        v12,
        v11->m_DeviceObject.m_DeviceObject);
      FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
    }
    FxPowerPolicyOwnerSettings::CleanupPowerCallback(this->m_PowerPolicyMachine.m_Owner);
  }
  FxPkgPnp::ReleasePowerThread(this);
  this->ReleaseReenumerationInterface(this);
}
