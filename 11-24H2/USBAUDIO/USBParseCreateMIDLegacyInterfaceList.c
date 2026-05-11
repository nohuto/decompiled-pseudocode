/*
 * XREFs of USBParseCreateMIDLegacyInterfaceList @ 0x1400371DC
 * Callers:
 *     USBHwCreateInterfaceList @ 0x14003526C (USBHwCreateInterfaceList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBParseCreateMIDLegacyInterfaceList(
        PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
        __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v4; // edi
  PUSB_INTERFACE_DESCRIPTOR v5; // rax
  bool v6; // zf
  int v7; // ebx
  __int64 v8; // rax
  unsigned __int8 *p_bLength; // r8

  v2 = *a2;
  v4 = 0;
  v5 = USBD_ParseConfigurationDescriptorEx(ConfigurationDescriptor, ConfigurationDescriptor, -1, -1, 1, 3, -1);
  v6 = v5 == 0LL;
  v7 = -1073741438;
  if ( v5 )
    v7 = 0;
  while ( 1 )
  {
    p_bLength = &v5->bLength;
    if ( v6 || v4 >= ConfigurationDescriptor->bNumInterfaces )
      break;
    v8 = 2LL * v4++;
    *(_QWORD *)(v2 + 8 * v8) = p_bLength;
    v5 = USBD_ParseConfigurationDescriptorEx(ConfigurationDescriptor, &p_bLength[*p_bLength], -1, -1, 1, 3, -1);
    v6 = v5 == 0LL;
  }
  if ( v5 && v4 == ConfigurationDescriptor->bNumInterfaces )
  {
    return (unsigned int)-1073741438;
  }
  else if ( v7 >= 0 )
  {
    *(_QWORD *)(v2 + 16LL * v4) = 0LL;
  }
  return (unsigned int)v7;
}
