/*
 * XREFs of ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x14005F8B8
 * Callers:
 *     ?_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14005F810 (-_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z @ 0x14005F880 (-_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z.c)
 *     ?_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14005F8A0 (-_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1400A6428 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxEventQueue::EventQueueWorker(FxEventQueue *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxPkgPnp *m_PkgPnp; // rdi
  KIRQL v4; // al
  KIRQL v5; // r8
  unsigned __int8 m_QueueFlags; // dl
  unsigned __int8 v7; // cl
  _IRP *m_FireAndForgetIrp; // rax
  FxCREvent *m_DeviceRemoveProcessed; // rcx
  FxCREvent *m_WorkItemFinished; // rax
  FxPostProcessInfo info; // [rsp+20h] [rbp-20h] BYREF
  _IRP *v12; // [rsp+50h] [rbp+10h] BYREF

  info.m_Event = 0LL;
  *(_WORD *)&info.m_DeleteObject = 0;
  info.m_FireAndForgetIrp = 0LL;
  m_Globals = this->m_PkgPnp->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  m_PkgPnp = this->m_PkgPnp;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags &= ~1u;
  ++this->m_WorkItemRunningCount;
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v4);
  this->m_EventWorker(this->m_PkgPnp, &info, this->m_EventWorkerContext);
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  m_QueueFlags = this->m_QueueFlags;
  v7 = this->m_WorkItemRunningCount - 1;
  this->m_WorkItemRunningCount = v7;
  if ( (m_QueueFlags & 1) == 0 && !v7 && this->m_QueueHead == this->m_QueueTail )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      m_QueueFlags &= ~4u;
      info.m_DeleteObject = 1;
      this->m_QueueFlags = m_QueueFlags;
    }
    if ( (m_QueueFlags & 2) != 0 )
    {
      m_WorkItemFinished = this->m_WorkItemFinished;
      this->m_WorkItemFinished = 0LL;
      info.m_Event = m_WorkItemFinished;
    }
  }
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v5);
  if ( info.m_SetRemovedEvent )
  {
    m_DeviceRemoveProcessed = (FxCREvent *)m_PkgPnp->m_DeviceRemoveProcessed;
LABEL_16:
    KeSetEvent(&m_DeviceRemoveProcessed->m_Event.m_Event, 0, 0);
    return;
  }
  m_FireAndForgetIrp = info.m_FireAndForgetIrp;
  if ( info.m_FireAndForgetIrp )
  {
    info.m_FireAndForgetIrp = 0LL;
    v12 = m_FireAndForgetIrp;
    m_PkgPnp->FireAndForgetIrp(m_PkgPnp, (FxIrp *)&v12);
  }
  if ( info.m_DeleteObject )
    FxPkgPnp::ProcessDelayedDeletion(m_PkgPnp);
  m_DeviceRemoveProcessed = info.m_Event;
  if ( info.m_Event )
    goto LABEL_16;
}
