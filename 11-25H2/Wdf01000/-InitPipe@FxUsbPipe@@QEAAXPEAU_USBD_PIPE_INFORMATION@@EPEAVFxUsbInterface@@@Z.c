/*
 * XREFs of ?InitPipe@FxUsbPipe@@QEAAXPEAU_USBD_PIPE_INFORMATION@@EPEAVFxUsbInterface@@@Z @ 0x1400831FC
 * Callers:
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x14005AE50 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1400446E0 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbPipe::InitPipe(
        FxUsbPipe *this,
        _USBD_PIPE_INFORMATION *PipeInfo,
        unsigned __int8 InterfaceNumber,
        FxUsbInterface *UsbInterface)
{
  FxUsbInterface *m_UsbInterface; // rcx

  this->m_PipeInformation = *PipeInfo;
  this->m_InterfaceNumber = InterfaceNumber;
  m_UsbInterface = this->m_UsbInterface;
  if ( m_UsbInterface )
    m_UsbInterface->Release(
      m_UsbInterface,
      this,
      1088,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
  this->m_UsbInterface = UsbInterface;
  FxObject::AddRef(UsbInterface, this, 1093, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
}
