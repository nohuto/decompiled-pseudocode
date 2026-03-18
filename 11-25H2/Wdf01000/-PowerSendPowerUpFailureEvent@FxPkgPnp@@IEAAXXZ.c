/*
 * XREFs of ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1400A5444
 * Callers:
 *     ?PowerInitialPowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A51D0 (-PowerInitialPowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerReportPowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5360 (-PowerReportPowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x14001AAC0 (-PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x14001E738 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x14003D074 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x140084394 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerSendPowerUpFailureEvent(FxPkgPnp *this)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // r8

  FxPkgPnp::SetInternalFailure(this);
  FxPkgPnp::PowerSendIdlePowerEvent(this, PowerIdleEventPowerUpFailed);
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpFailed, v2);
  if ( !this->m_ReleaseHardwareAfterDescendantsOnFailure )
    FxPkgPnp::PnpProcessEvent(this, PnpEventPowerUpFailed, v3);
}
