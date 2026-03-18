/*
 * XREFs of PnpInsertEventInQueue @ 0x1408B3950
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140487208 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1404A4D80 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404A7878 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetBlockedDriverEvent @ 0x14072DDE4 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14072DE54 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14072DF60 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14072DFFC (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14072E0B4 (PnpSetPowerVetoEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408B220C (PnpSynchronizeDeviceEventQueue.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B2EAC (PnpQueueQueryAndRemoveEvent.c)
 *     PnpSetDeviceClassChange @ 0x1408B3588 (PnpSetDeviceClassChange.c)
 *     PnpInsertNoopEvent @ 0x1408B3754 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1408B37C0 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x140990378 (PnpSetPlugPlayEvent.c)
 *     PnpRequestDeviceRemoval @ 0x140A1132C (PnpRequestDeviceRemoval.c)
 *     PnpSetTargetDeviceRemove @ 0x140A8F494 (PnpSetTargetDeviceRemove.c)
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     IoGetActivityIdThread @ 0x14043F3F0 (IoGetActivityIdThread.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14046D660 (PnpIsSafeToExamineUserModeTeb.c)
 *     McTemplateK0zjqdtd_EtwWriteTransfer @ 0x1405A73C8 (McTemplateK0zjqdtd_EtwWriteTransfer.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned int v2; // esi
  struct _WORK_QUEUE_ITEM *Pool2; // rdi
  struct _LIST_ENTRY *ActivityIdThread; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  GUID v14; // [rsp+50h] [rbp-28h]

  v14 = CPER_EMPTY_GUID;
  v2 = 0;
  Pool2 = 0LL;
  ActivityIdThread = IoGetActivityIdThread();
  if ( ActivityIdThread )
  {
    v14 = (GUID)*ActivityIdThread;
  }
  else if ( PnpIsSafeToExamineUserModeTeb()
         && KeGetPcr()->NtTib.$F9182C7BBDA5465159379F5666D1C81A::$B2F89C67BE96B06D3F6044187E462952::Self )
  {
    v14 = *(GUID *)&KeGetPcr()->NtTib.$F9182C7BBDA5465159379F5666D1C81A::$B2F89C67BE96B06D3F6044187E462952::Self[105].SubSystemTib;
  }
  *(GUID *)(a1 + 88) = v14;
  if ( (byte_140EEFD23 & 0x10) != 0 )
  {
    v9 = (_QWORD *)(a1 + 120);
    v10 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
    if ( !v10 )
      goto LABEL_23;
    v11 = *v9 - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( *v9 == *(_QWORD *)&GUID_DEVICE_EJECT.Data1 )
      v11 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( !v11 )
    {
LABEL_23:
      v12 = *(_QWORD *)(a1 + 160);
      if ( v12 )
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      else
        v13 = 0LL;
      McTemplateK0zjqdtd_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24) != 0LL,
        (__int64)v9,
        v5,
        *(const wchar_t **)(v13 + 48),
        a1 + 120,
        *(_DWORD *)(a1 + 16),
        *(_DWORD *)(a1 + 20),
        *(_QWORD *)(a1 + 24) != 0LL,
        *(_DWORD *)(a1 + 152));
    }
  }
  ExAcquireFastMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( !BYTE3(NlsMbOemCodePageTag) )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      BYTE3(NlsMbOemCodePageTag) = 1;
      KeResetEvent(&PnpEventQueueEmpty);
    }
    else
    {
      v2 = -1073741670;
    }
  }
  v6 = PnpDeviceEventList + 120;
  v7 = *(_QWORD **)(PnpDeviceEventList + 128);
  if ( *v7 != PnpDeviceEventList + 120 )
    __fastfail(3u);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v7;
  *v7 = a1;
  *(_QWORD *)(v6 + 8) = a1;
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( Pool2 )
  {
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceEventWorker;
    Pool2->Parameter = Pool2;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
  return v2;
}
