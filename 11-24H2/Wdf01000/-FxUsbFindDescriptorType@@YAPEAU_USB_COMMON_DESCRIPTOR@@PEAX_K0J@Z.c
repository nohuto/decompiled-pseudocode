/*
 * XREFs of ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x14007D568
 * Callers:
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x14007D49C (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x14009EB70 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x14009F688 (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A0054 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 * Callees:
 *     <none>
 */

_USB_COMMON_DESCRIPTOR *__fastcall FxUsbFindDescriptorType(
        char *Buffer,
        unsigned __int64 BufferLength,
        unsigned __int8 *Start,
        int DescriptorType)
{
  while ( Start < (unsigned __int8 *)&Buffer[BufferLength] )
  {
    if ( Start[1] == DescriptorType )
      return (_USB_COMMON_DESCRIPTOR *)Start;
    Start += *Start;
  }
  return 0LL;
}
