/*
 * XREFs of imp_WdfDeviceSetPowerCapabilities @ 0x14005E200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ?SetPowerCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_POWER_CAPABILITIES@@@Z @ 0x140071964 (-SetPowerCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_POWER_CAPABILITIES@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qsd @ 0x1400915A8 (WPP_IFR_SF_qsd.c)
 */

void __fastcall imp_WdfDeviceSetPowerCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  unsigned int i; // edx
  __int64 Offset; // r8
  unsigned int v7; // r8d
  __int64 j; // rcx
  unsigned int DeviceWake; // eax
  FxPkgPnp *m_PkgPnp; // rcx
  unsigned __int16 v11; // r9
  _DEVICE_POWER_STATE _a2; // edx
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-20h]
  void *retaddr; // [rsp+48h] [rbp+8h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+60h] [rbp+20h] BYREF

  pDevice = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !PowerCapabilities )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( PowerCapabilities->Size != 80 )
  {
    WPP_IFR_SF_qdd(
      pFxDriverGlobals,
      2u,
      0x12u,
      0x2Au,
      WPP_FxDeviceApi_cpp_Traceguids,
      Device,
      PowerCapabilities->Size,
      80);
    goto LABEL_28;
  }
  for ( i = 0; i < 6; ++i )
  {
    Offset = offsets_0[i].Offset;
    if ( (unsigned __int64)(Offset + 4) > 0x50 )
      return;
    v7 = *(unsigned int *)((char *)&PowerCapabilities->Size + Offset);
    if ( v7 && v7 - 1 > 1 )
    {
      WPP_IFR_SF_qsd(pFxDriverGlobals, i, v7, 0x2Bu, (const _GUID *)ObjectGlobals, Device, offsets_0[i].Name, v7);
      goto LABEL_28;
    }
  }
  for ( j = 0LL; (unsigned int)j < 7; j = (unsigned int)(j + 1) )
  {
    if ( PowerCapabilities->DeviceState[j] > (unsigned int)PowerDeviceMaximum )
    {
      WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0x2Cu, WPP_FxDeviceApi_cpp_Traceguids, Device);
      goto LABEL_28;
    }
  }
  DeviceWake = PowerCapabilities->DeviceWake;
  if ( DeviceWake > 5 )
  {
    v11 = 45;
    goto LABEL_27;
  }
  DeviceWake = PowerCapabilities->SystemWake;
  if ( DeviceWake > 7 )
  {
    v11 = 46;
    goto LABEL_27;
  }
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    DeviceWake = PowerCapabilities->IdealDxStateForSx;
    if ( DeviceWake != 5 )
    {
      v11 = 47;
LABEL_27:
      WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0x12u, v11, WPP_FxDeviceApi_cpp_Traceguids, Device, DeviceWake);
      goto LABEL_28;
    }
  }
  _a2 = PowerCapabilities->IdealDxStateForSx;
  if ( (unsigned int)(_a2 - 2) <= 3 )
  {
    FxPkgPnp::SetPowerCaps(m_PkgPnp, PowerCapabilities);
    return;
  }
  WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0x12u, 0x30u, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2);
LABEL_28:
  FxVerifierDbgBreakPoint(pFxDriverGlobals);
}
