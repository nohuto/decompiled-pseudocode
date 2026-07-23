/*
 * XREFs of PiUEventNotifyUserMode @ 0x14096D4D4
 * Callers:
 *     PnpNotifyUserModeDeviceRemoval @ 0x14096CA78 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpProcessCustomDeviceEvent @ 0x14096CF54 (PnpProcessCustomDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x14096E070 (PnpDeviceEventWorker.c)
 *     PnpProcessTargetDeviceEvent @ 0x140A1B0C8 (PnpProcessTargetDeviceEvent.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     KeInitializeGuardedMutex @ 0x14045E320 (KeInitializeGuardedMutex.c)
 *     RtlStringCchCopyNW @ 0x140468EBC (RtlStringCchCopyNW.c)
 *     PiUEventShouldQueueEvent @ 0x140485368 (PiUEventShouldQueueEvent.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404D5600 (McTemplateK0z_EtwWriteTransfer.c)
 *     McTemplateK0jqzjzx_EtwWriteTransfer @ 0x1405A28A4 (McTemplateK0jqzjzx_EtwWriteTransfer.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PpDevCfgRequestDeviceInstall @ 0x1406EF150 (PpDevCfgRequestDeviceInstall.c)
 *     PiUEventGatherEventData @ 0x1407189E8 (PiUEventGatherEventData.c)
 *     PnpWatchdogTimerStart @ 0x140833CE0 (PnpWatchdogTimerStart.c)
 *     PiUEventDereferenceEventEntry @ 0x1409673BC (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x14096741C (PiUEventFreeEventEntry.c)
 *     PiUEventIsDeviceEventVetoable @ 0x14096D9C8 (PiUEventIsDeviceEventVetoable.c)
 *     PiUEventCacheObjectProperties @ 0x14096DA18 (PiUEventCacheObjectProperties.c)
 *     PnpWatchdogTimerPause @ 0x14096E52C (PnpWatchdogTimerPause.c)
 *     PiUEventReferenceEventEntry @ 0x140A0AC4C (PiUEventReferenceEventEntry.c)
 *     PiUEventDeviceNeedsInstall @ 0x140A72BF8 (PiUEventDeviceNeedsInstall.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // esi
  char v3; // r12
  size_t v4; // r15
  __int64 v5; // rbx
  struct _WORK_QUEUE_ITEM *v6; // rax
  char v7; // r15
  char IsDeviceEventVetoable; // al
  __int64 v10; // rcx
  char v11; // r13
  __int64 v12; // rdx
  const wchar_t *v13; // rax
  __int64 v14; // r15
  __int64 Pool2; // rdi
  struct _FAST_MUTEX *v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rax
  const wchar_t *v19; // r8
  wchar_t *v20; // rcx
  __int64 *v21; // rax
  PVOID *v22; // r15
  NTSTATUS v23; // esi
  __int64 v24; // rax
  const wchar_t *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  struct _KEVENT *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  char v38; // [rsp+50h] [rbp-19h]
  int Buffer; // [rsp+54h] [rbp-15h] BYREF
  const wchar_t *v40; // [rsp+58h] [rbp-11h] BYREF
  __int64 v41; // [rsp+60h] [rbp-9h] BYREF
  const WCHAR *v42; // [rsp+68h] [rbp-1h] BYREF
  STRSAFE_PCNZWCH pszSrc[2]; // [rsp+70h] [rbp+7h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp+17h] BYREF
  char v45; // [rsp+D8h] [rbp+6Fh] BYREF
  char v46; // [rsp+E8h] [rbp+7Fh]

  v2 = 0;
  v3 = 0;
  v38 = 0;
  pszSrc[0] = 0LL;
  v4 = 0LL;
  Timeout.QuadPart = 0LL;
  v5 = 0LL;
  v45 = 0;
  v42 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  v46 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 136) == 4 )
  {
    v25 = (const wchar_t *)(a1 + 168);
    if ( (int)PiUEventDeviceNeedsInstall(a1 + 168, &v45) >= 0
      && v45
      && (int)PpDevCfgRequestDeviceInstall() >= 0
      && (byte_140EEFA6A & 0x10) != 0 )
    {
      McTemplateK0z_EtwWriteTransfer(v26, (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceInstall_Requested, v27, v25);
    }
  }
  if ( PiUEventShouldQueueEvent(a1) )
  {
    IsDeviceEventVetoable = PiUEventIsDeviceEventVetoable(a1);
    v10 = *(_QWORD *)(a1 + 160);
    v11 = IsDeviceEventVetoable;
    if ( v10 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
      if ( v12 )
      {
        v13 = *(const wchar_t **)(v12 + 48);
        v14 = -1LL;
        pszSrc[0] = v13;
        do
          ++v14;
        while ( v13[v14] );
        v4 = v14 + 1;
      }
    }
    Buffer = *(_DWORD *)(a1 + 156) + 80 + 2 * v4;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v16 = (struct _FAST_MUTEX *)ExAllocatePool2(0x40uLL);
    *(_QWORD *)(Pool2 + 16) = v16;
    if ( !v16 )
    {
      v2 = -1073741670;
      goto LABEL_70;
    }
    KeInitializeGuardedMutex(v16);
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_BYTE *)(Pool2 + 77) = v11;
    v17 = *(_DWORD **)(a1 + 48);
    if ( v11 )
    {
      *(_QWORD *)(Pool2 + 32) = v17;
      v24 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(Pool2 + 40) = v24;
      **(_WORD **)(v24 + 8) = 0;
      **(_WORD **)(Pool2 + 40) = 0;
      **(_DWORD **)(Pool2 + 32) = 0;
    }
    else
    {
      if ( v17 )
        *v17 = 0;
      v18 = *(_QWORD *)(a1 + 56);
      if ( v18 )
      {
        **(_WORD **)(v18 + 8) = 0;
        **(_WORD **)(a1 + 56) = 0;
      }
    }
    if ( *(_QWORD *)(a1 + 24) || v11 )
    {
      v28 = *(_QWORD *)(a1 + 104);
      v3 = 1;
      if ( v28 )
      {
        PnpWatchdogTimerPause(*(_QWORD *)(v28 + 8), 0LL);
        v46 = 1;
      }
      v29 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
      *(_QWORD *)(Pool2 + 24) = v29;
      if ( !v29 )
        goto LABEL_5;
      KeInitializeEvent(v29, NotificationEvent, 0);
      PiUEventReferenceEventEntry(Pool2);
    }
    *(_BYTE *)(Pool2 + 76) = v3;
    *(_DWORD *)(Pool2 + 72) = *(_DWORD *)(a1 + 156) + 8;
    memmove((void *)(Pool2 + 80), (const void *)(a1 + 120), *(unsigned int *)(a1 + 156));
    if ( v4 )
    {
      v19 = pszSrc[0];
      v20 = (wchar_t *)(Pool2 + *(unsigned int *)(a1 + 156) + 80LL);
      *(_QWORD *)(Pool2 + 64) = v20;
      RtlStringCchCopyNW(v20, v4, v19, v4);
    }
    PiUEventCacheObjectProperties(Pool2);
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v21 = (__int64 *)qword_140F8B2E8;
    v22 = (PVOID *)PiUEventUsermodeEventQueue;
    if ( *(PVOID **)qword_140F8B2E8 != &PiUEventUsermodeEventQueue )
LABEL_29:
      __fastfail(3u);
    *(_QWORD *)Pool2 = &PiUEventUsermodeEventQueue;
    *(_QWORD *)(Pool2 + 8) = v21;
    *v21 = Pool2;
    qword_140F8B2E8 = Pool2;
    v38 = 1;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    if ( v22 == &PiUEventUsermodeEventQueue )
    {
      v6 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
      if ( !v6 )
      {
LABEL_5:
        v2 = -1073741670;
        v7 = 0;
LABEL_6:
        if ( v46 )
          PnpWatchdogTimerStart(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL));
        if ( v7 )
          return v2;
        if ( v38 )
        {
          ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
          v30 = *(_QWORD *)Pool2;
          if ( *(_QWORD *)(*(_QWORD *)Pool2 + 8LL) != Pool2 )
            goto LABEL_29;
          v31 = *(_QWORD **)(Pool2 + 8);
          if ( *v31 != Pool2 )
            goto LABEL_29;
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
          KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
        }
        if ( v3 && *(_QWORD *)(Pool2 + 24) )
          PiUEventDereferenceEventEntry((PVOID)Pool2);
LABEL_70:
        PiUEventFreeEventEntry((_QWORD *)Pool2);
        return v2;
      }
      v6->List.Flink = 0LL;
      v6->WorkerRoutine = PiUEventProcessEventWorker;
      v6->Parameter = v6;
      ExQueueWorkItem(v6, NormalWorkQueue);
    }
    v7 = 1;
    if ( v3 )
    {
      if ( (byte_140EEFA6C & 2) != 0 )
        v5 = MEMORY[0xFFFFF78000000014];
      pszSrc[0] = (STRSAFE_PCNZWCH)&PnpShutdownEvent;
      pszSrc[1] = *(STRSAFE_PCNZWCH *)(Pool2 + 24);
      Timeout.QuadPart = -10000 * (unsigned __int16)PiUEventSyncTimeoutMs;
      v23 = KeWaitForMultipleObjects(2u, (PVOID *)pszSrc, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
      Buffer = 0;
      ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, &Buffer, 4u, 0LL, 0LL, 0, 0);
      if ( v23 )
      {
        if ( v23 == 1 )
        {
          if ( !v11 || (v2 = -1073741536, !**(_DWORD **)(a1 + 48)) )
            v2 = 0;
          if ( (byte_140EEFA6C & 2) != 0 )
          {
            v32 = (__int64)((unsigned __int128)((MEMORY[0xFFFFF78000000014] - v5) * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
            v33 = (v32 >> 63) + v32;
            if ( v33 > (unsigned __int16)PiUEventSyncLongRunningMs )
            {
              PiUEventGatherEventData(Pool2, &v42, (__int64)&v41, (__int64)&v40);
              if ( (byte_140EEFA6C & 2) != 0 )
                McTemplateK0jqzjzx_EtwWriteTransfer(
                  v34,
                  (const EVENT_DESCRIPTOR *)KMPnPEvt_SynchronousEventLongRunning,
                  v35,
                  Pool2 + 80,
                  *(_DWORD *)(Pool2 + 96),
                  v42,
                  v41,
                  v40,
                  v33);
            }
          }
        }
        else if ( v23 == 258 )
        {
          if ( (byte_140EEFA6C & 2) != 0 )
          {
            PiUEventGatherEventData(Pool2, &v42, (__int64)&v41, (__int64)&v40);
            McTemplateK0jqzjzx_EtwWriteTransfer(
              v36,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SynchronousEventTimeout,
              v37,
              Pool2 + 80,
              *(_DWORD *)(Pool2 + 96),
              v42,
              v41,
              v40,
              PiUEventSyncTimeoutMs);
          }
          v2 = 0;
        }
        else
        {
          v2 = -1073741823;
        }
      }
      else
      {
        v2 = -1073741431;
      }
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
      PiUEventDereferenceEventEntry((PVOID)Pool2);
    }
    goto LABEL_6;
  }
  return v2;
}
