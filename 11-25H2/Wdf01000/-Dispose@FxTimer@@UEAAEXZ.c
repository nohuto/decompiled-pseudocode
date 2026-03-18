/*
 * XREFs of ?Dispose@FxTimer@@UEAAEXZ @ 0x140016850
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x140014F84 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

unsigned __int8 __fastcall FxTimer::Dispose(FxTimer *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // r8
  void (__fastcall *m_Callback)(WDFTIMER__ *); // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (m_Callback = this[-1].m_Callback) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_Callback, &irql, a3);
    v5 = irql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  this->m_RunningDown = 1;
  FxNonPagedObject::Unlock(this, v5, v6);
  FxTimer::FlushAndRundown(this);
  return 1;
}
