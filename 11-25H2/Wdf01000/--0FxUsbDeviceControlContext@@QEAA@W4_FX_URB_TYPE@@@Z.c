/*
 * XREFs of ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x140003280
 * Callers:
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1400027F0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140030320 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 * Callees:
 *     memset @ 0x1400AC740 (memset.c)
 */

void __fastcall FxUsbDeviceControlContext::FxUsbDeviceControlContext(
        FxUsbDeviceControlContext *this,
        _FX_URB_TYPE FxUrbType)
{
  _URB_CONTROL_TRANSFER *p_m_UrbLegacy; // rax

  this->m_RequestType = 19;
  this->m_RequestMemory = 0LL;
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
  *(_OWORD *)&this->m_UsbParameters.UsbdStatus = 0LL;
  *(_OWORD *)(&this->m_UsbParameters.Parameters.PipeUrb + 1) = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&this->m_UsbParameters;
  this->__vftable = (FxUsbDeviceControlContext_vtbl *)FxUsbDeviceControlContext::`vftable';
  p_m_UrbLegacy = &this->m_UrbLegacy;
  if ( FxUrbType )
    p_m_UrbLegacy = 0LL;
  this->m_CompletionParams.Type = WdfRequestTypeUsb;
  this->m_UsbParameters.Type = WdfUsbRequestTypeNoFormat;
  this->m_PartialMdl = 0LL;
  this->m_UnlockPages = 0;
  this->m_USBDHandle = 0LL;
  this->m_Urb = p_m_UrbLegacy;
}
