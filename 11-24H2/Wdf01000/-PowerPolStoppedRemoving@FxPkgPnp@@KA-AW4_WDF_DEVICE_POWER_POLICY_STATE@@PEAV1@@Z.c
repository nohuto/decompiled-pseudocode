/*
 * XREFs of ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400819D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x14000528C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x140069054 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     ?SleepStudyStopEvaluation@FxPkgPnp@@QEAAXXZ @ 0x140081A78 (-SleepStudyStopEvaluation@FxPkgPnp@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppedRemoving(FxPkgPnp *This)
{
  FxPoxInterface *p_m_PoxInterface; // rbx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  unsigned __int64 v4; // r9
  void (__fastcall *EvtDeviceWdmPrePoFxUnregisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v8; // rcx

  p_m_PoxInterface = &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface;
  if ( (This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
    if ( PowerFrameworkSettings )
    {
      EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
      if ( EvtDeviceWdmPrePoFxUnregisterDevice )
      {
        m_DeviceBase = p_m_PoxInterface->m_PkgPnp->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        v8 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !m_ObjectSize )
          v8 = v4;
        EvtDeviceWdmPrePoFxUnregisterDevice((WDFDEVICE__ *)v8, p_m_PoxInterface->m_PoHandle);
      }
    }
    PoFxUnregisterDevice(p_m_PoxInterface->m_PoHandle);
    FxDevicePwrRequirementMachine::ProcessEvent(
      p_m_PoxInterface->m_DevicePowerRequirementMachine,
      DprEventUnregisteredWithPox);
  }
  FxPkgPnp::SleepStudyStopEvaluation(This);
  return 1422LL;
}
