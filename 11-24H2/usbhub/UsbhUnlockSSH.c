/*
 * XREFs of UsbhUnlockSSH @ 0x140031080
 * Callers:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     Usbh_SSH_HubActive @ 0x14000C160 (Usbh_SSH_HubActive.c)
 *     Usbh_SSH_HubSuspended @ 0x1400303F4 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x140030F20 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubPendingResume @ 0x1400310F4 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubFailedResume @ 0x14005E73C (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005E7B8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

LONG __fastcall UsbhUnlockSSH(__int64 a1, int a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r8

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  v5 = 8LL * (unsigned int)v4[864];
  v4[781] = a2;
  v4[v5 + 867] = a2;
  *(_DWORD *)(a1 + 120) = 1734964085;
  *((_QWORD *)v4 + 399) = 0LL;
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 782), 16, 1, 0);
}
