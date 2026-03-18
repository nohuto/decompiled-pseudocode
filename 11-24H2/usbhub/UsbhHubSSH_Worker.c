/*
 * XREFs of UsbhHubSSH_Worker @ 0x1400368D0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

LONG __fastcall UsbhHubSSH_Worker(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v5; // rbx
  __int64 v6; // r9

  v5 = (struct _KEVENT *)FdoExt(a1);
  Usbh_SSH_Event(a1, 1LL, a3, v6);
  return KeSetEvent(v5 + 143, 0, 0);
}
