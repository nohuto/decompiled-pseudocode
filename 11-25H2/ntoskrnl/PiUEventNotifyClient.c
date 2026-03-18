/*
 * XREFs of PiUEventNotifyClient @ 0x1408D0318
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFCE0 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140A32040 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A45D84 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A4CCA0 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     McTemplateK0qqzqqjqzjztd_EtwWriteTransfer @ 0x1405A29BC (McTemplateK0qqzqqjqzjztd_EtwWriteTransfer.c)
 *     McTemplateK0qqzqqjqzjztx_EtwWriteTransfer @ 0x1405A2B7C (McTemplateK0qqzqqjqzjztx_EtwWriteTransfer.c)
 *     PiUEventGatherEventData @ 0x1407189E8 (PiUEventGatherEventData.c)
 *     PiUEventGetProcessImagePath @ 0x140718A20 (PiUEventGetProcessImagePath.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140966B30 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140A090B4 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x140A0934C (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x140A0AC4C (PiUEventReferenceEventEntry.c)
 *     PiUEventFreeProcessImagePath @ 0x140AB8808 (PiUEventFreeProcessImagePath.c)
 *     PiUEventIsClientStuck @ 0x140ABFFDC (PiUEventIsClientStuck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiUEventNotifyClient(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct _FAST_MUTEX *v4; // rcx
  char v6; // si
  __int64 Pool2; // rsi
  __int64 v9; // r8
  __int64 v10; // r14
  struct _FAST_MUTEX *v11; // rcx
  const WCHAR *v12[6]; // [rsp+80h] [rbp+27h] BYREF
  const wchar_t *v13; // [rsp+C8h] [rbp+6Fh] BYREF
  const wchar_t *v14; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v15; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0;
  v4 = *(struct _FAST_MUTEX **)(a2 + 16);
  v12[0] = 0LL;
  v6 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  ExAcquireFastMutex(v4);
  if ( *(_BYTE *)(a2 + 140) )
  {
    if ( (unsigned __int8)PiUEventIsClientStuck(a2) )
    {
      ++*(_DWORD *)(a2 + 136);
      v6 = 1;
      if ( byte_140EEFA6C < 0 )
      {
        PiUEventGatherEventData(a1, v12, (__int64)&v15, (__int64)&v14);
        PiUEventGetProcessImagePath(*(void **)(a2 + 48), &v13);
        if ( byte_140EEFA6C < 0 )
          McTemplateK0qqzqqjqzjztx_EtwWriteTransfer(
            a1 + 80,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_ClientStuck,
            v9,
            *(_DWORD *)(a2 + 132),
            *(_DWORD *)(a2 + 48),
            v13,
            *(_DWORD *)(a2 + 128),
            *(_DWORD *)(a2 + 136),
            a1 + 80,
            *(_DWORD *)(a1 + 96),
            v12[0],
            v15,
            v14,
            *(_BYTE *)(a1 + 76),
            0);
        PiUEventFreeProcessImagePath(&v13);
      }
    }
  }
  else
  {
    v6 = 1;
  }
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      PiUEventReferenceEventEntry(a1);
      *(_QWORD *)(Pool2 + 24) = a1;
      ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
      v2 = PiUEventQueuePendingEvent(a2, Pool2);
      if ( v2 < 0 )
      {
        v10 = *(_QWORD *)(a2 + 112);
        if ( (byte_140EEFA6D & 1) != 0 )
        {
          PiUEventGatherEventData(*(_QWORD *)(v10 + 24), v12, (__int64)&v15, (__int64)&v14);
          PiUEventGetProcessImagePath(*(void **)(a2 + 48), &v13);
          if ( (byte_140EEFA6D & 1) != 0 )
            McTemplateK0qqzqqjqzjztd_EtwWriteTransfer(
              *(_QWORD *)(v10 + 24),
              (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_QueueFullDropHead,
              (unsigned int)(*(_DWORD *)(a2 + 136) + 1),
              *(_DWORD *)(a2 + 132),
              *(_DWORD *)(a2 + 48),
              v13,
              *(_DWORD *)(a2 + 128),
              *(_BYTE *)(a2 + 136) + 1,
              *(_QWORD *)(v10 + 24) + 80LL,
              *(_DWORD *)(*(_QWORD *)(v10 + 24) + 96LL),
              v12[0],
              v15,
              v14,
              *(_BYTE *)(*(_QWORD *)(v10 + 24) + 76LL),
              v2);
          PiUEventFreeProcessImagePath(&v13);
        }
        PiUEventDequeuePendingEventWorker(a2, v10, 0LL, 0LL);
        ++*(_DWORD *)(a2 + 136);
        v2 = PiUEventQueuePendingEvent(a2, Pool2);
      }
      if ( v2 < 0 )
      {
        v11 = *(struct _FAST_MUTEX **)(a2 + 16);
        ++*(_DWORD *)(a2 + 136);
        KeReleaseGuardedMutex(v11);
        if ( byte_140EEFA6C < 0 )
        {
          PiUEventGatherEventData(*(_QWORD *)(Pool2 + 24), v12, (__int64)&v15, (__int64)&v14);
          PiUEventGetProcessImagePath(*(void **)(a2 + 48), &v13);
          if ( byte_140EEFA6C < 0 )
            McTemplateK0qqzqqjqzjztd_EtwWriteTransfer(
              *(_QWORD *)(Pool2 + 24),
              (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_CouldNotQueueEvent,
              (unsigned int)(*(_DWORD *)(a2 + 136) + 1),
              *(_DWORD *)(a2 + 132),
              *(_DWORD *)(a2 + 48),
              v13,
              *(_DWORD *)(a2 + 128),
              *(_BYTE *)(a2 + 136) + 1,
              *(_QWORD *)(Pool2 + 24) + 80LL,
              *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 96LL),
              v12[0],
              v15,
              v14,
              *(_BYTE *)(*(_QWORD *)(Pool2 + 24) + 76LL),
              v2);
          PiUEventFreeProcessImagePath(&v13);
        }
      }
      else
      {
        *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000014];
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
        PiUEventNotifyClientPendingEvent(a2);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v2;
}
