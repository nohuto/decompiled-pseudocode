/*
 * XREFs of ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x140025000
 * Callers:
 *     imp_WdfDeviceStopIdleActual @ 0x1400141F0 (imp_WdfDeviceStopIdleActual.c)
 *     StopIdleWorker @ 0x140014800 (StopIdleWorker.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x140024BF0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x140032D98 (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1400663C0 (-_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x140066814 (-EnableTimer@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?Stop@FxPowerIdleMachine@@QEAAXXZ @ 0x140082380 (-Stop@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1400A6F2C (-Start@FxPowerIdleMachine@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxPowerIdleMachine::ProcessEventLocked(FxPowerIdleMachine *this, FxPowerIdleEvents Event)
{
  FxTagTracker *m_TagTracker; // rbp
  __int64 m_CurrentIdleState; // rsi
  unsigned int i; // eax
  const FxPowerIdleTargetState *TargetStates; // rcx
  FxPowerIdleStates _a3; // ebx
  unsigned __int64 Tag; // rdx
  const void *_a1; // rcx
  char v11; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  unsigned __int64 v13; // r8
  const void *v14; // rdx

  m_TagTracker = this[2].m_TagTracker;
  this->m_EventHistory[this->m_EventHistoryIndex] = Event;
  m_CurrentIdleState = this->m_CurrentIdleState;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  for ( i = 0; i < FxPowerIdleMachine::m_StateTable[m_CurrentIdleState - 1].TargetStatesCount; ++i )
  {
    TargetStates = FxPowerIdleMachine::m_StateTable[m_CurrentIdleState - 1].TargetStates;
    if ( TargetStates[i].PowerIdleEvent == Event )
    {
      _a3 = TargetStates[i].PowerIdleState;
      if ( _a3 != FxIdleMax )
      {
        do
        {
          Tag = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
          _a1 = (const void *)(Tag ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(Tag + 10) )
            _a1 = 0LL;
          WPP_IFR_SF_qqLL(
            (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
            4u,
            0x15u,
            0x11u,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            _a1,
            *(const void **)(Tag + 144),
            _a3,
            this->m_CurrentIdleState);
          this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
          v11 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = _a3;
          this->m_StateHistoryIndex = v11 & 7;
          StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
          if ( !StateFunc )
            break;
          _a3 = StateFunc(this);
        }
        while ( _a3 != FxIdleMax );
        return;
      }
      break;
    }
  }
  switch ( Event )
  {
    case PowerIdleEventIoDecrement:
      return;
    case PowerIdleEventEnabled:
      if ( (this->m_Flags & 1) != 0 )
        return;
      break;
    case PowerIdleEventIoIncrement:
      return;
  }
  v13 = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
  v14 = (const void *)(v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*(_WORD *)(v13 + 10) )
    v14 = 0LL;
  WPP_IFR_SF_qqLL(
    (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
    4u,
    0xCu,
    0x10u,
    WPP_PowerIdleStateMachine_cpp_Traceguids,
    v14,
    *(const void **)(v13 + 144),
    m_CurrentIdleState,
    Event);
}
