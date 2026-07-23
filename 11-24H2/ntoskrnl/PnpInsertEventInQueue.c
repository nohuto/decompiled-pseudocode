/*
 * XREFs of PnpInsertEventInQueue @ 0x1408B1240
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140482278 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14049FB10 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404A22A8 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetBlockedDriverEvent @ 0x14072BDF4 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14072BE64 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14072BF70 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14072C00C (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14072C0C4 (PnpSetPowerVetoEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408AFB00 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B079C (PnpQueueQueryAndRemoveEvent.c)
 *     PnpSetDeviceClassChange @ 0x1408B0E78 (PnpSetDeviceClassChange.c)
 *     PnpInsertNoopEvent @ 0x1408B1044 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1408B10B0 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x14097B3B0 (PnpSetPlugPlayEvent.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 *     PnpSetTargetDeviceRemove @ 0x140A8BB2C (PnpSetTargetDeviceRemove.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140468200 (PnpIsSafeToExamineUserModeTeb.c)
 *     McTemplateK0zjqdtd_EtwWriteTransfer @ 0x1405A43B8 (McTemplateK0zjqdtd_EtwWriteTransfer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned int v2; // esi
  struct _WORK_QUEUE_ITEM *Pool2; // rdi
  struct _LIST_ENTRY *ActivityIdThread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  GUID v16; // [rsp+50h] [rbp-28h]

  v16 = CPER_EMPTY_GUID;
  v2 = 0;
  Pool2 = 0LL;
  ActivityIdThread = IoGetActivityIdThread();
  if ( ActivityIdThread )
  {
    v16 = (GUID)*ActivityIdThread;
  }
  else if ( PnpIsSafeToExamineUserModeTeb(v6, v5)
         && KeGetPcr()->NtTib.$5225818D498B3FAE6A65DB4E37572489::$27D8BC11A01A0546FE12179A0057C7B6::Self )
  {
    v16 = *(GUID *)&KeGetPcr()->NtTib.$5225818D498B3FAE6A65DB4E37572489::$27D8BC11A01A0546FE12179A0057C7B6::Self[105].SubSystemTib;
  }
  *(GUID *)(a1 + 88) = v16;
  if ( (byte_140EEFF63 & 0x10) != 0 )
  {
    v11 = (_QWORD *)(a1 + 120);
    v12 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
    if ( !v12 )
      v12 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
    if ( !v12 )
      goto LABEL_23;
    v13 = *v11 - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( *v11 == *(_QWORD *)&GUID_DEVICE_EJECT.Data1 )
      v13 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( !v13 )
    {
LABEL_23:
      v14 = *(_QWORD *)(a1 + 160);
      if ( v14 )
        v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
      else
        v15 = 0LL;
      McTemplateK0zjqdtd_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24) != 0LL,
        (__int64)v11,
        v7,
        *(const wchar_t **)(v15 + 48),
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
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x4C706E50u);
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
  v8 = PnpDeviceEventList + 120;
  v9 = *(_QWORD **)(PnpDeviceEventList + 128);
  if ( *v9 != PnpDeviceEventList + 120 )
    __fastfail(3u);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v9;
  *v9 = a1;
  *(_QWORD *)(v8 + 8) = a1;
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
