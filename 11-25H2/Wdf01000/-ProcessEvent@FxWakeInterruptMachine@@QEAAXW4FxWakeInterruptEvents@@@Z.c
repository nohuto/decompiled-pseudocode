/*
 * XREFs of ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x14003CC50
 * Callers:
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x14003CBEC (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x14003DB84 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001C030 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x14001EA68 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x14003C05C (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x14003CE14 (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxWakeInterruptMachine::ProcessEvent(FxWakeInterruptMachine *this, FxWakeInterruptEvents Event)
{
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v5; // al
  KIRQL v6; // si
  __int64 m_QueueTail; // rcx
  NTSTATUS v8; // ecx
  char v9; // al
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  FxPostProcessInfo info; // [rsp+50h] [rbp-38h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF

  p_m_Lock = &this->m_QueueLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  v6 = v5;
  m_QueueTail = this->m_QueueTail;
  if ( (this->m_QueueDepth + this->m_QueueHead - 1) % this->m_QueueDepth != this->m_QueueTail
                                                                          % (unsigned int)this->m_QueueDepth )
  {
    if ( (this->m_QueueFlags & 2) == 0 )
    {
      this->m_QueueTail = ((int)m_QueueTail + 1) % (unsigned int)this->m_QueueDepth;
      this->m_Queue[m_QueueTail] = Event;
      KeReleaseSpinLock(p_m_Lock, v5);
      if ( v6 )
      {
LABEL_8:
        FxThreadedEventQueue::QueueToThread(this);
        return;
      }
      Timeout.QuadPart = 0LL;
      KeEnterCriticalRegion();
      v8 = KeWaitForSingleObject(&this->m_StateMachineLock, Executive, 0, 0, &Timeout);
      if ( v8 == 258 )
      {
        KeLeaveCriticalRegion();
      }
      else
      {
        this->m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
        v9 = 1;
        if ( v8 >= 0 )
          goto LABEL_6;
      }
      v9 = 0;
LABEL_6:
      if ( v9 )
      {
        info.m_Event = 0LL;
        *(_WORD *)&info.m_DeleteObject = 0;
        info.m_FireAndForgetIrp = 0LL;
        FxWakeInterruptMachine::ProcessEventInner(this, &info);
        FxWaitLockInternal::ReleaseLock(&this->m_StateMachineLock, v10);
        FxPostProcessInfo::Evaluate(&info, this->m_PkgPnp);
        return;
      }
      goto LABEL_8;
    }
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    m_Globals = m_PkgPnp->m_Globals;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      m_Globals,
      4u,
      0xCu,
      0xAu,
      WPP_WakeInterruptStateMachine_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      this->m_CurrentState,
      Event);
  }
  KeReleaseSpinLock(p_m_Lock, v6);
}
