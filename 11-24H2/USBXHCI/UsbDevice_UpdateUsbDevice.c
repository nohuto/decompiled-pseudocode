/*
 * XREFs of UsbDevice_UpdateUsbDevice @ 0x14003BDAC
 * Callers:
 *     UsbDevice_UcxEvtUpdate @ 0x14003B700 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x14003BB80 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_RunUpdateTunnelStateDsm @ 0x14004DD90 (UsbDevice_RunUpdateTunnelStateDsm.c)
 * Callees:
 *     Etw_DeviceUpdate @ 0x14003423C (Etw_DeviceUpdate.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x140039560 (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     RootHub_SetPortResumeTime @ 0x140049804 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004A6BC (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_Usb4TunnelState @ 0x14004A8C4 (RootHub_Usb4TunnelState.c)
 */

char __fastcall UsbDevice_UpdateUsbDevice(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  char v6; // al

  if ( (*(_DWORD *)(a2 + 24) & 8) != 0 && *(_BYTE *)(a2 + 52) )
    *(_BYTE *)(a1 + 144) = 1;
  if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 124) = *(_OWORD *)v4;
    *(_WORD *)(a1 + 140) = *(_WORD *)(v4 + 16);
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x20) != 0 )
  {
    *(_BYTE *)(a1 + 576) = *(_BYTE *)(a2 + 60) & 1;
    RootHub_Update20HardwareLpmParameters(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned int *)(a2 + 60),
      *(unsigned __int8 *)(a1 + 143));
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x40) != 0 )
  {
    RootHub_SetPortResumeTime(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned __int16 *)(a2 + 64));
    *(_BYTE *)(a1 + 577) = 1;
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( (*(_QWORD *)(v5 + 744) & 0x10000000LL) == 0 && (*(_DWORD *)(a2 + 24) & 0x80u) != 0 )
  {
    v6 = RootHub_Usb4TunnelState(*(_QWORD *)(v5 + 152), *(unsigned int *)(a1 + 44));
    *(_BYTE *)(a2 + 67) = v6;
    *(_BYTE *)(a2 + 66) = ((v6 - 2) & 0xFD) != 0;
  }
  XilUsbDevice_QueryAttributesFromTrustlet(a1);
  return Etw_DeviceUpdate(0LL, a1);
}
