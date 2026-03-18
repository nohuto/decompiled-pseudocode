/*
 * XREFs of UsbhValidateConfigurationDescriptor @ 0x14005B174
 * Callers:
 *     UsbhFdoSelectConfigurationPdo @ 0x14000BE94 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhGetDeviceInformation @ 0x140027C88 (UsbhGetDeviceInformation.c)
 *     UsbhConfigureUsbHub @ 0x14003A328 (UsbhConfigureUsbHub.c)
 * Callees:
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1400411A4 (USBD_ValidateConfigurationDescriptorInternal.c)
 */

char __fastcall UsbhValidateConfigurationDescriptor(__int64 a1, unsigned int a2, _DWORD *a3, char a4)
{
  char v5; // di
  unsigned __int8 *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = 1;
  if ( *(_BYTE *)(a1 + 1) != 2 )
  {
    v5 = 0;
    if ( a3 )
      *a3 = -1073737984;
  }
  if ( *(_BYTE *)a1 < 9u )
  {
    v5 = 0;
    if ( a3 )
      *a3 = -1073737984;
  }
  if ( a4 )
  {
    if ( (unsigned int)USBD_ValidateConfigurationDescriptorInternal((unsigned __int16 *)a1, a2, (__int64)a3, &v7) )
    {
      v5 = 0;
      if ( a3 )
        *a3 = -1073737984;
    }
  }
  return v5;
}
