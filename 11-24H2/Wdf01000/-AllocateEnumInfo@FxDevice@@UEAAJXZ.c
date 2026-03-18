/*
 * XREFs of ?AllocateEnumInfo@FxDevice@@UEAAJXZ @ 0x140095390
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x140047868 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 */

__int64 __fastcall FxDevice::AllocateEnumInfo(FxDevice *this, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp *m_PkgPnp; // rcx

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
    return FxPkgPnp::AllocateEnumInfo(m_PkgPnp, a2, a3);
  else
    return 0LL;
}
