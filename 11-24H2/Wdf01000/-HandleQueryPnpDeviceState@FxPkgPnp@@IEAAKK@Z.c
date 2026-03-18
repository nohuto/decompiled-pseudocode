/*
 * XREFs of ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x14002F110
 * Callers:
 *     ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14002EED0 (-_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x14002F3F4 (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x14002F308 (-IsInSpecialUse@FxPkgPnp@@IEAAEXZ.c)
 *     ?DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ @ 0x14006F080 (-DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ.c)
 *     ?IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ @ 0x14006F0BC (-IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryPnpDeviceState(FxPkgPnp *this, unsigned int PnpDeviceState)
{
  unsigned __int8 v3; // al
  unsigned int v4; // edx
  unsigned int v5; // ebx
  FxCompanionTarget *m_CompanionTarget; // rdi

  v3 = FxPkgPnp::IsInSpecialUse(this);
  v5 = v4 | 0x20;
  if ( !v3 )
    v5 = v4;
  if ( this->m_InternalFailure || this->m_Failed )
    v5 |= 4u;
  m_CompanionTarget = this->m_CompanionTarget;
  if ( m_CompanionTarget && FxCompanionTarget::IncrementPendingTaskCountWithFloor(m_CompanionTarget) >= 0 )
  {
    m_CompanionTarget->m_RdDeviceCompanion->QueryPnPDeviceStateNotification(m_CompanionTarget->m_RdDeviceCompanion);
    FxCompanionTarget::DecrementPendingTaskCount(m_CompanionTarget);
  }
  return v5;
}
