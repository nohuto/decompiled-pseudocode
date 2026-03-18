/*
 * XREFs of UsbhHubSSH_Timer @ 0x14002BED0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEventSignaled @ 0x14002BF70 (UsbhEventSignaled.c)
 *     UsbhQueueWorkItemEx @ 0x14002BFA0 (UsbhQueueWorkItemEx.c)
 */

__int64 __fastcall UsbhHubSSH_Timer(__int64 a1, __int64 a2)
{
  struct _KEVENT *v3; // rbx
  unsigned int v4; // eax

  v3 = (struct _KEVENT *)(FdoExt(a2) + 858);
  if ( (unsigned __int8)UsbhEventSignaled(v3) )
  {
    KeResetEvent(v3);
    v4 = (unsigned int)FdoExt(a2);
    if ( (UsbhQueueWorkItemEx(a2, 1, (unsigned int)UsbhHubSSH_Worker, v4 + 2088, 0, 2001228627, 0LL) & 0xC0000000) == 0xC0000000 )
      KeSetEvent(v3, 0, 0);
  }
  return 0LL;
}
