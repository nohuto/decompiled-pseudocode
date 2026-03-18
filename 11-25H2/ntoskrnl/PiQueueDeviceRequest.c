/*
 * XREFs of PiQueueDeviceRequest @ 0x140AB40E8
 * Callers:
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     PnpCancelDeviceActionRequest @ 0x1405A39C0 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405A3A70 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpDeleteDeviceActionRequest @ 0x14096DC14 (PnpDeleteDeviceActionRequest.c)
 */

__int64 __fastcall PiQueueDeviceRequest(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  _QWORD *v7; // rax
  void *v8; // rdi
  int v9; // ebx
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( a4 )
    *(_DWORD *)a4 = 0;
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v8 = v7;
  if ( v7 && *(_QWORD *)(v7[39] + 40LL) )
  {
    if ( a3 )
      KeInitializeEvent(&Event, NotificationEvent, 0);
    v9 = PnpRequestDeviceAction(
           v8,
           a2,
           0,
           0LL,
           (unsigned __int64)&Event & -(__int64)(a3 != 0),
           a4 & -(__int64)(a3 != 0),
           (__int64 *)((unsigned __int64)&P & -(__int64)(a3 != 0)));
    if ( v9 >= 0 )
    {
      if ( a3 )
      {
        v9 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
        if ( v9 == 257 )
        {
          if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue(P) )
          {
            v9 = -1073741536;
          }
          else
          {
            PnpCancelDeviceActionRequest((__int64)P);
            v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          }
        }
      }
    }
  }
  else
  {
    v9 = -1073741810;
  }
  if ( P )
    PnpDeleteDeviceActionRequest(P);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x43706E50u);
  return (unsigned int)v9;
}
