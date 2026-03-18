/*
 * XREFs of ?CheckOwnership@FxCallbackLock@@QEAAXXZ @ 0x1400645AC
 * Callers:
 *     ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x1400644E0 (-Unlock@FxCallbackSpinLock@@UEAAXE@Z.c)
 *     ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x140064540 (-Unlock@FxCallbackMutexLock@@UEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
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
