/*
 * XREFs of UsbDevice_UpdateUsbDevice @ 0x14003BBF8
 * Callers:
 *     UsbDevice_UcxEvtUpdate @ 0x14003B5F0 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x14003B9C0 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_RunUpdateTunnelStateDsm @ 0x14004E6F0 (UsbDevice_RunUpdateTunnelStateDsm.c)
 * Callees:
 *     Etw_DeviceUpdate @ 0x140001110 (Etw_DeviceUpdate.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x140039CC0 (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     RootHub_IsDeviceNative @ 0x140049F54 (RootHub_IsDeviceNative.c)
 *     RootHub_SetPortResumeTime @ 0x14004A0F4 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004AFAC (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_Usb4TunnelState @ 0x14004B1B4 (RootHub_Usb4TunnelState.c)
 *     Feature_UTMDSM__private_IsEnabledDeviceUsageNoInline @ 0x14004DEE0 (Feature_UTMDSM__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14004DF34 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall UsbDevice_UpdateUsbDevice(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v8; // rdx
  char v9; // al
  char IsDeviceNative; // al

  if ( (*(_DWORD *)(a2 + 24) & 8) != 0 && *(_BYTE *)(a2 + 52) )
    *(_BYTE *)(a1 + 136) = 1;
  if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)v4;
    *(_WORD *)(a1 + 132) = *(_WORD *)(v4 + 16);
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x20) != 0 )
  {
    *(_BYTE *)(a1 + 568) = *(_BYTE *)(a2 + 60) & 1;
    RootHub_Update20HardwareLpmParameters(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned int *)(a2 + 60),
      *(unsigned __int8 *)(a1 + 135));
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x40) != 0 )
  {
    RootHub_SetPortResumeTime(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned __int16 *)(a2 + 64));
    *(_BYTE *)(a1 + 569) = 1;
  }
  if ( (unsigned int)Feature_UTMDSM__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( (*(_QWORD *)(v5 + 744) & 0x10000000LL) != 0 || (*(_DWORD *)(a2 + 24) & 0x80u) == 0 )
      goto LABEL_20;
    v6 = *(_QWORD *)(v5 + 152);
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 24) & 0x80u) == 0 )
      goto LABEL_20;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
  }
  IsEnabledDeviceUsageNoInline = Feature_UTSP__private_IsEnabledDeviceUsageNoInline();
  v8 = *(unsigned int *)(a1 + 44);
  if ( IsEnabledDeviceUsageNoInline )
  {
    v9 = RootHub_Usb4TunnelState(v6, v8);
    *(_BYTE *)(a2 + 67) = v9;
    IsDeviceNative = ((v9 - 2) & 0xFD) != 0;
  }
  else
  {
    IsDeviceNative = RootHub_IsDeviceNative(v6, v8);
  }
  *(_BYTE *)(a2 + 66) = IsDeviceNative;
LABEL_20:
  XilUsbDevice_QueryAttributesFromTrustlet(a1);
  return Etw_DeviceUpdate(0LL, a1);
}
