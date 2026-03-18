/*
 * XREFs of ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x140069E64
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x14000B9E0 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ?GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x14000A8D4 (-GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEV.c)
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1400A43A0 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::NotPowerPolicyOwnerEnterNewState(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_STATE NewState)
{
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // ebx
  _WDF_DEVICE_POWER_POLICY_STATE _a4; // esi
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // rcx
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  FxPowerPolicyStateCallback *v9; // rcx
  _WDF_DEVICE_POWER_POLICY_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxPowerPolicyStateCallback *v11; // rcx
  FxDeviceBase *v12; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v14; // r9
  FxDeviceBase *v15; // r9
  unsigned __int16 v16; // ax
  WDFDEVICE__ *v17; // r9
  FxDeviceBase *v18; // r9
  unsigned __int16 v19; // ax
  WDFDEVICE__ *v20; // r9
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData; // [rsp+50h] [rbp-20h] BYREF

  if ( NewState != WdfDevStatePwrPolNull )
  {
    _a3 = NewState;
    *(_QWORD *)&NotificationData.Type = 0LL;
    NotificationData.Data.EnterState.NewState = WdfDevStatePwrPolInvalid;
    _a4 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    do
    {
      m_DeviceBase = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0x15u,
        0xAu,
        WPP_NotPowerPolicyOwnerStateMachine_cpp_Traceguids,
        _a1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3,
        _a4);
      m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
      if ( m_PowerPolicyStateCallbacks )
      {
        v12 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationLeaveState;
        NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        m_ObjectSize = v12->m_ObjectSize;
        v14 = (WDFDEVICE__ *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v14 = 0LL;
        FxPowerPolicyStateCallback::Invoke(
          m_PowerPolicyStateCallbacks,
          _a4,
          StateNotificationLeaveState,
          v14,
          &NotificationData);
      }
      m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
      this->m_PowerPolicyMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1)
                                                % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
      this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = _a3;
      v9 = this->m_PowerPolicyStateCallbacks;
      if ( v9 )
      {
        v15 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationEnterState;
        NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        v16 = v15->m_ObjectSize;
        v17 = (WDFDEVICE__ *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v16 )
          v17 = 0LL;
        FxPowerPolicyStateCallback::Invoke(v9, _a3, StateNotificationEnterState, v17, &NotificationData);
      }
      _a4 = _a3;
      *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
      StateFunc = FxPkgPnp::GetNotPowerPolicyOwnerTableEntry(_a3)->StateFunc;
      if ( StateFunc )
        _a3 = StateFunc(this);
      else
        _a3 = WdfDevStatePwrPolNull;
      v11 = this->m_PowerPolicyStateCallbacks;
      if ( v11 )
      {
        v18 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationPostProcessState;
        NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
        v19 = v18->m_ObjectSize;
        v20 = (WDFDEVICE__ *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v19 )
          v20 = 0LL;
        FxPowerPolicyStateCallback::Invoke(v11, _a4, StateNotificationPostProcessState, v20, &NotificationData);
      }
    }
    while ( _a3 != WdfDevStatePwrPolNull );
  }
}
