/*
 * XREFs of ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x14009E430
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x14009EB70 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_i @ 0x140010FFC (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_dii @ 0x14009E4DC (WPP_IFR_SF_dii.c)
 *     WPP_IFR_SF_idii @ 0x14009E5D4 (WPP_IFR_SF_idii.c)
 */

__int64 __fastcall FxUsbValidateConfigDescriptorHeaders(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _USB_CONFIGURATION_DESCRIPTOR *ConfigDescriptor,
        __int64 ConfigDescriptorLength)
{
  _USB_CONFIGURATION_DESCRIPTOR *v3; // r9
  _USB_CONFIGURATION_DESCRIPTOR *i; // r10
  __int64 level; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-38h]
  int globals; // [rsp+28h] [rbp-30h]

  v3 = (_USB_CONFIGURATION_DESCRIPTOR *)((char *)ConfigDescriptor + ConfigDescriptorLength);
  for ( i = ConfigDescriptor; i < v3; i = (_USB_CONFIGURATION_DESCRIPTOR *)((char *)i + level) )
  {
    if ( &i->wTotalLength > (unsigned __int16 *)v3 )
    {
      WPP_IFR_SF_dii(
        FxDriverGlobals,
        (unsigned __int8)ConfigDescriptor,
        ConfigDescriptorLength,
        (unsigned __int16)v3,
        _a1,
        globals,
        (char *)i - (char *)ConfigDescriptor,
        ConfigDescriptorLength);
      return 3221225485LL;
    }
    level = i->bLength;
    if ( (_USB_CONFIGURATION_DESCRIPTOR *)((char *)i + level) > v3 )
    {
      WPP_IFR_SF_idii(
        FxDriverGlobals,
        (unsigned __int8)ConfigDescriptor,
        ConfigDescriptorLength,
        (_WORD)v3 - (_WORD)i,
        _a1,
        (char *)i - (char *)ConfigDescriptor,
        level,
        (char *)v3 - (char *)i,
        ConfigDescriptorLength);
      return 3221225485LL;
    }
    if ( !(_BYTE)level )
    {
      WPP_IFR_SF_i(
        FxDriverGlobals,
        (unsigned __int8)ConfigDescriptor,
        0xEu,
        0xDu,
        WPP_usbutil_cpp_Traceguids,
        (char *)i - (char *)ConfigDescriptor);
      return 3221225485LL;
    }
  }
  return 0LL;
}
