/*
 * XREFs of Usbh_SSH_Event @ 0x14000A9E0
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140009180 (UsbhFdoDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x14000C4F0 (UsbhFdoReturnPortStatus.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhSshSuspendHub @ 0x140013464 (UsbhSshSuspendHub.c)
 *     UsbhAcquireEnumBusLock @ 0x140018F14 (UsbhAcquireEnumBusLock.c)
 *     UsbhSshResumeDownstream @ 0x14001DC6C (UsbhSshResumeDownstream.c)
 *     UsbhQueryBusRelations @ 0x140024E3C (UsbhQueryBusRelations.c)
 *     Usbh_SSH_HubSuspended @ 0x1400303F4 (Usbh_SSH_HubSuspended.c)
 *     UsbhSshResumeUpstream @ 0x140030B38 (UsbhSshResumeUpstream.c)
 *     UsbhInternalIoctlPropagateResume @ 0x140034074 (UsbhInternalIoctlPropagateResume.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140036200 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhHubSSH_Worker @ 0x1400368D0 (UsbhHubSSH_Worker.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     UsbhHardReset_Action @ 0x14004B668 (UsbhHardReset_Action.c)
 *     UsbhAsyncStop @ 0x14004F168 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x14004FBF0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051310 (Usbh_FDO_WaitPnpStop.c)
 *     UsbhSShResumeWorker @ 0x14005E260 (UsbhSShResumeWorker.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usbh_SSH_HubActive @ 0x14000C160 (Usbh_SSH_HubActive.c)
 *     Usbh_SSH_HubSuspended @ 0x1400303F4 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x140030F20 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhUnlockSSH @ 0x140031080 (UsbhUnlockSSH.c)
 *     Usbh_SSH_HubPendingResume @ 0x1400310F4 (Usbh_SSH_HubPendingResume.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubFailedResume @ 0x14005E73C (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005E7B8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall Usbh_SSH_Event(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v7; // rbp
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rcx

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids,
      a2);
  v7 = FdoExt(*(_QWORD *)(a3 + 8), a2, a3, a4);
  KeWaitForSingleObject((PVOID)(v7 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v7 + 3192) = a3;
  *(_DWORD *)(a3 + 120) = 2018005843;
  *(_DWORD *)(a3 + 124) = v5;
  *(_QWORD *)(a3 + 24) = KeGetCurrentThread();
  v8 = *(_DWORD *)(v7 + 3456);
  v9 = 32LL * (v8 & 7);
  if ( *(_DWORD *)(v9 + v7 + 3460) != v5 || *(_DWORD *)(v9 + v7 + 3464) != *(_DWORD *)(v7 + 3124) )
  {
    v12 = ((_BYTE)v8 + 1) & 7;
    *(_DWORD *)(v7 + 3456) = v12;
    v12 *= 32LL;
    *(_DWORD *)(v12 + v7 + 3460) = v5;
    *(_DWORD *)(v12 + v7 + 3464) = *(_DWORD *)(v7 + 3124);
  }
  v10 = *(unsigned int *)(v7 + 3124);
  switch ( (_DWORD)v10 )
  {
    case 1:
      return Usbh_SSH_HubActive(a1, v5, a3);
    case 2:
      return Usbh_SSH_HubPendingSuspend(a1, v5, a3);
    case 3:
      return Usbh_SSH_HubPendingResumeAfterSuspend(a1, v5, a3);
    case 4:
      return Usbh_SSH_HubSuspended(a1, v5, a3);
    case 5:
      return Usbh_SSH_HubPendingResume(a1, v5, a3);
    case 6:
      return Usbh_SSH_HubFailedResume(a1, v10, a3);
  }
  UsbhUnlockSSH(a3);
  return 3221225473LL;
}
