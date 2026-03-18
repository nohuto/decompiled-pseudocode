/*
 * XREFs of ??1FxUsbDeviceStringContext@@UEAA@XZ @ 0x14009E840
 * Callers:
 *     ??_GFxUsbDeviceStringContext@@UEAAPEAXI@Z @ 0x14009E8C0 (--_GFxUsbDeviceStringContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     USBD_UrbFree @ 0x140066D7C (USBD_UrbFree.c)
 */

void __fastcall FxUsbDeviceStringContext::~FxUsbDeviceStringContext(FxUsbDeviceStringContext *this)
{
  _USB_STRING_DESCRIPTOR *m_StringDescriptor; // rcx
  _URB *m_Urb; // rdx

  this->__vftable = (FxUsbDeviceStringContext_vtbl *)FxUsbDeviceStringContext::`vftable';
  m_StringDescriptor = this->m_StringDescriptor;
  if ( m_StringDescriptor )
  {
    FxPoolFree(m_StringDescriptor);
    this->m_StringDescriptor = 0LL;
  }
  m_Urb = (_URB *)this->m_Urb;
  if ( m_Urb && m_Urb != (_URB *)&this->m_UrbLegacy )
    USBD_UrbFree(this->m_USBDHandle, m_Urb);
  this->m_Urb = 0LL;
  this->m_USBDHandle = 0LL;
  this->__vftable = (FxUsbDeviceStringContext_vtbl *)FxRequestContext::`vftable';
}
