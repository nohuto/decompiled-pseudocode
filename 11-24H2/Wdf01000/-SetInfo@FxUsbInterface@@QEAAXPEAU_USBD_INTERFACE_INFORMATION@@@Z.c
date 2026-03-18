/*
 * XREFs of ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x140050854
 * Callers:
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x14004F8DC (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14004FC24 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 * Callees:
 *     ?InitPipe@FxUsbPipe@@QEAAXPEAU_USBD_PIPE_INFORMATION@@EPEAVFxUsbInterface@@@Z @ 0x1400831EC (-InitPipe@FxUsbPipe@@QEAAXPEAU_USBD_PIPE_INFORMATION@@EPEAVFxUsbInterface@@@Z.c)
 */

void __fastcall FxUsbInterface::SetInfo(FxUsbInterface *this, _USBD_INTERFACE_INFORMATION *InterfaceInfo)
{
  unsigned __int8 v2; // di

  v2 = 0;
  for ( this->m_CurAlternateSetting = InterfaceInfo->AlternateSetting; v2 < this->m_NumberOfConfiguredPipes; ++v2 )
    FxUsbPipe::InitPipe(this->m_ConfiguredPipes[v2], &InterfaceInfo->Pipes[v2], InterfaceInfo->InterfaceNumber, this);
}
