/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x14004D9E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x140003694 (WPP_IFR_SF_qqqd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqq @ 0x140041538 (WPP_IFR_SF_qqq.c)
 *     ?ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z @ 0x14004D998 (-ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x14004DBA0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x14004F1D0 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceFormatRequestForControlTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        WDFMEMORY__ *TransferMemory,
        _WDFMEMORY_OFFSET *TransferOffset)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  WDFMEMORY__ *_a3; // rdi
  int _a4; // esi
  _WDF_USB_CONTROL_SETUP_PACKET *m_RequestContext; // rax
  __int64 result; // rax
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp-30h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer buf; // [rsp+60h] [rbp-20h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]
  IFxMemory *pMemory; // [rsp+B0h] [rbp+30h] BYREF
  FxRequest *pRequest; // [rsp+C8h] [rbp+48h] BYREF

  pFxDriverGlobals = 0LL;
  pRequest = 0LL;
  pMemory = 0LL;
  pUsbDevice = 0LL;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice,
    &pFxDriverGlobals);
  v9 = pFxDriverGlobals;
  _a3 = TransferMemory;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_qqq(
      pFxDriverGlobals,
      5u,
      0xEu,
      0x1Du,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      UsbDevice,
      Request,
      TransferMemory);
  if ( !SetupPacket )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( _a3 )
  {
    FxObjectHandleGetPtr(v9, (unsigned __int64)_a3, 0x100Au, (void **)&pMemory);
    result = IFxMemory::ValidateMemoryOffsets(pMemory, TransferOffset);
    if ( (int)result < 0 )
      return result;
    FxRequestBuffer::SetMemory(&buf, pMemory, TransferOffset);
  }
  FxObjectHandleGetPtr(v9, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  _a4 = FxUsbDevice::FormatControlRequest(pUsbDevice, pRequest, SetupPacket, &buf);
  if ( _a4 >= 0 )
  {
    m_RequestContext = (_WDF_USB_CONTROL_SETUP_PACKET *)pRequest->m_RequestContext;
    m_RequestContext[14] = *SetupPacket;
    if ( pMemory )
      m_RequestContext[13] = (_WDF_USB_CONTROL_SETUP_PACKET)_a3;
  }
  if ( v9->FxVerboseOn )
    WPP_IFR_SF_qqqd(v9, 5u, 0xEu, 0x1Eu, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, Request, _a3, _a4);
  return (unsigned int)_a4;
}
