/*
 * XREFs of imp_WdfDeviceAssignSxWakeSettings @ 0x140076660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055CD8 (WPP_IFR_SF_DDd.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1400767C0 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAssignSxWakeSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS *Settings)
{
  unsigned __int8 IndicateChildWakeOnParentWake; // di
  unsigned __int8 v6; // dl
  int v7; // ebx
  unsigned int Size; // ecx
  unsigned __int8 ArmForWakeIfChildrenAreArmedForWake; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+60h] [rbp+18h] BYREF

  IndicateChildWakeOnParentWake = 0;
  pDevice = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !Settings )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( !pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    v7 = -1073741808;
    WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0xCu, 0x11u, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741808);
    return v7;
  }
  Size = Settings->Size;
  if ( ((Settings->Size - 16) & 0xFFFFFFFB) != 0 )
  {
    v7 = -1073741820;
    WPP_IFR_SF_DDd(pFxDriverGlobals, v6, 0x12u, 0x12u, WPP_FxDeviceApi_cpp_Traceguids, 0x14u, Size, -1073741820);
    return v7;
  }
  if ( (unsigned int)(Settings->DxState - 2) > 3
    || (unsigned int)(Settings->UserControlOfWakeSettings - 1) > 1
    || Settings->Enabled > (unsigned int)WdfUseDefault )
  {
    v7 = -1073741811;
    WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0x12u, 0x13u, WPP_FxDeviceApi_cpp_Traceguids, 0xC000000D);
    return v7;
  }
  if ( Size <= 0x10 )
  {
    ArmForWakeIfChildrenAreArmedForWake = 0;
  }
  else
  {
    ArmForWakeIfChildrenAreArmedForWake = Settings->ArmForWakeIfChildrenAreArmedForWake;
    IndicateChildWakeOnParentWake = Settings->IndicateChildWakeOnParentWake;
  }
  return FxPkgPnp::PowerPolicySetSxWakeSettings(
           pDevice->m_PkgPnp,
           Settings,
           ArmForWakeIfChildrenAreArmedForWake,
           IndicateChildWakeOnParentWake);
}
