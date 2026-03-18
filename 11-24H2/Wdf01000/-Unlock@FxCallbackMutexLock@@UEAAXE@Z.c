/*
 * XREFs of ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x140062EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckOwnership@FxCallbackLock@@QEAAXXZ @ 0x140062F0C (-CheckOwnership@FxCallbackLock@@QEAAXXZ.c)
 */

void __fastcall FxCallbackMutexLock::Unlock(FxCallbackMutexLock *this, KIRQL PreviousIrql)
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
    {
      FxVerifierLock::Unlock(m_Verifier, PreviousIrql, v4);
    }
    else
    {
      ExReleaseFastMutexUnsafe(&this->m_Lock.m_Lock);
      KeLeaveCriticalRegion();
    }
  }
}
