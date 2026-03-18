/*
 * XREFs of ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x140032070
 * Callers:
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x140005F90 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x14002F530 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x14002FE54 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x140030130 (-_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z.c)
 *     ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x1400302A0 (-PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x140031F70 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x140032130 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x140046D00 (imp_WdfDeviceCreateDeviceInterface.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400474A8 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x14006A820 (-AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x14006B428 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006DC20 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x14006DF20 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x14006E0E4 (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x140073DF0 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x1400833D0 (-AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z.c)
 *     imp_WdfInterruptTryToAcquireLock @ 0x1400A2820 (imp_WdfInterruptTryToAcquireLock.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1400A6470 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1400AA5F0 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWaitLockInternal::AcquireLock(
        FxWaitLockInternal *this,
        _FX_DRIVER_GLOBALS *Timeout,
        _LARGE_INTEGER *FxDriverGlobals)
{
  _LARGE_INTEGER *p_li; // rax
  unsigned int v6; // edi
  _LARGE_INTEGER li; // [rsp+48h] [rbp+10h] BYREF

  li.QuadPart = 0LL;
  if ( FxDriverGlobals )
    li = *FxDriverGlobals;
  KeEnterCriticalRegion();
  p_li = &li;
  if ( !FxDriverGlobals )
    p_li = 0LL;
  v6 = KeWaitForSingleObject(this, Executive, 0, 0, p_li);
  if ( v6 == 258 )
  {
    KeLeaveCriticalRegion();
    return 258LL;
  }
  else
  {
    this->m_OwningThread = KeGetCurrentThread();
    return v6;
  }
}
