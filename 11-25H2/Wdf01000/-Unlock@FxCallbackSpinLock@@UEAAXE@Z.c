/*
 * XREFs of ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x1400644E0
 * Callers:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x14001AB4C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckOwnership@FxCallbackLock@@QEAAXXZ @ 0x1400645AC (-CheckOwnership@FxCallbackLock@@QEAAXXZ.c)
 */

void __fastcall FxCallbackSpinLock::Unlock(FxCallbackSpinLock *this, KIRQL PreviousIrql)
{
  unsigned __int8 v4; // r8
  unsigned int m_RecursionCount; // eax
  FxVerifierLock *m_Verifier; // rcx

  FxCallbackLock::CheckOwnership(this);
  m_RecursionCount = this->m_RecursionCount;
  if ( m_RecursionCount )
  {
    this->m_RecursionCount = m_RecursionCount - 1;
  }
  else
  {
    this->m_OwnerThread = 0LL;
    m_Verifier = this->m_Verifier;
    if ( m_Verifier )
      FxVerifierLock::Unlock(m_Verifier, PreviousIrql, v4);
    else
      KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
  }
}
