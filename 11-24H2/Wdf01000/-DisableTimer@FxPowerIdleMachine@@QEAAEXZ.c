/*
 * XREFs of ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x14005F748
 * Callers:
 *     ?PowerPolStoppingCancelTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14005F520 (-PowerPolStoppingCancelTimer@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14005F550 (-PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartedIdleCapableCancelTimerForSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14005F5C0 (-PowerPolStartedIdleCapableCancelTimerForSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@P.c)
 *     ?PowerPolStartedWakeCapableCancelTimerForSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14005F5F0 (-PowerPolStartedWakeCapableCancelTimerForSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@P.c)
 *     ?PowerPolStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14005F620 (-PowerPolStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14005F650 (-PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_.c)
 *     ?PowerPolWaitingArmedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14005F6A0 (-PowerPolWaitingArmedUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartedCancelTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14005F720 (-PowerPolStartedCancelTimer@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartedWakeCapableSleepingUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8200 (-PowerPolStartedWakeCapableSleepingUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolStoppingResetDevice@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8370 (-PowerPolStoppingResetDevice@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A85D0 (-PowerPolSystemSleepNeedWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8D00 (-PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 *     ?PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8DC0 (-PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolWakeFailedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8F00 (-PowerPolWakeFailedUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

bool __fastcall FxPowerIdleMachine::DisableTimer(FxPowerIdleMachine *this)
{
  unsigned __int64 *p_m_Lock; // r14
  KIRQL v3; // al
  FxTagTracker *m_TagTracker; // rbp
  KIRQL v5; // r15
  __int64 _a3; // r10
  unsigned int i; // eax
  const FxPowerIdleTargetState *TargetStates; // rcx
  unsigned __int64 v9; // r8
  const void *_a1; // rdx
  bool v11; // bl
  FxPowerIdleStates PowerIdleState; // edi
  unsigned __int64 Tag; // rdx
  const void *v15; // rcx
  char v16; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax

  p_m_Lock = &this->m_Lock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_TagTracker = this[2].m_TagTracker;
  v5 = v3;
  this->m_EventHistory[this->m_EventHistoryIndex] = PowerIdleEventDisabled;
  _a3 = this->m_CurrentIdleState;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  for ( i = 0; i < FxPowerIdleMachine::m_StateTable[_a3 - 1].TargetStatesCount; ++i )
  {
    TargetStates = FxPowerIdleMachine::m_StateTable[_a3 - 1].TargetStates;
    if ( TargetStates[i].PowerIdleEvent == PowerIdleEventDisabled )
    {
      PowerIdleState = TargetStates[i].PowerIdleState;
      if ( PowerIdleState != FxIdleMax )
      {
        do
        {
          Tag = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
          v15 = (const void *)(Tag ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(Tag + 10) )
            v15 = 0LL;
          WPP_IFR_SF_qqLL(
            (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
            4u,
            0x15u,
            0x11u,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            v15,
            *(const void **)(Tag + 144),
            PowerIdleState,
            this->m_CurrentIdleState);
          this->m_StateHistory[this->m_StateHistoryIndex] = PowerIdleState;
          v16 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = PowerIdleState;
          this->m_StateHistoryIndex = v16 & 7;
          StateFunc = FxPowerIdleMachine::m_StateTable[PowerIdleState - 1].StateFunc;
          if ( !StateFunc )
            break;
          PowerIdleState = StateFunc(this);
        }
        while ( PowerIdleState != FxIdleMax );
        goto LABEL_8;
      }
      break;
    }
  }
  v9 = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
  _a1 = (const void *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*(_WORD *)(v9 + 10) )
    _a1 = 0LL;
  WPP_IFR_SF_qqLL(
    (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
    4u,
    0xCu,
    0x10u,
    WPP_PowerIdleStateMachine_cpp_Traceguids,
    _a1,
    *(const void **)(v9 + 144),
    _a3,
    0x80u);
LABEL_8:
  v11 = (this->m_Flags & 8) == 0;
  KeReleaseSpinLock(p_m_Lock, v5);
  return v11;
}
