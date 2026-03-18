/*
 * XREFs of PiUEventProcessEventWorker @ 0x14085B220
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PiUEventDereferenceEventEntry @ 0x14085BBFC (PiUEventDereferenceEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14085C13C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408D2310 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140A37B98 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A49ED0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A50330 (PiUEventNotifyDeviceInstanceChange.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventProcessEventWorker(PVOID P)
{
  int v2; // edi
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v3 = PiUEventUsermodeEventQueue;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    switch ( v3[24] )
    {
      case 1:
LABEL_15:
        v5 = PiUEventNotifyTargetDeviceChange(v3);
        goto LABEL_16;
      case 2:
        v5 = PiUEventNotifyDeviceInterfaceChange(v3);
        goto LABEL_16;
      case 3:
        goto LABEL_15;
      case 4:
LABEL_21:
        v5 = PiUEventNotifyDeviceInstanceChange(v3);
LABEL_16:
        if ( v5 < 0 )
          goto LABEL_9;
        goto LABEL_8;
      case 9:
        v5 = PiUEventNotifyDeviceInstancePropertyChange(v3);
        goto LABEL_16;
    }
    if ( (unsigned int)(v3[24] - 10) < 2 )
      goto LABEL_21;
LABEL_8:
    PiUEventProcessBroadcastNotifications(v3);
LABEL_9:
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    if ( *((PVOID **)PiUEventUsermodeEventQueue + 1) != &PiUEventUsermodeEventQueue
      || (v4 = *(_QWORD *)PiUEventUsermodeEventQueue,
          *(PVOID *)(*(_QWORD *)PiUEventUsermodeEventQueue + 8LL) != PiUEventUsermodeEventQueue) )
    {
      __fastfail(3u);
    }
    PiUEventUsermodeEventQueue = *(PVOID *)PiUEventUsermodeEventQueue;
    *(_QWORD *)(v4 + 8) = &PiUEventUsermodeEventQueue;
    if ( PiUEventUsermodeEventQueue == &PiUEventUsermodeEventQueue )
      v2 = 1;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    PiUEventDereferenceEventEntry(v3);
  }
  while ( !v2 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
