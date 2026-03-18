/*
 * XREFs of ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1400A5EB4
 * Callers:
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x140092000 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1400A7988 (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall FxPkgPnp::AssignPowerFrameworkSettings(
        FxPkgPnp *this,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  _PO_FX_COMPONENT_V1 *Component; // rax
  __int64 v3; // rbx
  unsigned __int64 v6; // rsi
  _PO_FX_COMPONENT_IDLE_STATE *v7; // rbp
  unsigned __int16 v8; // r9
  __int64 Pool2; // rax
  int v10; // ebx
  FxDeviceBase *v11; // rax
  const void *_a1; // rdx
  bool v13; // zf
  _DEVICE_OBJECT *_a2; // rax
  _POX_SETTINGS *v15; // rbx
  _PO_FX_COMPONENT_V1 *v16; // rcx
  _PO_FX_COMPONENT_V1 *v17; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v20; // rcx

  Component = PowerFrameworkSettings->Component;
  v3 = 0LL;
  LODWORD(v6) = 0;
  v7 = 0LL;
  if ( Component )
  {
    v6 = 24LL * Component->IdleStateCount;
    if ( v6 > 0xFFFFFFFF )
    {
      v8 = 85;
      goto LABEL_16;
    }
    v3 = (unsigned int)(v6 + 32);
    if ( (unsigned int)v3 < (unsigned int)v6 )
    {
      v8 = 86;
LABEL_16:
      v10 = -1073741675;
      m_DeviceBase = this->m_DeviceBase;
      v20 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        v20 = 0LL;
      WPP_IFR_SF_qqd(
        this->m_Globals,
        2u,
        0xCu,
        v8,
        WPP_FxPkgPnp_cpp_Traceguids,
        v20,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        0xC0000095);
      goto LABEL_19;
    }
  }
  if ( (int)v3 + 64 < (unsigned int)v3 )
  {
    v8 = 87;
    goto LABEL_16;
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(v3 + 64), this->m_Globals->Tag);
  v7 = (_PO_FX_COMPONENT_IDLE_STATE *)Pool2;
  if ( Pool2 )
  {
    v15 = (_POX_SETTINGS *)(Pool2 + v3);
    v15->EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
    v15->EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
    v15->Component = PowerFrameworkSettings->Component;
    v15->ComponentActiveConditionCallback = PowerFrameworkSettings->ComponentActiveConditionCallback;
    v15->ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback;
    v15->ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback;
    v15->PowerControlCallback = PowerFrameworkSettings->PowerControlCallback;
    v15->PoFxDeviceContext = PowerFrameworkSettings->PoFxDeviceContext;
    if ( PowerFrameworkSettings->Component )
    {
      v16 = (_PO_FX_COMPONENT_V1 *)((unsigned int)v6 + Pool2);
      v15->Component = v16;
      v17 = PowerFrameworkSettings->Component;
      v16->Id = v17->Id;
      *(_OWORD *)&v16->IdleStateCount = *(_OWORD *)&v17->IdleStateCount;
      v15->Component->IdleStates = v7;
      memmove(v15->Component->IdleStates, PowerFrameworkSettings->Component->IdleStates, (unsigned int)v6);
    }
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    v10 = IdleTimeoutManagement::CommitPowerFrameworkSettings(
            &m_Owner->m_IdleSettings.m_TimeoutMgmt,
            this->m_Globals,
            v15);
    if ( v10 >= 0 )
    {
      v10 = 0;
      m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported = PowerFrameworkSettings->DirectedPoFxEnabled != WdfFalse;
      m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoFxDeviceFlags = PowerFrameworkSettings->PoFxDeviceFlags;
      return (unsigned int)v10;
    }
  }
  else
  {
    v10 = -1073741670;
    v11 = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v13 = v11->m_ObjectSize == 0;
    _a2 = v11->m_DeviceObject.m_DeviceObject;
    if ( v13 )
      _a1 = 0LL;
    WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xCu, 0x58u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2, 0xC000009A);
  }
LABEL_19:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v10;
}
