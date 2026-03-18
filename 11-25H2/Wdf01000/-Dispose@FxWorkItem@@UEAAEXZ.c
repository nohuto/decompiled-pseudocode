/*
 * XREFs of ?Dispose@FxWorkItem@@UEAAEXZ @ 0x140068530
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x140068714 (-WaitForSignal@FxWorkItem@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxWorkItem::Dispose(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  FxVerifierLock **p_m_WorkItemCompleted; // rdi
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v7; // al
  unsigned __int8 v8; // r8
  char v9; // cl
  FxObject *m_Object; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  p_m_WorkItemCompleted = (FxVerifierLock **)&this[-1].m_WorkItemCompleted;
  irql = 0;
  if ( m_ObjectFlags < 0 && *p_m_WorkItemCompleted )
  {
    FxVerifierLock::Lock(*p_m_WorkItemCompleted, &irql, a3);
    v7 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v9 = this->m_ObjectFlags;
  this->m_RunningDown = 1;
  if ( v9 < 0 && *p_m_WorkItemCompleted )
    FxVerifierLock::Unlock(*p_m_WorkItemCompleted, v7, v8);
  else
    KeReleaseSpinLock(p_m_Lock, v7);
  if ( this->m_WorkItemThread != KeGetCurrentThread() )
    FxWorkItem::WaitForSignal(this);
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    m_Object->Release(m_Object, this, 469, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  }
  this->Release(this, this, 475, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  return 1;
}
