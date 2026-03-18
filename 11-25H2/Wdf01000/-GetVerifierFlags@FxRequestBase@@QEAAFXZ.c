/*
 * XREFs of ?GetVerifierFlags@FxRequestBase@@QEAAFXZ @ 0x14007EBB8
 * Callers:
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14000FB50 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

__int64 __fastcall FxRequestBase::GetVerifierFlags(FxRequestBase *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  FxVerifierLock *v5; // rcx
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // al
  unsigned __int16 m_VerifierFlags; // bx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v5 = *(FxVerifierLock **)&this[-1].m_IrpCompletionReferenceCount) != 0LL )
  {
    FxVerifierLock::Lock(v5, &irql, a3);
    v7 = irql;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  m_VerifierFlags = this->m_VerifierFlags;
  FxNonPagedObject::Unlock(this, v7, v6);
  return m_VerifierFlags;
}
