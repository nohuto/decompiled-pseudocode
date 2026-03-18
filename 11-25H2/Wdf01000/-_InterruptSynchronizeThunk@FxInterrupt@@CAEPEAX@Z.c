/*
 * XREFs of ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x140064620
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x14003D9A0 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x14003DAC0 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

char __fastcall FxInterrupt::_InterruptSynchronizeThunk(FxInterrupt **SyncContext)
{
  FxInterrupt *v1; // r8
  FxInterrupt *v3; // rax
  FxInterrupt *v4; // rdx
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int64 v6; // r8
  char v7; // di
  unsigned __int64 v9; // rcx

  v1 = *SyncContext;
  if ( (*SyncContext)->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(*SyncContext);
    v9 = (unsigned __int64)*SyncContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !(*SyncContext)->m_ObjectSize )
      v9 = 0LL;
    v7 = ((__int64 (__fastcall *)(unsigned __int64, FxInterrupt *))SyncContext[1])(v9, SyncContext[2]);
    FxInterrupt::ReleaseLock(*SyncContext);
  }
  else
  {
    v3 = SyncContext[1];
    v4 = SyncContext[2];
    m_ObjectSize = v1->m_ObjectSize;
    v6 = (unsigned __int64)v1 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v6 = 0LL;
    return ((__int64 (__fastcall *)(unsigned __int64, FxInterrupt *))v3)(v6, v4);
  }
  return v7;
}
