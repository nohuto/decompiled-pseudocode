/*
 * XREFs of ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x140068B1C
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140081DD0 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x14000528C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x140069054 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x14006908C (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1400AA6D0 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPoxInterface::InitializeComponents(FxPoxInterface *this)
{
  int DevicePowerRequirementMachine; // edi
  signed int _a3; // eax
  FxPkgPnp *v5; // rcx
  FxDeviceBase *v6; // r10
  _FX_DRIVER_GLOBALS *v7; // rcx
  const void *_a1; // r8
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v10; // r14
  int (__fastcall *EvtDeviceWdmPostPoFxRegisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax
  FxDeviceBase *m_DeviceBase; // rsi
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int64 v14; // rsi
  signed int v15; // eax
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *v17; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v19; // rdx
  void (__fastcall *EvtDeviceWdmPrePoFxUnregisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax

  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) == 0 )
    return 0LL;
  if ( this->m_DevicePowerRequirementMachine
    || (DevicePowerRequirementMachine = FxPoxInterface::CreateDevicePowerRequirementMachine(this),
        DevicePowerRequirementMachine >= 0) )
  {
    _a3 = FxPoxInterface::PoxRegisterDevice(this);
    DevicePowerRequirementMachine = _a3;
    if ( _a3 >= 0 )
    {
      PoFxActivateComponent(this->m_PoHandle, 0LL, 0LL);
      PoFxStartDevicePowerManagement(this->m_PoHandle);
      PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
      v10 = PowerFrameworkSettings;
      if ( !PowerFrameworkSettings )
        goto LABEL_19;
      EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
      if ( !EvtDeviceWdmPostPoFxRegisterDevice )
        goto LABEL_19;
      m_DeviceBase = this->m_PkgPnp->m_DeviceBase;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      v14 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v14 = 0LL;
      v15 = EvtDeviceWdmPostPoFxRegisterDevice((WDFDEVICE__ *)v14, this->m_PoHandle);
      DevicePowerRequirementMachine = v15;
      if ( v15 < 0 )
      {
        m_PkgPnp = this->m_PkgPnp;
        v17 = m_PkgPnp->m_DeviceBase;
        m_Globals = m_PkgPnp->m_Globals;
        v19 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v17->m_ObjectSize )
          v19 = 0LL;
        WPP_IFR_SF_qqd(
          m_Globals,
          2u,
          0xCu,
          0xEu,
          WPP_PoxInterface_cpp_Traceguids,
          v19,
          v17->m_DeviceObject.m_DeviceObject,
          v15);
        EvtDeviceWdmPrePoFxUnregisterDevice = v10->EvtDeviceWdmPrePoFxUnregisterDevice;
        if ( EvtDeviceWdmPrePoFxUnregisterDevice )
          EvtDeviceWdmPrePoFxUnregisterDevice((WDFDEVICE__ *)v14, this->m_PoHandle);
        PoFxUnregisterDevice(this->m_PoHandle);
      }
      else
      {
LABEL_19:
        FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventRegisteredWithPox);
      }
    }
    else
    {
      v5 = this->m_PkgPnp;
      v6 = v5->m_DeviceBase;
      v7 = v5->m_Globals;
      _a1 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v6->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqd(v7, 2u, 0xCu, 0xDu, WPP_PoxInterface_cpp_Traceguids, _a1, v6->m_DeviceObject.m_DeviceObject, _a3);
    }
  }
  return (unsigned int)DevicePowerRequirementMachine;
}
