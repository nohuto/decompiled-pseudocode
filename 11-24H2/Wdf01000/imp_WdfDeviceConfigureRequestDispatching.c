/*
 * XREFs of imp_WdfDeviceConfigureRequestDispatching @ 0x140091840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DD @ 0x140002E14 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1400A0C38 (-ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z @ 0x1400AAB8C (-ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z.c)
 */

int __fastcall imp_WdfDeviceConfigureRequestDispatching(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFQUEUE__ *Queue,
        unsigned int RequestType)
{
  int v7; // eax
  int v8; // ebx
  unsigned __int16 v10; // r9
  FxDevice *pDevice; // [rsp+40h] [rbp-18h] BYREF
  FxIoQueue *pFxIoQueue; // [rsp+48h] [rbp-10h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  pFxIoQueue = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( RequestType <= 0xF && (v7 = 49177, _bittest(&v7, RequestType)) )
  {
    FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)Queue, 0x1003u, (void **)&pFxIoQueue);
    if ( pDevice != pFxIoQueue->m_Device )
    {
      v8 = -1073741808;
      WPP_IFR_SF_qqd(pFxDriverGlobals, 2u, 0xDu, 0x32u, WPP_FxDeviceApi_cpp_Traceguids, Queue, Device, 0xC0000010);
      return v8;
    }
    if ( pDevice->m_Legacy )
    {
      if ( (pDevice->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
      {
        v10 = 51;
LABEL_9:
        v8 = -1073741436;
        WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0xCu, v10, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741436);
        return v8;
      }
    }
    else if ( pDevice->m_CurrentPnpState != WdfDevStatePnpInit )
    {
      v10 = 52;
      goto LABEL_9;
    }
    if ( RequestType )
      return FxPkgIo::ConfigureForwarding(pDevice->m_PkgIo, pFxIoQueue, (_WDF_REQUEST_TYPE)RequestType);
    else
      return FxPkgGeneral::ConfigureForwarding(pDevice->m_PkgGeneral, pFxIoQueue);
  }
  else
  {
    WPP_IFR_SF_DD(
      pFxDriverGlobals,
      (unsigned __int8)WPP_FxDeviceApi_cpp_Traceguids,
      0xDu,
      0x31u,
      WPP_FxDeviceApi_cpp_Traceguids,
      RequestType,
      0xC000000D);
    return -1073741811;
  }
}
