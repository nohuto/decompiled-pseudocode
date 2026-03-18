/*
 * XREFs of Usbh_SSH_HubPendingResume @ 0x1400310F4
 * Callers:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhLockSSH @ 0x14000C410 (UsbhLockSSH.c)
 *     UsbhDisarmHubForWakeDetect @ 0x140014368 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhSshResumeDownstream @ 0x14001DC6C (UsbhSshResumeDownstream.c)
 *     UsbhUnlockSSH @ 0x140031080 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResume(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v6; // rbp
  int v7; // ebx
  int v8; // ebx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v6 = FdoExt(a1);
  v7 = a2 - 1;
  if ( !v7 )
  {
    v20 = 5;
    goto LABEL_25;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = FdoExt(*(_QWORD *)(a3 + 8));
    v10 = 8LL * (unsigned int)v9[864];
    v9[781] = 5;
    v9[v10 + 867] = 5;
    *(_DWORD *)(a3 + 120) = 1734964085;
    *((_QWORD *)v9 + 399) = 0LL;
    KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 782), 16, 1, 0);
    return 3221225473LL;
  }
  v12 = v8 - 1;
  if ( !v12 || (v13 = v12 - 1) == 0 || (v14 = v13 - 1) == 0 )
  {
    v18 = a3;
    goto LABEL_20;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v17 = v15 - 1;
    if ( v17 )
    {
      v18 = a3;
      v19 = v17 - 1;
      if ( !v19 )
      {
        UsbhUnlockSSH(a3, 5);
        UsbhSshResumeDownstream(a1, a3, 1);
        return 0LL;
      }
      if ( v19 == 1 )
      {
        UsbhUnlockSSH(a3, 6);
        UsbhDisarmHubForWakeDetect(a1);
        return 0LL;
      }
LABEL_20:
      UsbhUnlockSSH(v18, 5);
      return 3221225473LL;
    }
    v20 = 1;
LABEL_25:
    UsbhUnlockSSH(a3, v20);
    return 0LL;
  }
  UsbhUnlockSSH(a3, 5);
  KeWaitForSingleObject(v6 + 846, Executive, 0, 0, 0LL);
  v16 = UsbhLockSSH(a3, 6);
  UsbhUnlockSSH(a3, v16);
  result = 3221225473LL;
  if ( v16 != 6 )
    return 0LL;
  return result;
}
