/*
 * XREFs of imp_WdfDeviceSetDeviceState @ 0x14007DF20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1400532DC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?SetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x140081824 (-SetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qsd @ 0x140091548 (WPP_IFR_SF_qsd.c)
 */

void __fastcall imp_WdfDeviceSetDeviceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_STATE *DeviceState)
{
  unsigned __int64 _a2; // r8
  unsigned int i; // edx
  __int64 Offset; // r10
  int v8; // r10d
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+60h] [rbp+18h] BYREF

  pDevice = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !DeviceState )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  _a2 = DeviceState->Size;
  if ( (((_DWORD)_a2 - 28) & 0xFFFFFFFB) != 0 )
  {
    WPP_IFR_SF_qdd(pFxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2, 32);
LABEL_5:
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
  else
  {
    for ( i = 0; i < 7; ++i )
    {
      Offset = offsets_1[i].Offset;
      if ( (unsigned __int64)(Offset + 4) > 0x20 )
        return;
      if ( Offset + 4 > _a2 )
        break;
      v8 = *(unsigned int *)((char *)&DeviceState->Size + Offset);
      if ( v8 && (unsigned int)(v8 - 1) > 1 )
      {
        WPP_IFR_SF_qsd(pFxDriverGlobals, i, _a2, 0x18u, traceGuid, Device, offsets_1[i].Name, v8);
        goto LABEL_5;
      }
    }
    FxPkgPnp::SetPnpState(pDevice->m_PkgPnp, DeviceState);
    SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(pDevice);
    if ( SafePhysicalDevice )
      IoInvalidateDeviceState(SafePhysicalDevice);
  }
}
