/*
 * XREFs of ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x14003D1D4
 * Callers:
 *     imp_WdfIoQueueStopSynchronously @ 0x14003D2F0 (imp_WdfIoQueueStopSynchronously.c)
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1400A0990 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 * Callees:
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x140007008 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14003C680 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     WPP_IFR_SF_dq @ 0x140080380 (WPP_IFR_SF_dq.c)
 */

__int64 __fastcall FxIoQueue::QueueIdleSynchronously(FxIoQueue *this, unsigned __int8 CancelRequests)
{
  int v4; // esi
  unsigned __int16 *p_m_ObjectSize; // rbx
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v9; // rdi
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v4 = FxIoQueue::QueueIdle(this, CancelRequests, FxIoQueue::_PurgeComplete, &eventOnStack);
  if ( v4 >= 0 )
  {
    p_m_ObjectSize = &this->m_ObjectSize;
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*p_m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(this->m_Globals, 5u, 0xDu, 0x45u, WPP_FxIoQueue_cpp_Traceguids, this->m_DriverIoCount, _a2);
    }
    KeEnterCriticalRegion();
    m_Globals = this->m_Globals;
    v9 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*p_m_ObjectSize )
      v9 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      m_Globals,
      &eventOnStack,
      "waiting for queue to stop, WDFQUEUE",
      v9,
      m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}
