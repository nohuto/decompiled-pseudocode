/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x14085796C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140856F90 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1408570E0 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140857350 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PiUEventFreeEventEntry @ 0x1408579CC (PiUEventFreeEventEntry.c)
 */

__int64 __fastcall PiUEventDereferenceEventEntry(PVOID P)
{
  unsigned int v2; // edi

  ExAcquireFastMutex(*((PKGUARDED_MUTEX *)P + 2));
  v2 = --*((_DWORD *)P + 14);
  if ( *((_BYTE *)P + 76) && v2 == 1 )
    KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
  KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
  if ( !v2 )
    PiUEventFreeEventEntry(P);
  return v2;
}
