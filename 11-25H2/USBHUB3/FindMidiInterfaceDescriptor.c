/*
 * XREFs of FindMidiInterfaceDescriptor @ 0x140029E70
 * Callers:
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x14002C9E0 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1400074C8 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_q @ 0x14001DDC4 (WPP_RECORDER_SF_q.c)
 */

PUSB_INTERFACE_DESCRIPTOR __fastcall FindMidiInterfaceDescriptor(
        struct _USB_CONFIGURATION_DESCRIPTOR *DescriptorBuffer,
        void *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdi
  PUSB_INTERFACE_DESCRIPTOR v7; // rbx
  __int64 bLength; // rcx
  unsigned __int8 *v9; // rbp
  PUSB_INTERFACE_DESCRIPTOR v10; // rsi
  PUSB_COMMON_DESCRIPTOR v11; // rax
  __int64 InterfaceProtocol; // [rsp+30h] [rbp-28h]

  v6 = 0LL;
  v7 = USBD_ParseConfigurationDescriptorEx(DescriptorBuffer, a2, -1, -1, 1, 3, -1);
  if ( v7 )
  {
    while ( 1 )
    {
      bLength = v7->bLength;
      v9 = &v7->bLength + bLength;
      if ( (PUSB_INTERFACE_DESCRIPTOR)((char *)v7 + bLength) < v7 )
        break;
      v10 = USBD_ParseConfigurationDescriptorEx(DescriptorBuffer, &v7->bLength + bLength, -1, -1, 1, 3, -1);
      v11 = USBD_ParseDescriptors(DescriptorBuffer, DescriptorBuffer->wTotalLength, v9, 36);
      if ( !v11 || v10 && v11 > (PUSB_COMMON_DESCRIPTOR)v10 || v11->bLength < 7u || v11[1].bLength != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(a4, 2u, 5u, 0x47u, (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids, v7);
        return (PUSB_INTERFACE_DESCRIPTOR)v6;
      }
      if ( v11[2].bLength == 2 )
        return v7;
      v7 = v10;
      if ( !v10 )
        return (PUSB_INTERFACE_DESCRIPTOR)v6;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(InterfaceProtocol) = v7->bLength;
      WPP_RECORDER_SF_qd(
        a4,
        2u,
        5u,
        0x46u,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v7,
        InterfaceProtocol);
    }
  }
  return (PUSB_INTERFACE_DESCRIPTOR)v6;
}
