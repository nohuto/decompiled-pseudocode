/*
 * XREFs of Usbh_SSH_HubSuspended @ 0x1400303F4
 * Callers:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSshResumeDownstream @ 0x14001DC6C (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x140030B38 (UsbhSshResumeUpstream.c)
 *     UsbhUnlockSSH @ 0x140031080 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubSuspended(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // r9
  __int64 v15; // [rsp+20h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v6 = a2 - 1;
  if ( !v6 )
  {
    UsbhUnlockSSH(a3);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 )
  {
LABEL_16:
    UsbhUnlockSSH(a3);
    return (unsigned int)-1073741823;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 2 )
    {
      UsbhUnlockSSH(a3);
      UsbhSshResumeDownstream(a1, a3, 1);
      return 0;
    }
    goto LABEL_16;
  }
  UsbhUnlockSSH(a3);
  LODWORD(v15) = 0;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START, v15, 0);
  v12 = UsbhSshResumeUpstream(a1, a3);
  if ( v12 < 0 )
    Usbh_SSH_Event(*(_QWORD *)(a3 + 8), 9LL, a3, v13);
  return (unsigned int)v12;
}
