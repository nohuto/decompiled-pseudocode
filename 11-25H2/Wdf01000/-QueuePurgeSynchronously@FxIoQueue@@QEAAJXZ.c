/*
 * XREFs of ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x140015354
 * Callers:
 *     imp_WdfIoQueuePurgeSynchronously @ 0x140017100 (imp_WdfIoQueuePurgeSynchronously.c)
 * Callees:
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14001577C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     WPP_IFR_SF_dq @ 0x1400808C0 (WPP_IFR_SF_dq.c)
 */

__int64 __fastcall FxIoQueue::QueuePurgeSynchronously(FxIoQueue *this)
{
  int v2; // ebp
  unsigned __int16 *p_m_ObjectSize; // rsi
  const void *v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a2; // rax
  MxEvent eventOnStack; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+88h] [rbp+10h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v2 = FxIoQueue::QueuePurge(this, 1u, 1u, FxIoQueue::_PurgeComplete, &eventOnStack);
  if ( v2 >= 0 )
  {
    p_m_ObjectSize = &this->m_ObjectSize;
    v4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*p_m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(
        this->m_Globals,
        5u,
        0xDu,
        0x4Bu,
        WPP_FxIoQueue_cpp_Traceguids,
        this->m_Queue.m_RequestCount + this->m_DriverIoCount,
        _a2);
    }
    KeEnterCriticalRegion();
    m_Globals = this->m_Globals;
    if ( !*p_m_ObjectSize )
      v4 = 0LL;
    v9 = -10000000LL * m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec;
    while ( KeWaitForSingleObject(
              &eventOnStack,
              Executive,
              0,
              0,
              (PLARGE_INTEGER)((unsigned __int64)&v9 & -(__int64)(v9 != 0))) == 258 )
    {
      DbgPrint("Thread 0x%p is %s 0x%p\n", KeGetCurrentThread(), "waiting for queue to purge, WDFQUEUE", v4);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v2;
}
