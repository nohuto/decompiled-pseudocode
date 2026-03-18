/*
 * XREFs of ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x14001CB58
 * Callers:
 *     ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x14001BF90 (-_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x14003BE8C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x14001D540 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?AddRef@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x140060430 (-AddRef@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Delete@FxMemoryObject@@UEAAXXZ @ 0x14006B650 (-Delete@FxMemoryObject@@UEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BC0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z @ 0x140095360 (-Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxDevicePwrRequirementMachine::ProcessEventInner(
        FxDevicePwrRequirementMachine *this,
        FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v4; // al
  __int64 m_QueueHead; // rdx
  FxDevicePwrRequirementEvents _a4; // esi
  unsigned int i; // eax
  const FxDevicePwrRequirementTargetState *TargetStates; // rcx
  unsigned int _a3; // edi
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  __int64 m_HistoryIndex; // r8
  unsigned int (__fastcall *v15)(FxMemoryObject *__hidden, void *, int, const char *); // rax
  KIRQL v16; // r9
  FxPkgPnp *v17; // rcx
  FxDeviceBase *v18; // r10
  _FX_DRIVER_GLOBALS *v19; // rcx
  const void *v20; // r8

  p_m_Lock = &this->m_QueueLock.m_Lock;
LABEL_2:
  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = this->m_QueueHead;
    if ( (_BYTE)m_QueueHead == this->m_QueueTail )
      break;
    _a4 = this->m_Queue[m_QueueHead];
    this->m_QueueHead = ((int)m_QueueHead + 1) % (unsigned int)this->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v4);
    for ( i = 0; i < FxDevicePwrRequirementMachine::m_StateTable[this->m_CurrentState - 1].TargetStatesCount; ++i )
    {
      TargetStates = FxDevicePwrRequirementMachine::m_StateTable[this->m_CurrentState - 1].TargetStates;
      if ( TargetStates[i].DprEvent == _a4 )
      {
        _a3 = TargetStates[i].DprState;
        if ( _a3 != 15 )
        {
          do
          {
            m_PkgPnp = this->m_PoxInterface->m_PkgPnp;
            m_DeviceBase = m_PkgPnp->m_DeviceBase;
            m_Globals = m_PkgPnp->m_Globals;
            _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_DeviceBase->m_ObjectSize )
              _a1 = 0LL;
            WPP_IFR_SF_qqLL(
              m_Globals,
              4u,
              0x15u,
              0xCu,
              WPP_DevicePwrReqStateMachine_cpp_Traceguids,
              _a1,
              m_DeviceBase->m_DeviceObject.m_DeviceObject,
              _a3,
              this->m_CurrentState);
            m_HistoryIndex = this->m_HistoryIndex;
            this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
            this->m_States.History[m_HistoryIndex] = _a3;
            this->m_CurrentState = _a3;
            v15 = funcs_14001CC9C[3 * (unsigned __int8)_a3];
            if ( !v15 )
              break;
            _a3 = ((__int64 (__fastcall *)(FxDevicePwrRequirementMachine *))v15)(this);
          }
          while ( _a3 != 15 );
          goto LABEL_2;
        }
        break;
      }
    }
    v17 = this->m_PoxInterface->m_PkgPnp;
    v18 = v17->m_DeviceBase;
    v19 = v17->m_Globals;
    v20 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v18->m_ObjectSize )
      v20 = 0LL;
    WPP_IFR_SF_qqLL(
      v19,
      4u,
      0xCu,
      0xBu,
      WPP_DevicePwrReqStateMachine_cpp_Traceguids,
      v20,
      v18->m_DeviceObject.m_DeviceObject,
      this->m_CurrentState,
      _a4);
    if ( _a4 >= DprEventDeviceDirectedPoweredDown || this->m_CurrentState >= 8u )
      MicrosoftTelemetryAssertTriggeredArgsKM("wdf01000.sys", this->m_CurrentState, _a4);
  }
  FxEventQueue::GetFinishedState(this, Info);
  KeReleaseSpinLock(p_m_Lock, v16);
}
