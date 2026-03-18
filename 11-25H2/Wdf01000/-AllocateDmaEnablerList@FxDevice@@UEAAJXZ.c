/*
 * XREFs of ?AllocateDmaEnablerList@FxDevice@@UEAAJXZ @ 0x140094CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ @ 0x1400A7228 (-AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ.c)
 */

int __fastcall FxDevice::AllocateDmaEnablerList(FxDevice *this)
{
  FxPkgPnp *m_PkgPnp; // rcx

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
    return FxPkgPnp::AllocateDmaEnablerList(m_PkgPnp);
  else
    return 0;
}
