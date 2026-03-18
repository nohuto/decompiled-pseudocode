/*
 * XREFs of ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x140064448
 * Callers:
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140030320 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ??_EFxUsbDeviceControlContext@@UEAAPEAXI@Z @ 0x140064410 (--_EFxUsbDeviceControlContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     USBD_UrbFree @ 0x14006893C (USBD_UrbFree.c)
 */

void __fastcall FxUsbDeviceControlContext::~FxUsbDeviceControlContext(FxUsbDeviceControlContext *this)
{
  _URB *m_Urb; // rdx

  m_Urb = (_URB *)this->m_Urb;
  this->__vftable = (FxUsbDeviceControlContext_vtbl *)FxUsbDeviceControlContext::`vftable';
  if ( m_Urb && m_Urb != (_URB *)&this->m_UrbLegacy )
    USBD_UrbFree(this->m_USBDHandle, m_Urb);
  this->m_Urb = 0LL;
  this->m_USBDHandle = 0LL;
  this->__vftable = (FxUsbDeviceControlContext_vtbl *)FxRequestContext::`vftable';
}
