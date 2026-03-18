/*
 * XREFs of ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x14009F970
 * Callers:
 *     imp_WdfUsbInterfaceGetEndpointInformation @ 0x14009C880 (imp_WdfUsbInterfaceGetEndpointInformation.c)
 * Callees:
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x14007E234 (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

void __fastcall FxUsbInterface::GetEndpointInformation(
        FxUsbInterface *this,
        unsigned __int8 SettingIndex,
        unsigned __int8 EndpointIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  char v7; // bl
  unsigned __int64 SettingDescriptor; // rax
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // r8
  unsigned __int8 *v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int8 v14; // al
  int v15; // eax
  int v16; // eax

  v7 = 0;
  SettingDescriptor = (unsigned __int64)FxUsbInterface::GetSettingDescriptor(this, SettingIndex);
  if ( SettingDescriptor )
  {
    v11 = *(_QWORD *)(v9 + 120);
    v12 = (unsigned __int8 *)*(unsigned __int8 *)SettingDescriptor;
    v13 = *(_QWORD *)(v11 + 400) + *(unsigned __int16 *)(*(_QWORD *)(v11 + 400) + 2LL);
    while ( 1 )
    {
      v12 += SettingDescriptor;
      if ( (unsigned __int64)v12 >= v13 )
        break;
      v14 = v12[1];
      if ( v14 == 4 )
        break;
      if ( v14 == 5 )
      {
        if ( EndpointIndex == v7 )
        {
          *(_DWORD *)(v10 + 4) = *((unsigned __int16 *)v12 + 2);
          *(_BYTE *)(v10 + 8) = v12[2];
          *(_BYTE *)(v10 + 9) = v12[6];
          v15 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[v12[3] & 3];
          *(_DWORD *)(v10 + 12) = v15;
          if ( v15 == 1 )
            v16 = 4096;
          else
            v16 = (this->m_UsbDevice->m_Traits & 4) != 0 ? 0x200000 : 0x40000;
          *(_DWORD *)(v10 + 16) = v16;
          *(_BYTE *)(v10 + 10) = SettingIndex;
          return;
        }
        ++v7;
      }
      SettingDescriptor = *v12;
    }
  }
}
