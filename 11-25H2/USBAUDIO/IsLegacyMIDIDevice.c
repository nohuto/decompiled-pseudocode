/*
 * XREFs of IsLegacyMIDIDevice @ 0x140036B7C
 * Callers:
 *     USBDeviceStart @ 0x140040B80 (USBDeviceStart.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLegacyMIDIDevice(struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition)
{
  char v2; // bl

  v2 = 0;
  if ( !USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, -1, -1, 1, 2, -1) )
    return USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, -1, -1, 1, 3, -1) != 0LL;
  return v2;
}
