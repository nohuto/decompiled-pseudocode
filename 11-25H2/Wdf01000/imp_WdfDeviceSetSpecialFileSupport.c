/*
 * XREFs of imp_WdfDeviceSetSpecialFileSupport @ 0x1400811C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z @ 0x14008169C (-SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfDeviceSetSpecialFileSupport(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        int FileType,
        unsigned __int8 Supported)
{
  unsigned int v7; // edx
  _FX_DRIVER_GLOBALS *v8; // rdi
  unsigned int v9; // edx
  _FX_DRIVER_GLOBALS *v10; // rcx
  int v11; // r8d
  unsigned __int16 v12; // r9
  unsigned int v13; // r8d
  _FX_DRIVER_GLOBALS *v14; // rcx
  int v15; // r8d
  FxDevice *pDevice[3]; // [rsp+40h] [rbp-18h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pDevice[0] = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)pDevice,
    &pFxDriverGlobals);
  if ( FileType < 1 || FileType == 5 || FileType >= 8 )
  {
    WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0x12u, 0x10u, WPP_FxDeviceApiKm_cpp_Traceguids, Device, FileType);
    v14 = pFxDriverGlobals;
    goto LABEL_16;
  }
  v8 = pFxDriverGlobals;
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(pFxDriverGlobals, v7, 0x1Du) || FileType <= 4 )
  {
    if ( FxLibraryGlobals.Feature_SteelixInlineNvmeCryptoEngine_Enabled )
    {
      if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v10, v9, 0x21u) && FileType >= 7 )
      {
        v12 = v15 - 15;
        v13 = v15 - 15;
        goto LABEL_7;
      }
    }
    else if ( FileType >= 7 )
    {
      WPP_IFR_SF_qd(v10, 2u, 0x12u, 0x13u, WPP_FxDeviceApiKm_cpp_Traceguids, Device, FileType);
      return;
    }
    FxObjectHandleGetPtr(v8, (unsigned __int64)Device, 0x1002u, (void **)pDevice);
    FxPkgPnp::SetSpecialFileSupport(pDevice[0]->m_PkgPnp, (_WDF_SPECIAL_FILE_TYPE)FileType, Supported);
    return;
  }
  v12 = v11 - 12;
  v13 = v11 - 12 + 1;
LABEL_7:
  WPP_IFR_SF_qd(v10, 2u, v13, v12, WPP_FxDeviceApiKm_cpp_Traceguids, Device, FileType);
  v14 = v8;
LABEL_16:
  FxVerifierDbgBreakPoint(v14);
}
