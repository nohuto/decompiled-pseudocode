/*
 * XREFs of ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x140002F2C
 * Callers:
 *     ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140003D60 (-_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400047C4 (-DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyHandleSystemQueryPower(FxPkgPnp *this, int QueryState)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( QueryState < 5 && !this->m_WakeFromShutdownOptIn && QueryState > this->m_SystemWake )
  {
    WPP_IFR_SF_D(this->m_Globals, 3u, 0xCu, 0x3Du, WPP_FxPkgPnp_cpp_Traceguids, QueryState - 1);
    return (unsigned int)-1073741101;
  }
  return v2;
}
