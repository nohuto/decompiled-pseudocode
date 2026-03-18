/*
 * XREFs of ?CheckOwnership@FxCallbackLock@@QEAAXXZ @ 0x140062F0C
 * Callers:
 *     ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x140062E40 (-Unlock@FxCallbackSpinLock@@UEAAXE@Z.c)
 *     ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x140062EA0 (-Unlock@FxCallbackMutexLock@@UEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxCallbackLock::CheckOwnership(FxCallbackLock *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierLock )
  {
    if ( !this->IsOwner(this) )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxCallbackLock_hpp_Traceguids, this);
      FxVerifierDbgBreakPoint(m_Globals);
    }
  }
}
