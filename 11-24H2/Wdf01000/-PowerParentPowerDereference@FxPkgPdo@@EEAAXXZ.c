/*
 * XREFs of ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x140030270
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x1400302A0 (-PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPdo::PowerParentPowerDereference(FxPkgPdo *this)
{
  if ( this->m_HasPowerDependencyOnParent )
    FxPkgPnp::PowerPolicyChildPoweredDown(*(FxPkgPnp **)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL));
}
