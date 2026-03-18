/*
 * XREFs of ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14006B690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1400323E0 (-PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x14003246C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x14003317C (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x140033204 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1400334EC (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x140033988 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x140035F58 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x14006B914 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x14009CB34 (WPP_IFR_SF_qqLd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoD3Stopped(FxPkgPnp *This, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  char v5; // di
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  signed int _a1; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v10; // rdx
  int globals; // r8d
  char v12; // al
  FxDeviceBase *v13; // rdx
  unsigned __int16 v14; // ax
  WDFDEVICE__ *v15; // rdx
  int v16; // r10d
  int v17; // eax
  FxDeviceBase *v18; // rdx
  unsigned __int16 v19; // ax
  WDFDEVICE__ *v20; // rdx
  int v21; // eax
  FxDeviceBase *v22; // rcx
  unsigned __int8 v24; // r8
  FxDeviceBase *v25; // rax
  const void *v26; // rdx
  FxDeviceBase *v27; // rax
  const void *v28; // rdx

  v5 = 0;
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    m_SelfManagedIoMachine->m_DeviceSelfManagedIoSuspend.m_TargetState = WdfPowerDeviceD3Final;
    _a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventSuspend, 0LL);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(This->m_Globals, 2u, 0xCu, 0x11u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      v5 = 1;
    }
  }
  FxPkgIo::StopProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink, 1u, a3, a4);
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v10 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  This->m_DeviceD0ExitPreHardwareDisabled.m_TargetState = WdfPowerDeviceD3Final;
  if ( !m_ObjectSize )
    v10 = 0LL;
  This->m_DeviceD0ExitPreHardwareDisabled.m_Device = v10;
  globals = FxPrePostCallback::InvokeStateless(&This->m_DeviceD0ExitPreHardwareDisabled);
  if ( globals < 0 )
  {
    v5 = 1;
    v25 = This->m_DeviceBase;
    v26 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v25->m_ObjectSize )
      v26 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)v26,
      0xCu,
      0x12u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v26,
      v25->m_DeviceObject.m_DeviceObject,
      5u,
      globals);
  }
  v12 = FxPkgPnp::PowerDmaPowerDown(This);
  v13 = This->m_DeviceBase;
  if ( !v12 )
    v5 = 1;
  v14 = v13->m_ObjectSize;
  v15 = (WDFDEVICE__ *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v14 )
    v15 = 0LL;
  v16 = FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
          &This->m_DeviceD0ExitPreInterruptsDisabled,
          v15,
          WdfPowerDeviceD3Final);
  if ( v16 < 0 )
  {
    v5 = 1;
    v27 = This->m_DeviceBase;
    v28 = (const void *)((unsigned __int64)v27 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v27->m_ObjectSize )
      v28 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)v28,
      0xCu,
      0x13u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v28,
      v27->m_DeviceObject.m_DeviceObject,
      5u,
      v16);
  }
  v17 = FxPkgPnp::NotifyResourceObjectsDx(This, 4u);
  v18 = This->m_DeviceBase;
  if ( v17 < 0 )
    v5 = 1;
  v19 = v18->m_ObjectSize;
  v20 = (WDFDEVICE__ *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
  This->m_DeviceD0Exit.m_TargetState = WdfPowerDeviceD3Final;
  if ( !v19 )
    v20 = 0LL;
  This->m_DeviceD0Exit.m_Device = v20;
  v21 = FxPrePostCallback::InvokeStateless(&This->m_DeviceD0Exit);
  v22 = This->m_DeviceBase;
  This->m_DevicePowerStateOld = This->m_DevicePowerState;
  This->m_DevicePowerState = 5;
  if ( v21 < 0 )
    v5 = 1;
  PoSetPowerState(v22->m_DeviceObject.m_DeviceObject, DevicePowerState, (POWER_STATE)4);
  This->PowerParentPowerDereference(This);
  if ( v5 )
    return 848LL;
  FxPkgPnp::PowerSendIdlePowerEvent(This, PowerIdleEventPowerDown);
  FxPkgPnp::PowerPolicyProcessEvent(
    This,
    (FxPowerPolicyEvent)(This->m_PowerPolicyMachine.m_Owner != 0LL ? PwrPolPowerDown : PwrPolImplicitPowerDown),
    v24);
  return 789LL;
}
