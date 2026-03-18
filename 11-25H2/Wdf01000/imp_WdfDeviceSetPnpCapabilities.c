/*
 * XREFs of imp_WdfDeviceSetPnpCapabilities @ 0x1400612F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?SetPnpCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_PNP_CAPABILITIES@@@Z @ 0x140061414 (-SetPnpCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_PNP_CAPABILITIES@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qsd @ 0x140091548 (WPP_IFR_SF_qsd.c)
 */

void __fastcall imp_WdfDeviceSetPnpCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PNP_CAPABILITIES *PnpCapabilities)
{
  unsigned int i; // edx
  __int64 Offset; // r8
  unsigned int v7; // r8d
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+60h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !PnpCapabilities )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( PnpCapabilities->Size == 48 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 9 )
      {
        FxPkgPnp::SetPnpCaps(pDevice->m_PkgPnp, PnpCapabilities);
        return;
      }
      Offset = offsets[i].Offset;
      if ( (unsigned __int64)(Offset + 4) > 0x30 )
        return;
      v7 = *(unsigned int *)((char *)&PnpCapabilities->Size + Offset);
      if ( v7 )
      {
        if ( v7 - 1 > 1 )
          break;
      }
    }
    WPP_IFR_SF_qsd(pFxDriverGlobals, i, v7, 0x29u, traceGuid, Device, offsets[i].Name, v7);
  }
  else
  {
    WPP_IFR_SF_qdd(
      pFxDriverGlobals,
      2u,
      0x12u,
      0x28u,
      WPP_FxDeviceApi_cpp_Traceguids,
      Device,
      PnpCapabilities->Size,
      48);
  }
  FxVerifierDbgBreakPoint(pFxDriverGlobals);
}
