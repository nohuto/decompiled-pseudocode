/*
 * XREFs of ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x14007E5C4
 * Callers:
 *     ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x14009F8A0 (-GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009FF84 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A02F0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     <none>
 */

_USB_INTERFACE_DESCRIPTOR *__fastcall FxUsbInterface::GetSettingDescriptor(
        FxUsbInterface *this,
        unsigned __int8 Setting)
{
  unsigned __int8 i; // r9
  _USB_INTERFACE_DESCRIPTOR *result; // rax

  for ( i = 0; i < this->m_NumSettings; ++i )
  {
    result = this->m_Settings[i].InterfaceDescriptor;
    if ( result->bAlternateSetting == Setting )
      return result;
  }
  return 0LL;
}
