/*
 * XREFs of ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x140024BF0
 * Callers:
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x14006B428 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400775E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1400A6428 (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x140025000 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPowerIdleMachine::PowerReferenceWorker(
        FxPowerIdleMachine *this,
        unsigned __int8 WaitForD0,
        FxPowerReferenceFlags Flags,
        void *Tag,
        int Line,
        char *File)
{
  void *v6; // rsi
  char v8; // r15
  unsigned int v9; // r13d
  KIRQL v10; // al
  unsigned __int8 m_Flags; // r9
  KIRQL v12; // bp
  __int64 m_EventHistoryIndex; // rax
  FxTagTracker *m_TagTracker; // r14
  unsigned int i; // eax
  const FxPowerIdleTargetState *v16; // r8
  LONG StateEvent; // eax
  unsigned __int64 *p_m_Lock; // rcx
  unsigned int v19; // ebx
  FxTagTracker *v20; // rcx
  FxPowerIdleStates _a3; // ebx
  unsigned __int64 v23; // rdx
  const void *_a1; // rcx
  char v25; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxTagTracker *v27; // r15
  _FX_DRIVER_GLOBALS *m_OwningObject; // rcx
  KIRQL v29; // bp
  unsigned __int8 v30; // al
  unsigned __int64 v31; // r8
  __int16 v32; // ax
  const void *v33; // r8
  _FX_DRIVER_GLOBALS *v34; // r11
  unsigned __int8 FxVerboseOn; // cl
  unsigned __int64 v36; // r10
  __int16 v37; // ax
  const void *v38; // r10
  unsigned __int64 v39; // rdx
  __int16 v40; // ax
  const void *v41; // rdx
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *_a2b; // [rsp+30h] [rbp-58h]

  v6 = Tag;
  v8 = Flags;
  v9 = 0;
  v10 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_Flags = this->m_Flags;
  v12 = v10;
  if ( (m_Flags & 0x10) != 0 || (m_Flags & 0x20) == 0 )
  {
    KeReleaseSpinLock(&this->m_Lock.m_Lock, v10);
    v19 = -1073741101;
  }
  else
  {
    m_EventHistoryIndex = this->m_EventHistoryIndex;
    v9 = ++this->m_IoCount;
    m_TagTracker = this[2].m_TagTracker;
    this->m_EventHistory[m_EventHistoryIndex] = PowerIdleEventIoIncrement;
    this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
    for ( i = 0; i < FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStatesCount; ++i )
    {
      v16 = &FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStates[i];
      if ( v16->PowerIdleEvent == PowerIdleEventIoIncrement )
      {
        for ( _a3 = v16->PowerIdleState; _a3 != FxIdleMax; _a3 = StateFunc(this) )
        {
          v23 = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
          _a1 = (const void *)(v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v23 + 10) )
            _a1 = 0LL;
          WPP_IFR_SF_qqLL(
            (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
            4u,
            0x15u,
            0x11u,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            _a1,
            *(const void **)(v23 + 144),
            _a3,
            this->m_CurrentIdleState);
          this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
          v25 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = _a3;
          this->m_StateHistoryIndex = v25 & 7;
          StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
          if ( !StateFunc )
            break;
        }
        break;
      }
    }
    StateEvent = KeReadStateEvent(&this->m_D0NotificationEvent.m_Event.m_Event);
    p_m_Lock = &this->m_Lock.m_Lock;
    if ( StateEvent )
    {
      KeReleaseSpinLock(p_m_Lock, v12);
      v19 = 0;
    }
    else
    {
      if ( (v8 & 1) != 0 )
        this->m_Flags |= 0x80u;
      KeReleaseSpinLock(p_m_Lock, v12);
      v19 = 259;
      if ( WaitForD0 )
      {
        v27 = this[2].m_TagTracker;
        m_OwningObject = (_FX_DRIVER_GLOBALS *)v27->m_OwningObject;
        if ( m_OwningObject->FxVerboseOn )
        {
          v31 = (unsigned __int64)v27->m_TagHistory[0].Tag;
          _a2 = KeGetCurrentThread();
          v32 = *(_WORD *)(v31 + 10);
          v33 = (const void *)(v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v32 )
            v33 = 0LL;
          WPP_IFR_SF_qq(m_OwningObject, 5u, 0xCu, 0xCu, WPP_PowerIdleStateMachine_cpp_Traceguids, v33, _a2);
        }
        FxCREvent::EnterCRAndWaitAndLeave(&this->m_D0NotificationEvent);
        v29 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
        v30 = this->m_Flags;
        if ( (v30 & 0x30) == 0x20 )
        {
          v19 = 0;
        }
        else
        {
          v34 = (_FX_DRIVER_GLOBALS *)v27->m_OwningObject;
          v19 = -1073741101;
          FxVerboseOn = v34->FxVerboseOn;
          if ( (v30 & 0x10) != 0 )
          {
            if ( FxVerboseOn )
            {
              v36 = (unsigned __int64)v27->m_TagHistory[0].Tag;
              _a2a = KeGetCurrentThread();
              v37 = *(_WORD *)(v36 + 10);
              v38 = (const void *)(v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v37 )
                v38 = 0LL;
              WPP_IFR_SF_qqd(v34, 5u, 0xCu, 0xDu, WPP_PowerIdleStateMachine_cpp_Traceguids, v38, _a2a, 0xC00002D3);
            }
          }
          else if ( FxVerboseOn )
          {
            v39 = (unsigned __int64)v27->m_TagHistory[0].Tag;
            _a2b = KeGetCurrentThread();
            v40 = *(_WORD *)(v39 + 10);
            v41 = (const void *)(v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v40 )
              v41 = 0LL;
            WPP_IFR_SF_qqd(v34, 5u, 0xCu, 0xEu, WPP_PowerIdleStateMachine_cpp_Traceguids, v41, _a2b, 0xC00002D3);
          }
          --this->m_IoCount;
          FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
        }
        KeReleaseSpinLock(&this->m_Lock.m_Lock, v29);
      }
    }
    v6 = Tag;
  }
  v20 = this->m_TagTracker;
  if ( v20 && (!v19 || v19 == 259) )
    FxTagTracker::UpdateTagHistory(v20, v6, Line, File, TagAddRef, v9);
  return v19;
}
