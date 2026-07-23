/*
 * XREFs of RtlpCtContextInit @ 0x140787018
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405ED4D0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlpCtContextFree @ 0x140786FBC (RtlpCtContextFree.c)
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpCtContextInit(__int64 *a1, int a2)
{
  __int64 Pool2; // rdi
  int v5; // ebx
  struct _KEVENT *v6; // rax
  _QWORD *v8; // rax

  *a1 = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL, 0x18uLL, 0x67744364u);
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    v6 = (struct _KEVENT *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x67744364u);
    *(_QWORD *)(Pool2 + 16) = v6;
    if ( v6
      && (KeInitializeEvent(v6, NotificationEvent, 0),
          v8 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x67744364u),
          (*(_QWORD *)Pool2 = v8) != 0LL) )
    {
      *v8 = 0LL;
      v8[2] = RtlpRtlpCtWaitForWnfQuiescentWorker;
      v8[3] = Pool2;
      v5 = ExSubscribeWnfStateChange(
             (int)Pool2 + 8,
             (unsigned int)&WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
             8,
             a2,
             (__int64)RtlpRtlpCtSelfSubscribeCallback,
             Pool2);
      if ( v5 >= 0 )
      {
        *a1 = Pool2;
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    RtlpCtContextFree((PVOID *)Pool2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
