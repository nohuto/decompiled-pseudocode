/*
 * XREFs of ?Dispose@FxIoQueue@@UEAAEXZ @ 0x140015500
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?RemoveIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1400156EC (-RemoveIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14001577C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1400A160C (-FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxIoQueue::Dispose(FxIoQueue *this)
{
  bool v2; // zf
  unsigned __int8 v3; // r8
  KIRQL v4; // di
  FxPkgIo *m_PkgIo; // rcx
  unsigned __int16 v6; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *v8; // rdi
  unsigned __int8 v9; // dl
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rax
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxVerifierLock *v13; // rcx
  __int64 irql; // [rsp+50h] [rbp+8h] BYREF

  v2 = (this->m_ObjectFlags & 8) == 0;
  LOBYTE(irql) = 0;
  if ( !v2 )
  {
    FxIoQueue::QueuePurge(this, 1u, 1u, 0LL, 0LL);
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v13 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v13, (unsigned __int8 *)&irql, v3);
      v4 = irql;
    }
    else
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      LOBYTE(irql) = v4;
    }
    m_PkgIo = this->m_PkgIo;
    this->m_Disposing = 1;
    FxPkgIo::RemoveIoQueue(m_PkgIo, this);
    FxIoQueue::DispatchEvents(this, v4, 0LL, v6);
    m_Globals = this->m_Globals;
    v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v8 = 0LL;
    irql = -10000000LL * m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec;
    while ( KeWaitForSingleObject(
              &this->m_FinishDisposing,
              Executive,
              0,
              0,
              (PLARGE_INTEGER)((unsigned __int64)&irql & -(__int64)(irql != 0))) == 258 )
    {
      DbgPrint("Thread 0x%p is %s 0x%p\n", KeGetCurrentThread(), "waiting for the queue to be deleted, WDFQUEUE", v8);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
    if ( this->m_SupportForwardProgress )
      FxIoQueue::FreeAllReservedRequests(this, v9);
    m_FwdProgContext = this->m_FwdProgContext;
    if ( m_FwdProgContext )
    {
      m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 0;
      FxPoolFree(this->m_FwdProgContext);
      this->m_FwdProgContext = 0LL;
    }
    m_SystemWorkItem = this->m_SystemWorkItem;
    if ( m_SystemWorkItem )
    {
      m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
      this->m_SystemWorkItem = 0LL;
    }
    if ( this->m_DpcQueued )
      KeFlushQueuedDpcs();
  }
  return 1;
}
