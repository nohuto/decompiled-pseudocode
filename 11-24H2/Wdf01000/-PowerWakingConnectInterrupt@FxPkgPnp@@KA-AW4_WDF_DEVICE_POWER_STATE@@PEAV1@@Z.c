/*
 * XREFs of ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140067490
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x140067558 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x14009CB34 (WPP_IFR_SF_qqLd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterrupt(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v5; // rcx
  int globals; // r10d
  FxDeviceBase *v8; // rax
  const void *_a2; // r8
  bool v10; // zf
  _DEVICE_OBJECT *_a3; // rax

  if ( FxPkgPnp::NotifyResourceObjectsD0(This, 8u) >= 0 )
  {
    m_DeviceBase = This->m_DeviceBase;
    m_Method = This->m_DeviceD0EntryPostInterruptsEnabled.m_Method;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( !m_Method )
      return 825LL;
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    globals = m_Method((WDFDEVICE__ *)v5, (_WDF_POWER_DEVICE_STATE)This->m_DevicePowerState);
    if ( globals >= 0 )
      return 825LL;
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
      0x18u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      This->m_DevicePowerState,
      globals);
  }
  return 823LL;
}
