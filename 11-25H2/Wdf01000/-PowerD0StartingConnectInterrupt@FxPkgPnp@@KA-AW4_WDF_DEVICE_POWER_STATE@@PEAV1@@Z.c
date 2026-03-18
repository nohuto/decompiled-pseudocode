/*
 * XREFs of ?PowerD0StartingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140068CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@FxPnpDeviceD0EntryPostInterruptsEnabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x140019BC8 (-Invoke@FxPnpDeviceD0EntryPostInterruptsEnabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE.c)
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x140068F18 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x14009CA64 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingConnectInterrupt(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v5; // rdx
  int v6; // eax
  int globals; // r10d
  FxDeviceBase *v8; // rax
  const void *_a2; // r8
  bool v10; // zf
  _DEVICE_OBJECT *_a3; // rax

  if ( FxPkgPnp::NotifyResourceObjectsD0(This, 0) < 0 )
    return 833LL;
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  FxPnpDeviceD0EntryPostInterruptsEnabled::Invoke(
    (FxPnpDeviceRelationsQuery *)&This->m_DeviceD0EntryPostInterruptsEnabled,
    v5,
    This->m_DevicePowerState);
  globals = v6;
  if ( v6 < 0 )
  {
    v8 = This->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v10 = v8->m_ObjectSize == 0;
    _a3 = v8->m_DeviceObject.m_DeviceObject;
    if ( v10 )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      This->m_DevicePowerState,
      0xCu,
      0xFu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      This->m_DevicePowerState,
      globals);
    return 833LL;
  }
  return 785LL;
}
