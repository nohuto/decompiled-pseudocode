/*
 * XREFs of imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x140091980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z @ 0x14007BD90 (-GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_cd @ 0x140091194 (WPP_IFR_SF_cd.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1400A0944 (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 */

__int64 __fastcall imp_WdfDeviceConfigureWdmIrpDispatchCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFDRIVER__ *Driver,
        unsigned __int8 MajorFunction,
        int (__fastcall *EvtDeviceWdmIrpDispatch)(WDFDEVICE__ *, unsigned __int8, unsigned __int8, unsigned int, void *, _IRP *, void *),
        void *DriverContext)
{
  int v7; // esi
  FxCxDeviceInfo *CxDeviceInfo; // rbp
  unsigned __int8 v9; // dl
  unsigned int v10; // ebx
  FxDevice *v11; // r8
  unsigned __int16 v12; // r9
  FxDevice *pDevice; // [rsp+40h] [rbp-18h] BYREF
  FxDriver *pDriver; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  v7 = MajorFunction;
  CxDeviceInfo = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( v7 == 3 || v7 == 4 || (unsigned int)(v7 - 14) < 2 )
  {
    if ( Driver )
    {
      pDriver = 0LL;
      FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
      CxDeviceInfo = FxDevice::GetCxDeviceInfo(pDevice, pDriver);
    }
    else
    {
      v11 = pDevice;
    }
    if ( !EvtDeviceWdmIrpDispatch )
      FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
    if ( v11->m_Legacy )
    {
      if ( (v11->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
      {
        v10 = -1073741436;
        v12 = 61;
LABEL_13:
        WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0xCu, v12, WPP_FxDeviceApi_cpp_Traceguids, v11, -1073741436);
        return v10;
      }
    }
    else if ( v11->m_CurrentPnpState != WdfDevStatePnpInit )
    {
      v10 = -1073741436;
      v12 = 62;
      goto LABEL_13;
    }
    return (unsigned int)FxPkgIo::ConfigureDynamicDispatching(
                           v11->m_PkgIo,
                           v7,
                           CxDeviceInfo,
                           EvtDeviceWdmIrpDispatch,
                           DriverContext);
  }
  v10 = -1073741811;
  WPP_IFR_SF_cd(pFxDriverGlobals, v9, 0xCu, 0x3Cu, WPP_FxDeviceApi_cpp_Traceguids, v7);
  return v10;
}
