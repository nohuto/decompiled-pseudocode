/*
 * XREFs of ??0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x14009E6C0
 * Callers:
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x14009FC20 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x140003F80 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

void __fastcall FxUsbDeviceStringContext::FxUsbDeviceStringContext(
        FxUsbDeviceStringContext *this,
        _FX_URB_TYPE FxUrbType)
{
  FxUsbRequestContext::FxUsbRequestContext(this, 0x14u);
  this->m_USBDHandle = 0LL;
  this->m_StringDescriptor = 0LL;
  this->m_StringDescriptorLength = 0;
  this->__vftable = (FxUsbDeviceStringContext_vtbl *)FxUsbDeviceStringContext::`vftable';
  memset(&this->m_UrbLegacy, 0, sizeof(this->m_UrbLegacy));
  if ( FxUrbType )
  {
    this->m_Urb = 0LL;
  }
  else
  {
    this->m_Urb = &this->m_UrbLegacy;
    this->m_UrbLegacy.Hdr.Function = 11;
    this->m_Urb->Hdr.Length = 136;
    this->m_Urb->DescriptorType = 3;
  }
}
