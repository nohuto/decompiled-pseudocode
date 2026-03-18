/*
 * XREFs of ?PowerDxStoppedDecideDxState@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A4EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x140032A90 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerDxStoppedDecideDxState(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  _IRP *m_WaitWakeIrp; // rdx

  FxPkgPnp::PowerSendPowerUpEvents(This, a2, a3);
  m_WaitWakeIrp = This->m_SharedPower.m_WaitWakeIrp;
  if ( (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 )
    return m_WaitWakeIrp != 0LL ? 846 : 799;
  else
    return m_WaitWakeIrp != 0LL ? 33615 : 33568;
}
