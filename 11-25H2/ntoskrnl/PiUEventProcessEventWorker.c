/*
 * XREFs of PiUEventProcessEventWorker @ 0x1409669E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFCE0 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventDereferenceEventEntry @ 0x1409673BC (PiUEventDereferenceEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140967900 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140A32040 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A45D84 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A4CCA0 (PiUEventNotifyDeviceInstanceChange.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
        v5 = PiUEventNotifyTargetDeviceChange((__int64)v3);
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
