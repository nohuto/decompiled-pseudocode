/*
 * XREFs of ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1400A1244
 * Callers:
 *     imp_WdfIoQueueDrainSynchronously @ 0x1400A0920 (imp_WdfIoQueueDrainSynchronously.c)
 * Callees:
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x140007008 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14003BDFC (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     WPP_IFR_SF_dq @ 0x140080380 (WPP_IFR_SF_dq.c)
 */

__int64 __fastcall FxIoQueue::QueueDrainSynchronously(FxIoQueue *this)
{
  int v2; // esi
  unsigned __int16 *p_m_ObjectSize; // rdi
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v6; // rbx
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v2 = FxIoQueue::QueuePurge(
         this,
         0,
         0,
         (void (__fastcall *)(WDFQUEUE__ *, void *))FxIoQueue::_PurgeComplete,
         &eventOnStack);
  if ( v2 >= 0 )
  {
    p_m_ObjectSize = &this->m_ObjectSize;
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*p_m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(
        this->m_Globals,
        5u,
        0xDu,
        0x4Cu,
        WPP_FxIoQueue_cpp_Traceguids,
        this->m_Queue.m_RequestCount + this->m_DriverIoCount,
        _a2);
    }
    KeEnterCriticalRegion();
    m_Globals = this->m_Globals;
    v6 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*p_m_ObjectSize )
      v6 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      m_Globals,
      &eventOnStack,
      "waiting for queue to drain, WDFQUEUE",
      v6,
      m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v2;
}
