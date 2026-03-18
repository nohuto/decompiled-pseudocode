/*
 * XREFs of ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1400510C4
 * Callers:
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x140050A64 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxRequestBase::VerifierSetFormatted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
      FxRequestBase::SetVerifierFlags(this, 128);
  }
}
