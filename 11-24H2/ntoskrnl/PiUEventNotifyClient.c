/*
 * XREFs of PiUEventNotifyClient @ 0x1408D0228
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFD00 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140A2C6D8 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A40BF0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A470E0 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     McTemplateK0qqzqqjqzjztd_EtwWriteTransfer @ 0x1405A310C (McTemplateK0qqzqqjqzjztd_EtwWriteTransfer.c)
 *     McTemplateK0qqzqqjqzjztx_EtwWriteTransfer @ 0x1405A32CC (McTemplateK0qqzqqjqzjztx_EtwWriteTransfer.c)
 *     PiUEventGatherEventData @ 0x140722678 (PiUEventGatherEventData.c)
 *     PiUEventGetProcessImagePath @ 0x1407226B0 (PiUEventGetProcessImagePath.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1408570E0 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140A0B608 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x140A0BB4C (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x140A0D68C (PiUEventReferenceEventEntry.c)
 *     PiUEventFreeProcessImagePath @ 0x140AB79A8 (PiUEventFreeProcessImagePath.c)
 *     PiUEventIsClientStuck @ 0x140ABF1A0 (PiUEventIsClientStuck.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
      if ( byte_140EEFF64 < 0 )
      {
        PiUEventGatherEventData(a1, v12, (__int64)&v15, (__int64)&v14);
        PiUEventGetProcessImagePath(*(void **)(a2 + 48), &v13);
        if ( byte_140EEFF64 < 0 )
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
    Pool2 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x59706E50u);
    if ( Pool2 )
    {
      PiUEventReferenceEventEntry(a1);
      *(_QWORD *)(Pool2 + 24) = a1;
      ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
      v2 = PiUEventQueuePendingEvent(a2, Pool2);
      if ( v2 < 0 )
      {
        v10 = *(_QWORD **)(a2 + 112);
        if ( (byte_140EEFF65 & 1) != 0 )
        {
          PiUEventGatherEventData(v10[3], v12, (__int64)&v15, (__int64)&v14);
          PiUEventGetProcessImagePath(*(void **)(a2 + 48), &v13);
          if ( (byte_140EEFF65 & 1) != 0 )
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
        if ( byte_140EEFF64 < 0 )
        {
          PiUEventGatherEventData(*(_QWORD *)(Pool2 + 24), v12, (__int64)&v15, (__int64)&v14);
          PiUEventGetProcessImagePath(*(void **)(a2 + 48), &v13);
          if ( byte_140EEFF64 < 0 )
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
