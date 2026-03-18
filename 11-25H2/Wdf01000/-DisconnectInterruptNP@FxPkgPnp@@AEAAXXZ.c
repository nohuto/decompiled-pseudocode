/*
 * XREFs of ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1400A4A78
 * Callers:
 *     ?PowerGotoDxNPFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A4F90 (-PowerGotoDxNPFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedDerefParentNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5620 (-PowerUpFailedDerefParentNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5650 (-PowerUpFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x14001BBCC (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 */

void __fastcall FxPkgPnp::DisconnectInterruptNP(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a2; // rdx

  m_DeviceBase = this->m_DeviceBase;
  _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_DeviceBase->m_ObjectSize )
    _a2 = 0LL;
  WPP_IFR_SF_qq(
    this->m_Globals,
    2u,
    0xCu,
    0x22u,
    WPP_PowerStateMachine_cpp_Traceguids,
    m_DeviceBase->m_DeviceObject.m_DeviceObject,
    _a2);
  FxPkgPnp::NotifyResourceObjectsDx(this, 4u);
}
