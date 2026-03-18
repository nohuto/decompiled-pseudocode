/*
 * XREFs of ?AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x140094A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1400673E4 (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxDevice::AddDmaEnabler(FxDevice *this, unsigned __int64 Enabler)
{
  FxPkgPnp *m_PkgPnp; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v5; // rdx

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
  {
    m_Globals = m_PkgPnp->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v5 = (const void *)(Enabler ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(Enabler + 10) )
        v5 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0xCu, WPP_FxPkgPnpKM_cpp_Traceguids, (const void *)Enabler, v5);
    }
    FxTransactionedList::Add(m_PkgPnp->m_DmaEnablerList, m_PkgPnp->m_Globals, (FxTransactionedEntry *)(Enabler + 120));
  }
}
