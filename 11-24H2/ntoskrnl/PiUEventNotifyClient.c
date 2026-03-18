/*
 * XREFs of PiUEventNotifyClient @ 0x1408D2838
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x1408D2310 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140A37B98 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A49ED0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A50330 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     McTemplateK0qqzqqjqzjztd_EtwWriteTransfer @ 0x1405A61D8 (McTemplateK0qqzqqjqzjztd_EtwWriteTransfer.c)
 *     McTemplateK0qqzqqjqzjztx_EtwWriteTransfer @ 0x1405A6398 (McTemplateK0qqzqqjqzjztx_EtwWriteTransfer.c)
 *     PiUEventGatherEventData @ 0x140724AE8 (PiUEventGatherEventData.c)
 *     PiUEventGetProcessImagePath @ 0x140724B20 (PiUEventGetProcessImagePath.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14085B370 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventReferenceEventEntry @ 0x1409ED5C8 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140A12EA8 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x140A133EC (PiUEventQueuePendingEvent.c)
 *     PiUEventFreeProcessImagePath @ 0x140ABC988 (PiUEventFreeProcessImagePath.c)
 *     PiUEventIsClientStuck @ 0x140AC381C (PiUEventIsClientStuck.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiUEventNotifyClient(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct _FAST_MUTEX *v4; // rcx
  char v6; // si
  __int64 Pool2; // rsi
  __int64 v9; // r8
  _QWORD *v10; // r14
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
      if ( byte_140EEFD24 < 0 )
      {
        PiUEventGatherEventData(a1, v12, (__int64)&v15, (__int64)&v14);
        PiUEventGetProcessImagePath(*(void **)(a2 + 48), &v13);
        if ( byte_140EEFD24 < 0 )
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
        v10 = *(_QWORD **)(a2 + 112);
        if ( (byte_140EEFD25 & 1) != 0 )
        {
          PiUEventGatherEventData(v10[3], v12, (__int64)&v15, (__int64)&v14);
          PiUEventGetProcessImagePath(*(void **)(a2 + 48), &v13);
          if ( (byte_140EEFD25 & 1) != 0 )
            McTemplateK0qqzqqjqzjztd_EtwWriteTransfer(
              v10[3],
              (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_QueueFullDropHead,
              (unsigned int)(*(_DWORD *)(a2 + 136) + 1),
              *(_DWORD *)(a2 + 132),
              *(_DWORD *)(a2 + 48),
              v13,
              *(_DWORD *)(a2 + 128),
              *(_BYTE *)(a2 + 136) + 1,
              v10[3] + 80LL,
              *(_DWORD *)(v10[3] + 96LL),
              v12[0],
              v15,
              v14,
              *(_BYTE *)(v10[3] + 76LL),
              v2);
          PiUEventFreeProcessImagePath(&v13);
        }
        PiUEventDequeuePendingEventWorker(a2, v10, 0, 0);
        ++*(_DWORD *)(a2 + 136);
        v2 = PiUEventQueuePendingEvent(a2, Pool2);
      }
      if ( v2 < 0 )
      {
        v11 = *(struct _FAST_MUTEX **)(a2 + 16);
        ++*(_DWORD *)(a2 + 136);
        KeReleaseGuardedMutex(v11);
        if ( byte_140EEFD24 < 0 )
        {
          PiUEventGatherEventData(*(_QWORD *)(Pool2 + 24), v12, (__int64)&v15, (__int64)&v14);
          PiUEventGetProcessImagePath(*(void **)(a2 + 48), &v13);
          if ( byte_140EEFD24 < 0 )
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
