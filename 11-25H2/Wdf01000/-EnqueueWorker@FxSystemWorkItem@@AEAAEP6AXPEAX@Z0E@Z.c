/*
 * XREFs of ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1400466C8
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1400461B8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x140046360 (-_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1400464D0 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x140046570 (-_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?QueueWorkItemForIsr@FxInterrupt@@QEAAEXZ @ 0x140046B48 (-QueueWorkItemForIsr@FxInterrupt@@QEAAEXZ.c)
 *     ?DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ @ 0x140046BFC (-DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x140046D30 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1400A6514 (-SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxSystemWorkItem::EnqueueWorker(
        FxSystemWorkItem *this,
        void (__fastcall *Func)(void *),
        void *Parameter,
        unsigned __int8 AssertIfAlreadyQueued)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 *p_m_Lock; // rbp
  unsigned __int8 v10; // di
  unsigned __int8 v11; // r8
  FxVerifierLock **p_m_WorkItemRunningCount; // rsi
  unsigned __int8 v13; // r8
  FxVerifierLock *v15; // rcx
  unsigned __int8 v16; // r8
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (p_m_WorkItemRunningCount = (FxVerifierLock **)&this[-1].m_WorkItemRunningCount,
        (v15 = *(FxVerifierLock **)&this[-1].m_WorkItemRunningCount) != 0LL) )
  {
    FxVerifierLock::Lock(v15, &irql, (unsigned __int8)Parameter);
    v10 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v10 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v10;
    p_m_WorkItemRunningCount = (FxVerifierLock **)&this[-1].m_WorkItemRunningCount;
  }
  if ( this->m_Enqueued )
  {
    if ( AssertIfAlreadyQueued )
    {
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxSystemWorkitem_cpp_Traceguids, this, this->m_WorkItem.m_WorkItem);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_WorkItemRunningCount )
      FxVerifierLock::Unlock(*p_m_WorkItemRunningCount, v10, v11);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v10);
    return 0;
  }
  if ( this->m_RunningDown )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, this);
    FxVerifierDbgBreakPoint(m_Globals);
    FxNonPagedObject::Unlock(this, v10, v16);
    return 0;
  }
  KeClearEvent(&this->m_WorkItemCompleted.m_Event.m_Event);
  this->m_Callback = Func;
  this->m_CallbackArg = Parameter;
  this->m_Enqueued = 1;
  _InterlockedIncrement(&this->m_OutStandingWorkItem);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_WorkItemRunningCount )
    FxVerifierLock::Unlock(*p_m_WorkItemRunningCount, irql, v13);
  else
    KeReleaseSpinLock(p_m_Lock, irql);
  IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxSystemWorkItem::_WorkItemThunk, DelayedWorkQueue, this);
  return 1;
}
