/*
 * XREFs of imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x140092060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1400A5F84 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 *     memset @ 0x1400AC800 (memset.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

int __fastcall imp_WdfDeviceWdmAssignPowerFrameworkSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  unsigned __int8 v6; // dl
  FxPkgPnp *m_PkgPnp; // rsi
  int v8; // ebx
  unsigned __int16 v9; // r9
  size_t Size; // rdi
  _FX_DRIVER_GLOBALS *v11; // rdi
  _PO_FX_COMPONENT_V1 *Component; // rax
  int _a4; // [rsp+38h] [rbp-41h]
  _WDF_POWER_FRAMEWORK_SETTINGS pofxSettings; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 retaddr; // [rsp+D8h] [rbp+5Fh]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+E0h] [rbp+67h] BYREF
  FxDevice *pDevice; // [rsp+F0h] [rbp+77h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  memset(&pofxSettings, 0, sizeof(pofxSettings));
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !PowerFrameworkSettings )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( !m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    v8 = -1073741808;
    v9 = 70;
LABEL_18:
    v11 = pFxDriverGlobals;
    WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0x12u, v9, WPP_FxDeviceApi_cpp_Traceguids, Device, v8);
    goto LABEL_19;
  }
  Size = PowerFrameworkSettings->Size;
  if ( (_DWORD)Size != 88 )
  {
    if ( (_DWORD)Size != 72 )
    {
      v8 = -1073741820;
      _a4 = Size;
      v11 = pFxDriverGlobals;
      WPP_IFR_SF_qddd(pFxDriverGlobals, v6, 0x12u, 0x47u, WPP_FxDeviceApi_cpp_Traceguids, Device, 88, _a4, -1073741820);
LABEL_19:
      FxVerifierDbgBreakPoint(v11);
      return v8;
    }
    memset(&pofxSettings, 0, sizeof(pofxSettings));
    memmove(&pofxSettings, PowerFrameworkSettings, Size);
    pofxSettings.PoFxDeviceFlags = 0LL;
    pofxSettings.DirectedPoFxEnabled = WdfFalse;
    pofxSettings.Size = 88;
    if ( unk_1400C80DA || *(_DWORD *)(*(_QWORD *)&DriverGlobals[-3].DriverName[8] + 20LL) >= 0x1Fu )
      pofxSettings.DirectedPoFxEnabled = WdfTrue;
    PowerFrameworkSettings = &pofxSettings;
  }
  Component = PowerFrameworkSettings->Component;
  if ( Component )
  {
    if ( !Component->IdleStateCount )
    {
      v9 = 73;
LABEL_17:
      v8 = -1073741811;
      goto LABEL_18;
    }
    if ( !Component->IdleStates )
    {
      v9 = 74;
      goto LABEL_17;
    }
  }
  return FxPkgPnp::AssignPowerFrameworkSettings(m_PkgPnp, PowerFrameworkSettings);
}
