/*
 * XREFs of ?_S0IdleSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1400A6730
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x14003B310 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::_S0IdleSetInstance(
        FxDevice *Device,
        FxWmiInstanceInternal *__formal,
        unsigned int a3,
        unsigned __int8 *InBuffer)
{
  FxPkgPnp::PowerPolicySetS0IdleState(Device->m_PkgPnp, *InBuffer);
  return 0LL;
}
