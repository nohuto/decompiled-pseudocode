/*
 * XREFs of ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x140060058
 * Callers:
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x140037090 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 * Callees:
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140082FF0 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxRequestBase::VerifierClearFormatted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
      FxRequestBase::ClearVerifierFlags(this, 128);
  }
}
