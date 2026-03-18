/*
 * XREFs of Usbh_SSH_HubPendingSuspend @ 0x140030F20
 * Callers:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhLockSSH @ 0x14000C410 (UsbhLockSSH.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhUnlockSSH @ 0x140031080 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingSuspend(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v6; // r14
  int v7; // edi
  unsigned int v8; // edi
  int v10; // edi
  int v11; // edi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+28h] [rbp-20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v6 = FdoExt(a1);
  v7 = a2 - 1;
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 3 )
        {
          UsbhUnlockSSH(a3);
          v13 = 0;
          LODWORD(Timeout) = 0;
          UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START, Timeout, v13);
          KeWaitForSingleObject(v6 + 846, Executive, 0, 0, 0LL);
          v8 = -1073741823;
          if ( (unsigned int)UsbhLockSSH(a3, 6) != 6 )
            v8 = 0;
        }
        else
        {
          v8 = -1073741823;
        }
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = 0;
  }
  UsbhUnlockSSH(a3);
  return v8;
}
