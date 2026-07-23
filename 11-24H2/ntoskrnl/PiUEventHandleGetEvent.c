/*
 * XREFs of PiUEventHandleGetEvent @ 0x140857350
 * Callers:
 *     PiUEventHandleIoctl @ 0x140857294 (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer @ 0x1405A348C (McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer.c)
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x1406F57B4 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventGatherEventData @ 0x140722678 (PiUEventGatherEventData.c)
 *     PiUEventGetProcessImagePath @ 0x1407226B0 (PiUEventGetProcessImagePath.c)
 *     PiUEventCopyEventData @ 0x1408575B0 (PiUEventCopyEventData.c)
 *     PiUEventDereferenceEventEntry @ 0x14085796C (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140A0B608 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventFreeProcessImagePath @ 0x140AB79A8 (PiUEventFreeProcessImagePath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventHandleGetEvent(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r14
  int v6; // r15d
  struct _FAST_MUTEX *v9; // rcx
  unsigned int v10; // edi
  _QWORD *v11; // rbx
  __int64 v12; // r8
  _QWORD *v13; // r13
  __int64 v14; // rax
  __int64 *v15; // r8
  _QWORD *v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r8
  const wchar_t *v21; // [rsp+90h] [rbp-68h] BYREF
  __int64 v22; // [rsp+98h] [rbp-60h] BYREF
  const WCHAR *v23; // [rsp+A0h] [rbp-58h] BYREF
  __int64 *v24; // [rsp+A8h] [rbp-50h]
  unsigned int *v25; // [rsp+B0h] [rbp-48h]
  const wchar_t *v26; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+110h] [rbp+18h]

  v27 = a3;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  if ( !v5 || !a2 || a4 <= 4 )
    return (unsigned int)-1073741811;
  *a2 = 0;
  v9 = *(struct _FAST_MUTEX **)(v5 + 16);
  v25 = a2 + 1;
  v10 = a4 - 4;
  ExAcquireFastMutex(v9);
  v11 = *(_QWORD **)(v5 + 112);
  while ( v11 != (_QWORD *)(v5 + 112) && v6 >= 0 )
  {
    v12 = v11[3];
    v13 = v11;
    v24 = v11 + 3;
    v6 = PiUEventCopyEventData(v25, v10, v12);
    if ( v6 < 0 )
    {
      if ( !*a2 )
      {
        *(_QWORD *)(a5 + 8) = 0LL;
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
        return (unsigned int)v6;
      }
      break;
    }
    v14 = *v25;
    v27 = v10 - v14;
    if ( (unsigned int)v14 > v10 )
      v6 = -1073741789;
    else
      v25 = (unsigned int *)((char *)v25 + v14);
    ++*a2;
    v15 = v24;
    v11 = (_QWORD *)*v11;
    if ( !*(_BYTE *)(*v24 + 76) )
    {
      v23 = 0LL;
      v22 = 0LL;
      v21 = 0LL;
      v26 = 0LL;
      if ( (_QWORD *)v11[1] != v13 || (v16 = (_QWORD *)v13[1], (_QWORD *)*v16 != v13) )
        __fastfail(3u);
      *v16 = v11;
      v11[1] = v16;
      --*(_DWORD *)(v5 + 128);
      if ( (byte_140EEFF64 & 0x82) == 0 )
        goto LABEL_22;
      v18 = *v15;
      v19 = (MEMORY[0xFFFFF78000000014] - v13[2]) / 10000LL;
      if ( *(_BYTE *)(*v15 + 76) )
      {
        if ( v19 <= (unsigned __int16)PiUEventSyncEventTimeMs )
          goto LABEL_22;
        PiUEventGatherEventData(v18, &v23, (__int64)&v22, (__int64)&v21);
        PiUEventGetProcessImagePath(*(void **)(v5 + 48), &v26);
        if ( (byte_140EEFF64 & 2) != 0 )
          McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer(
            *v24,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_DequeueOldSyncEvent,
            0LL,
            *(_DWORD *)(v5 + 132),
            *(_DWORD *)(v5 + 48),
            v26,
            *(_DWORD *)(v5 + 128),
            *(_DWORD *)(v5 + 136),
            0,
            *v24 + 80,
            *(_DWORD *)(*v24 + 96),
            v23,
            v22,
            v21,
            *(_BYTE *)(*v24 + 76),
            0,
            v19);
      }
      else
      {
        if ( v19 <= (unsigned __int16)PiUEventPendingQueueTimeMs )
        {
LABEL_22:
          PiUEventDereferenceEventEntry((PVOID)*v24);
          ExFreePoolWithTag(v13, 0x59706E50u);
          goto LABEL_23;
        }
        PiUEventGatherEventData(v18, &v23, (__int64)&v22, (__int64)&v21);
        PiUEventGetProcessImagePath(*(void **)(v5 + 48), &v26);
        if ( byte_140EEFF64 < 0 )
          McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer(
            *v24,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_DequeueOldAsyncEvent,
            v20,
            *(_DWORD *)(v5 + 132),
            *(_DWORD *)(v5 + 48),
            v26,
            *(_DWORD *)(v5 + 128),
            *(_DWORD *)(v5 + 136),
            0,
            *v24 + 80,
            *(_DWORD *)(*v24 + 96),
            v23,
            v22,
            v21,
            *(_BYTE *)(*v24 + 76),
            0,
            v19);
      }
      PiUEventFreeProcessImagePath(&v26);
      goto LABEL_22;
    }
    PiUEventMovePendingEventToSynchronousQueue(v5, v13);
LABEL_23:
    v10 = v27;
  }
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
  if ( v6 == -1073741789 )
  {
    v6 = 0;
    PiUEventNotifyClientPendingEvent(v5);
  }
  *(_QWORD *)(a5 + 8) = a4 - v10;
  return (unsigned int)v6;
}
