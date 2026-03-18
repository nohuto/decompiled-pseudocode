/*
 * XREFs of ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x14003246C
 * Callers:
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400329D0 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x14003414C (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x14004C23C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14006B690 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006DC20 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400783C0 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400790F0 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5370 (-PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A55C0 (-PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedStartedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5600 (-PowerStartSelfManagedIoFailedStartedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x14004A860 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x140060990 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?Compare@FxTransactionedList@@MEAAEPEAUFxTransactionedEntry@@PEAX@Z @ 0x140084410 (-Compare@FxTransactionedList@@MEAAEPEAUFxTransactionedEntry@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::ProcessEvent(
        FxSelfManagedIoMachine *this,
        FxSelfManagedIoEvents Event,
        FxCxCallbackProgress *Progress)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rdi
  __int64 m_CurrentState; // rdx
  unsigned int i; // eax
  const FxSelfManagedIoTargetState *TargetStates; // rcx
  unsigned int _a3; // esi
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  char v15; // al
  __int64 (__fastcall *v16)(FxObject *__hidden, struct FxQueryInterfaceParams *); // rax
  int status; // [rsp+88h] [rbp+10h] BYREF

  p_m_StateMachineLock = &this->m_StateMachineLock;
  status = 0;
  KeEnterCriticalRegion();
  if ( KeWaitForSingleObject(p_m_StateMachineLock, Executive, 0, 0, 0LL) == 258 )
    KeLeaveCriticalRegion();
  else
    p_m_StateMachineLock->m_OwningThread = KeGetCurrentThread();
  this->m_Events.History[this->m_EventHistoryIndex] = Event;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  m_CurrentState = this->m_CurrentState;
  if ( Progress )
    *Progress = FxCxCallbackProgressInitialized;
  for ( i = 0; i < FxSelfManagedIoMachine::m_StateTable[m_CurrentState - 1].TargetStatesCount; ++i )
  {
    TargetStates = FxSelfManagedIoMachine::m_StateTable[m_CurrentState - 1].TargetStates;
    if ( TargetStates[i].SelfManagedIoEvent == Event )
    {
      for ( _a3 = TargetStates[i].SelfManagedIoState;
            _a3 != 15;
            _a3 = ((__int64 (__fastcall *)(FxSelfManagedIoMachine *, int *, FxCxCallbackProgress *))v16)(
                    this,
                    &status,
                    Progress) )
      {
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
          0xCu,
          WPP_SelfManagedIoStateMachine_cpp_Traceguids,
          _a1,
          m_DeviceBase->m_DeviceObject.m_DeviceObject,
          _a3,
          this->m_CurrentState);
        this->m_States.History[this->m_StateHistoryIndex] = _a3;
        v15 = this->m_StateHistoryIndex + 1;
        this->m_CurrentState = _a3;
        this->m_StateHistoryIndex = v15 & 7;
        v16 = funcs_1400325E1[3 * (unsigned __int8)_a3];
        if ( !v16 )
          break;
      }
      break;
    }
  }
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)status;
}
