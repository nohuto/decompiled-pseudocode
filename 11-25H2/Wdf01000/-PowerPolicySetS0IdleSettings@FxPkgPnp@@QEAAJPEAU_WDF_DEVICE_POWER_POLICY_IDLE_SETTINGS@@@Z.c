/*
 * XREFs of ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x14003A9BC
 * Callers:
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x14003A650 (imp_WdfDeviceAssignS0IdleSettings.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x14003B310 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x14003C148 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x14003C8C0 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x14003C9B4 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x140051554 (-ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x140052814 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x140052D40 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     WPP_IFR_SF_DD @ 0x140056394 (WPP_IFR_SF_DD.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x14007A2CC (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x14007A3E0 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 *     WPP_IFR_SF_LLd @ 0x14007ED14 (WPP_IFR_SF_LLd.c)
 *     WPP_IFR_SF_sd @ 0x14007FB1C (WPP_IFR_SF_sd.c)
 *     ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140082DF4 (-UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall FxPkgPnp::PowerPolicySetS0IdleSettings(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  _WDF_TRI_STATE Enabled; // eax
  IdleTimeoutManagement *p_m_TimeoutMgmt; // r14
  unsigned __int8 v6; // r13
  _DEVICE_POWER_STATE DxState; // esi
  unsigned __int8 v8; // r12
  FxDevice *m_Device; // rcx
  unsigned int IdleTimeout; // r15d
  _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings; // eax
  int result; // eax
  unsigned __int8 v13; // al
  int v14; // edx
  FxPowerPolicyOwnerSettings *v15; // rcx
  _WDF_TRI_STATE ExcludeD3Cold; // ecx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // eax
  _DEVICE_POWER_STATE _a2; // eax
  unsigned __int8 v19; // dl
  unsigned int v20; // r8d
  _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake; // ecx
  _FX_DRIVER_GLOBALS *v22; // rcx
  unsigned __int16 v23; // r9
  unsigned __int8 v24; // dl
  void (__fastcall *SetD3ColdSupport)(void *, unsigned __int8); // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  __int64 i; // rcx
  unsigned __int8 m_DirectedTransitionsSupported; // al
  const char *v30; // rcx
  FxDevice *v31; // rcx
  signed int inited; // eax
  signed int v33; // r15d
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v35; // cl
  unsigned __int64 m_PoFxDeviceFlags; // rax
  unsigned __int64 v37; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+38h] [rbp-C8h]
  unsigned __int8 dfxChildrenOptional; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 Set; // [rsp+41h] [rbp-BFh]
  unsigned __int8 directedTransitions; // [rsp+42h] [rbp-BEh] BYREF
  unsigned __int8 v43; // [rsp+43h] [rbp-BDh]
  unsigned __int8 useWdfTimerForPofx[4]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int Value; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING valueName; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING childrenOptionalName; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING useWdfTimerForPofxName; // [rsp+70h] [rbp-90h] BYREF
  _BYTE useWdfTimerForPofxName_buffer[48]; // [rsp+80h] [rbp-80h] OVERLAPPED BYREF
  __int64 v50; // [rsp+B0h] [rbp-50h]
  wchar_t v51; // [rsp+B8h] [rbp-48h]
  wchar_t childrenOptionalName_buffer[48]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v53[4]; // [rsp+120h] [rbp+20h] BYREF
  wchar_t v54; // [rsp+160h] [rbp+60h]

  Enabled = Settings->Enabled;
  p_m_TimeoutMgmt = &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt;
  v43 = 0;
  v6 = 0;
  DxState = PowerDeviceD3;
  if ( Enabled == WdfTrue )
  {
    v8 = 1;
  }
  else if ( Enabled == WdfUseDefault )
  {
    v8 = 1;
    if ( KeGetCurrentIrql() )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x30u, WPP_FxPkgPnp_cpp_Traceguids);
    }
    else
    {
      m_Device = this->m_Device;
      *(_OWORD *)useWdfTimerForPofxName_buffer = *(_OWORD *)L"WdfDefaultIdleInWorkingState";
      v51 = aWdfdefaultidle[28];
      *(_QWORD *)&valueName.Length = 3801144LL;
      *(_OWORD *)&useWdfTimerForPofxName_buffer[16] = *(_OWORD *)L"ltIdleInWorkingState";
      valueName.Buffer = (wchar_t *)useWdfTimerForPofxName_buffer;
      *(_OWORD *)&useWdfTimerForPofxName_buffer[32] = *(_OWORD *)L"WorkingState";
      *(_QWORD *)&childrenOptionalName.Length = 0LL;
      v50 = *(_QWORD *)L"tate";
      if ( FxDevice::OpenSettingsKey(m_Device, (void **)&childrenOptionalName, 0x20000u) >= 0 )
      {
        Value = 0;
        if ( FxRegKey::_QueryULong(*(void **)&childrenOptionalName.Length, &valueName, &Value) >= 0 )
          v8 = Value != 0;
      }
      if ( *(_QWORD *)&childrenOptionalName.Length )
        ZwClose(*(HANDLE *)&childrenOptionalName.Length);
    }
  }
  else
  {
    v8 = 0;
  }
  Set = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set;
  if ( this->m_CapsQueried || KeGetCurrentIrql() || (result = FxPkgPnp::QueryForCapabilities(this), result >= 0) )
  {
    if ( Settings->IdleCaps == IdleCannotWakeFromS0 )
    {
      DxState = Settings->DxState;
      v43 = 0;
      if ( DxState == PowerDeviceMaximum )
        DxState = PowerDeviceD3;
      goto LABEL_12;
    }
    if ( (unsigned int)(Settings->IdleCaps - 2) >= 2 )
      goto LABEL_12;
    DxState = Settings->DxState;
    v43 = 1;
    _a2 = FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(this, PowerSystemWorking);
    if ( DxState == PowerDeviceMaximum )
    {
      DxState = _a2;
      if ( (unsigned int)(_a2 - 2) > 2 )
      {
LABEL_41:
        WPP_IFR_SF_DD(this->m_Globals, v19, 0xCu, 0x31u, WPP_FxPkgPnp_cpp_Traceguids, _a2, -1073741101);
        return -1073741101;
      }
      if ( _a2 > PowerDeviceD2 )
      {
        if ( Settings->IdleCaps == IdleUsbSelectiveSuspend )
          goto LABEL_41;
LABEL_12:
        IdleTimeout = Settings->IdleTimeout;
        if ( !IdleTimeout )
          IdleTimeout = 5000;
        UserControlOfIdleSettings = Settings->UserControlOfIdleSettings;
        if ( UserControlOfIdleSettings == IdleAllowUserControl )
        {
          result = FxPkgPnp::UpdateWmiInstanceForS0Idle(this, AddInstance);
          if ( result < 0 )
            return result;
          if ( Settings->Enabled == WdfUseDefault )
          {
            if ( Set || KeGetCurrentIrql() )
            {
              v8 = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
            }
            else
            {
              v31 = this->m_Device;
              valueName.Buffer = (wchar_t *)useWdfTimerForPofxName_buffer;
              wcscpy((wchar_t *)useWdfTimerForPofxName_buffer, L"IdleInWorkingState");
              *(_QWORD *)&valueName.Length = 2490404LL;
              *(_QWORD *)&childrenOptionalName.Length = 0LL;
              if ( FxDevice::OpenSettingsKey(v31, (void **)&childrenOptionalName, 0x20000u) >= 0 )
              {
                Value = 0;
                if ( FxRegKey::_QueryULong(*(void **)&childrenOptionalName.Length, &valueName, &Value) >= 0 )
                  v8 = Value != 0;
              }
              if ( *(_QWORD *)&childrenOptionalName.Length )
                ZwClose(*(HANDLE *)&childrenOptionalName.Length);
            }
          }
          v6 = 1;
        }
        else if ( UserControlOfIdleSettings == IdleDoNotAllowUserControl )
        {
          m_Owner = this->m_PowerPolicyMachine.m_Owner;
          WmiInstance = m_Owner->m_IdleSettings.WmiInstance;
          if ( WmiInstance )
            FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_IdleSettings.WmiInstance);
        }
        v13 = Set;
        if ( !Set )
        {
          this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set = 1;
          this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Overridable = v6;
          v13 = Set;
        }
        if ( Settings->Size > 0x1C )
        {
          if ( v13 )
          {
            v14 = p_m_TimeoutMgmt->m_IdleTimeoutStatus & 2;
            if ( (unsigned int)(Settings->IdleTimeoutType - 1) <= 1 != (v14 != 0) )
            {
              v30 = "should";
              if ( !v14 )
                v30 = "should not";
              WPP_IFR_SF_sd(this->m_Globals, v14, 0xCu, 0x36u, WPP_FxPkgPnp_cpp_Traceguids, v30, -1073741808);
              FxVerifierDbgBreakPoint(this->m_Globals);
              return -1073741808;
            }
          }
          else if ( (unsigned int)(Settings->IdleTimeoutType - 1) <= 1 )
          {
            result = IdleTimeoutManagement::UseSystemManagedIdleTimeout(p_m_TimeoutMgmt, this->m_Globals);
            if ( result < 0 )
              return result;
            if ( (p_m_TimeoutMgmt->m_IdleTimeoutStatus & 4) != 0 )
            {
              m_DirectedTransitionsSupported = p_m_TimeoutMgmt->m_DirectedTransitionsSupported;
            }
            else
            {
              m_DirectedTransitionsSupported = FxLibraryGlobals.WdfDirectedPowerTransitionEnabled;
              if ( this->m_Globals->WdfBindInfo->Version.Minor >= 0x1F )
                m_DirectedTransitionsSupported = 1;
            }
            directedTransitions = m_DirectedTransitionsSupported;
            m_Globals = this->m_Globals;
            dfxChildrenOptional = 0;
            useWdfTimerForPofx[0] = m_Globals->WdfBindInfo->Version.Minor >= 0x21;
            if ( (p_m_TimeoutMgmt->m_IdleTimeoutStatus & 4) != 0 )
            {
              v35 = dfxChildrenOptional;
              if ( (p_m_TimeoutMgmt->m_PoFxDeviceFlags & 6) == 6 )
                v35 = 1;
              dfxChildrenOptional = v35;
            }
            if ( KeGetCurrentIrql() )
            {
              WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x35u, WPP_FxPkgPnp_cpp_Traceguids);
            }
            else
            {
              v53[0] = *(_OWORD *)L"WdfDirectedPowerTransitionEnable";
              v53[1] = *(_OWORD *)L"tedPowerTransitionEnable";
              v54 = aWdfdirectedpow_0[32];
              v53[2] = *(_OWORD *)L"TransitionEnable";
              v53[3] = *(_OWORD *)L"onEnable";
              valueName.Buffer = (wchar_t *)v53;
              *(_QWORD *)&valueName.Length = 4325440LL;
              FxPkgPnp::ReadRegistryWdfSetting(this, &valueName, &directedTransitions);
              wcscpy(childrenOptionalName_buffer, L"WdfDirectedPowerTransitionChildrenOptional");
              *(_QWORD *)&childrenOptionalName.Length = 5636180LL;
              childrenOptionalName.Buffer = childrenOptionalName_buffer;
              FxPkgPnp::ReadRegistryWdfSetting(this, &childrenOptionalName, &dfxChildrenOptional);
              *(_DWORD *)&useWdfTimerForPofxName_buffer[40] = *(_DWORD *)L"x";
              *(_OWORD *)useWdfTimerForPofxName_buffer = *(_OWORD *)L"WdfUseWdfTimerForPofx";
              *(_QWORD *)&useWdfTimerForPofxName_buffer[32] = *(_QWORD *)L"rPofx";
              *(_OWORD *)&useWdfTimerForPofxName_buffer[16] = *(_OWORD *)L"fTimerForPofx";
              *(_QWORD *)&useWdfTimerForPofxName.Length = 2883626LL;
              useWdfTimerForPofxName.Buffer = (wchar_t *)useWdfTimerForPofxName_buffer;
              FxPkgPnp::ReadRegistryWdfSetting(this, &useWdfTimerForPofxName, useWdfTimerForPofx);
            }
            p_m_TimeoutMgmt->m_DirectedTransitionsSupported = directedTransitions;
            m_PoFxDeviceFlags = p_m_TimeoutMgmt->m_PoFxDeviceFlags;
            if ( dfxChildrenOptional )
              v37 = m_PoFxDeviceFlags | 6;
            else
              v37 = m_PoFxDeviceFlags & 0xFFFFFFFFFFFFFFF9uLL;
            p_m_TimeoutMgmt->m_PoFxDeviceFlags = v37;
            p_m_TimeoutMgmt->m_UseWdfTimerForPofx = useWdfTimerForPofx[0];
          }
        }
        if ( Settings->IdleCaps == IdleCannotWakeFromS0 && Settings->Size > 0x18 )
        {
          PowerUpIdleDeviceOnSystemWake = Settings->PowerUpIdleDeviceOnSystemWake;
          if ( PowerUpIdleDeviceOnSystemWake )
          {
            if ( PowerUpIdleDeviceOnSystemWake != WdfTrue )
              goto LABEL_26;
            this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 1;
            v22 = this->m_Globals;
            if ( !v22->FxVerboseOn )
              goto LABEL_26;
            v23 = 55;
            goto LABEL_48;
          }
          this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 0;
          v22 = this->m_Globals;
          if ( v22->FxVerboseOn )
          {
            v23 = 56;
LABEL_48:
            WPP_IFR_SF_(v22, 5u, 0xCu, v23, WPP_FxPkgPnp_cpp_Traceguids);
          }
        }
LABEL_26:
        v15 = this->m_PowerPolicyMachine.m_Owner;
        if ( !v15->m_IdleSettings.UsbSSCapabilityKnown )
        {
          IdleCaps = Settings->IdleCaps;
          if ( IdleCaps == IdleUsbSelectiveSuspend )
          {
            for ( i = 0LL; i < 2; ++i )
              *(&this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.UsbSSCapable + i) = 1;
          }
          else if ( IdleCaps == IdleCanWakeFromS0 )
          {
            v15->m_IdleSettings.UsbSSCapabilityKnown = 1;
          }
        }
        this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.WakeFromS0Capable = v43;
        this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState = DxState;
        if ( (p_m_TimeoutMgmt->m_IdleTimeoutStatus & 2) != 0 && !p_m_TimeoutMgmt->m_UseWdfTimerForPofx )
        {
          if ( !Set )
            this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)-1LL;
          if ( Settings->IdleTimeoutType == SystemManagedIdleTimeoutWithHint )
            this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_NextIdleTimeoutHint = IdleTimeout;
        }
        else
        {
          this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)(-10000LL * IdleTimeout);
        }
        if ( Settings->Size > 0x1C )
        {
          ExcludeD3Cold = Settings->ExcludeD3Cold;
          if ( ExcludeD3Cold != WdfUseDefault )
          {
            if ( ExcludeD3Cold )
            {
              if ( ExcludeD3Cold != WdfTrue )
                WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x39u, WPP_FxPkgPnp_cpp_Traceguids, ExcludeD3Cold);
              v24 = 0;
            }
            else
            {
              v24 = 1;
            }
            this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.D3ColdCapabilityKnown = 1;
            this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.D3ColdSupported = v24;
            SetD3ColdSupport = this->m_D3ColdInterface.SetD3ColdSupport;
            if ( SetD3ColdSupport )
              ((void (__fastcall *)(void *))SetD3ColdSupport)(this->m_D3ColdInterface.Context);
          }
        }
        FxPkgPnp::PowerPolicySetS0IdleState(this, v8);
        return 0;
      }
    }
    else
    {
      if ( DxState > _a2 )
      {
        WPP_IFR_SF_LLd(this->m_Globals, v19, v20, 0x32u, _a1, DxState, _a2, v39);
        return -1073741101;
      }
      if ( DxState > PowerDeviceD2 )
      {
        if ( Settings->IdleCaps == IdleUsbSelectiveSuspend )
        {
          WPP_IFR_SF_DD(this->m_Globals, v19, 0xCu, 0x33u, WPP_FxPkgPnp_cpp_Traceguids, DxState, -1073741101);
          return -1073741101;
        }
        goto LABEL_12;
      }
    }
    if ( Settings->IdleCaps == IdleUsbSelectiveSuspend )
    {
      inited = FxPowerPolicyMachine::InitUsbSS(&this->m_PowerPolicyMachine);
      v33 = inited;
      if ( inited < 0 )
      {
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x34u, WPP_FxPkgPnp_cpp_Traceguids, inited);
        return v33;
      }
    }
    goto LABEL_12;
  }
  return result;
}
