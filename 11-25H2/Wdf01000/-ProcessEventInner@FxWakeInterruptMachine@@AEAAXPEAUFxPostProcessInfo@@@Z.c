/*
 * XREFs of ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x14003CE14
 * Callers:
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x14003CC50 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1400AA520 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x14001D540 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxWakeInterruptMachine::ProcessEventInner(FxWakeInterruptMachine *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v5; // al
  __int64 m_QueueHead; // rdx
  FxWakeInterruptEvents _a4; // ebp
  __int64 m_CurrentState; // r10
  int _a3; // edi
  unsigned int i; // eax
  const FxWakeInterruptTargetState *TargetStates; // rdx
  FxPkgPnp *v12; // rcx
  FxDeviceBase *v13; // r10
  _FX_DRIVER_GLOBALS *v14; // rcx
  const void *_a1; // r8
  __int64 m_HistoryIndex; // r8
  FxWakeInterruptStates (__fastcall *StateFunc)(FxWakeInterruptMachine *); // rax
  KIRQL v18; // r9
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v22; // rdx

  p_m_Lock = &this->m_QueueLock.m_Lock;
  while ( 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = this->m_QueueHead;
    if ( (_BYTE)m_QueueHead == this->m_QueueTail )
      break;
    _a4 = this->m_Queue[m_QueueHead];
    this->m_QueueHead = ((int)m_QueueHead + 1) % (unsigned int)this->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v5);
    m_CurrentState = this->m_CurrentState;
    _a3 = 10;
    for ( i = 0; i < FxWakeInterruptMachine::m_StateTable[m_CurrentState - 1].TargetStatesCount; ++i )
    {
      TargetStates = FxWakeInterruptMachine::m_StateTable[m_CurrentState - 1].TargetStates;
      if ( TargetStates[i].WakeInterruptEvent == _a4 )
      {
        _a3 = TargetStates[i].WakeInterruptState;
        if ( _a3 != 10 )
          goto LABEL_8;
        break;
      }
    }
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    m_Globals = m_PkgPnp->m_Globals;
    v22 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      v22 = 0LL;
    WPP_IFR_SF_qqLL(
      m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_WakeInterruptStateMachine_cpp_Traceguids,
      v22,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      m_CurrentState,
      _a4);
LABEL_8:
    while ( _a3 != 10 )
    {
      v12 = this->m_PkgPnp;
      v13 = v12->m_DeviceBase;
      v14 = v12->m_Globals;
      _a1 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v13->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        v14,
        4u,
        0x15u,
        0xCu,
        WPP_WakeInterruptStateMachine_cpp_Traceguids,
        _a1,
        v13->m_DeviceObject.m_DeviceObject,
        _a3,
        this->m_CurrentState);
      m_HistoryIndex = this->m_HistoryIndex;
      this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
      this->m_States.History[m_HistoryIndex] = _a3;
      this->m_CurrentState = _a3;
      StateFunc = FxWakeInterruptMachine::m_StateTable[(unsigned __int8)_a3 - 1].StateFunc;
      if ( !StateFunc )
        break;
      _a3 = StateFunc(this);
    }
  }
  FxEventQueue::GetFinishedState(this, Info);
  KeReleaseSpinLock(p_m_Lock, v18);
}
